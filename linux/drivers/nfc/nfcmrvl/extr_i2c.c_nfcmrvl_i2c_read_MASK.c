
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct nfcmrvl_i2c_drv_data {TYPE_2__* i2c; TYPE_1__* priv; } ;
struct nci_ctrl_hdr {int plen; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int ndev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,int *,int) ;
 int FUNC_1 (struct sk_buff*) ;
 struct sk_buff* FUNC_2 (int ,int,int ) ;
 int FUNC_3 (int *,char*,...) ;
 int * FUNC_4 (struct sk_buff*,int) ;
 int FUNC_5 (struct sk_buff*,struct nci_ctrl_hdr*,int) ;

__attribute__((used)) static int FUNC_6(struct nfcmrvl_i2c_drv_data *VAR_5,
       struct sk_buff **VAR_6)
{
 int VAR_7;
 struct nci_ctrl_hdr VAR_8;


 VAR_7 = FUNC_0(VAR_5->i2c, (u8 *)&VAR_8, VAR_3);
 if (VAR_7 != VAR_3) {
  FUNC_3(&VAR_5->i2c->dev, "cannot read NCI header\n");
  return -VAR_0;
 }

 if (VAR_8.plen > VAR_4) {
  FUNC_3(&VAR_5->i2c->dev, "invalid packet payload size\n");
  return -VAR_0;
 }

 *VAR_6 = FUNC_2(VAR_5->priv->ndev,
        VAR_8.plen + VAR_3, VAR_2);
 if (!*VAR_6)
  return -VAR_1;


 FUNC_5(*VAR_6, &VAR_8, VAR_3);

 if (VAR_8.plen) {

  VAR_7 = FUNC_0(VAR_5->i2c,
          FUNC_4(*VAR_6, VAR_8.plen),
          VAR_8.plen);

  if (VAR_7 != VAR_8.plen) {
   FUNC_3(&VAR_5->i2c->dev,
    "Invalid frame payload length: %u (expected %u)\n",
    VAR_7, VAR_8.plen);
   FUNC_1(*VAR_6);
   return -VAR_0;
  }
 }

 return 0;
}
