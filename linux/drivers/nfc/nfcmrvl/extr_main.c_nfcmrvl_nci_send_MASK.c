
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {unsigned char len; void* dev; } ;
struct TYPE_3__ {scalar_t__ hci_muxed; } ;
struct nfcmrvl_private {TYPE_2__* if_ops; TYPE_1__ config; int dev; } ;
struct nci_dev {int dummy; } ;
struct TYPE_4__ {int (* nci_send ) (struct nfcmrvl_private*,struct sk_buff*) ;} ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 struct nfcmrvl_private* FUNC_0 (struct nci_dev*) ;
 int FUNC_1 (int ,char*,unsigned char) ;
 unsigned char* FUNC_2 (struct sk_buff*,int ) ;
 int FUNC_3 (struct nfcmrvl_private*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_4(struct nci_dev *VAR_4, struct sk_buff *VAR_5)
{
 struct nfcmrvl_private *VAR_6 = FUNC_0(VAR_4);

 FUNC_1(VAR_6->dev, "send entry, len %d\n", VAR_5->len);

 VAR_5->dev = (void *)VAR_4;

 if (VAR_6->config.hci_muxed) {
  unsigned char *VAR_7;
  unsigned char VAR_8 = VAR_5->len;

  VAR_7 = FUNC_2(VAR_5, VAR_1);
  VAR_7[0] = VAR_0;
  VAR_7[1] = VAR_3;
  VAR_7[2] = VAR_2;
  VAR_7[3] = VAR_8;
 }

 return VAR_6->if_ops->nci_send(VAR_6, VAR_5);
}
