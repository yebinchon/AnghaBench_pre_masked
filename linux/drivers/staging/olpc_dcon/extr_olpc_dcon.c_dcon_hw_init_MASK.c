
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct dcon_priv {int disp_mode; TYPE_1__* client; } ;
struct TYPE_4__ {int (* init ) (struct dcon_priv*) ;} ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct dcon_priv*,int ) ;
 int FUNC_1 (struct dcon_priv*,int,int) ;
 int FUNC_2 (int *,char*) ;
 TYPE_2__* VAR_14 ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*,int) ;
 int VAR_15 ;
 int FUNC_5 (struct dcon_priv*) ;

__attribute__((used)) static int FUNC_6(struct dcon_priv *VAR_16, int VAR_17)
{
 u16 VAR_18;
 int VAR_19 = 0;

 VAR_18 = FUNC_0(VAR_16, VAR_0);
 if ((VAR_18 >> 8) != 0xDC) {
  FUNC_3("DCON ID not 0xDCxx: 0x%04x instead.\n", VAR_18);
  VAR_19 = -VAR_6;
  goto err;
 }

 if (VAR_17) {
  FUNC_4("Discovered DCON version %x\n", VAR_18 & 0xFF);
  VAR_19 = VAR_14->init(VAR_16);
  if (VAR_19 != 0) {
   FUNC_3("Unable to init.\n");
   goto err;
  }
 }

 if (VAR_18 < 0xdc02) {
  FUNC_2(&VAR_16->client->dev,
   "DCON v1 is unsupported, giving up..\n");
  VAR_19 = -VAR_5;
  goto err;
 }


 FUNC_1(VAR_16, 0x3a, 0xc040);
 FUNC_1(VAR_16, VAR_1, 0x0000);
 FUNC_1(VAR_16, VAR_1,
     VAR_7 | VAR_8);
 FUNC_1(VAR_16, VAR_2, VAR_9);


 if (VAR_17) {
  VAR_16->disp_mode = VAR_13 | VAR_10 |
    VAR_12 | VAR_11;
 }
 FUNC_1(VAR_16, VAR_3, VAR_16->disp_mode);


 FUNC_1(VAR_16, VAR_4, VAR_15);

err:
 return VAR_19;
}
