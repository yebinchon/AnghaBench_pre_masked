
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct zd1201 {TYPE_1__* usb; int * rxdata; scalar_t__ rxlen; scalar_t__ rxdatas; int rxdataq; int endp_out2; } ;
struct urb {int dummy; } ;
typedef int gfp_t ;
typedef int __le32 ;
typedef int __le16 ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned char VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (unsigned char*) ;
 unsigned char* FUNC_4 (int,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (unsigned char*,void*,int) ;
 int FUNC_7 (unsigned char*,int ,int) ;
 struct urb* FUNC_8 (int ,int ) ;
 int FUNC_9 (struct urb*,TYPE_1__*,int ,unsigned char*,int,int ,struct zd1201*) ;
 int FUNC_10 (struct urb*) ;
 int FUNC_11 (TYPE_1__*,int ) ;
 int FUNC_12 (struct urb*,int ) ;
 int FUNC_13 (int ,scalar_t__) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_14(struct zd1201 *VAR_8, int VAR_9, void *VAR_10, int VAR_11, int VAR_12)
{
 int VAR_13;
 unsigned char *VAR_14;
 int VAR_15;
 char VAR_16=0;
 struct urb *VAR_17;
 gfp_t VAR_18 = VAR_12 ? VAR_2 : VAR_1;

 VAR_11 += 4;

 VAR_8->rxdatas = 0;
 VAR_8->rxlen = 0;
 for (VAR_16=0; VAR_11 > 0; VAR_16++) {
  VAR_14 = FUNC_4(16, VAR_18);
  if (!VAR_14)
   return -VAR_0;
  VAR_17 = FUNC_8(0, VAR_18);
  if (!VAR_17) {
   FUNC_3(VAR_14);
   return -VAR_0;
  }
  FUNC_7(VAR_14, 0, 16);
  VAR_15 = VAR_11>12 ? 12 : VAR_11;
  VAR_14[0] = VAR_6;
  VAR_14[1] = VAR_16;
  VAR_14[2] = 0;
  VAR_14[3] = 0;
  if (VAR_14[1] == 0) {

   *(__le16*)&VAR_14[4] = FUNC_0((VAR_11-2+1)/2);
   *(__le16*)&VAR_14[6] = FUNC_0(VAR_9);
   FUNC_6(VAR_14+8, VAR_10, VAR_15-4);
   VAR_10 += VAR_15-4;
  } else {
   FUNC_6(VAR_14+4, VAR_10, VAR_15);
   VAR_10 += VAR_15;
  }

  VAR_11 -= VAR_15;

  FUNC_9(VAR_17, VAR_8->usb, FUNC_11(VAR_8->usb,
      VAR_8->endp_out2), VAR_14, 16, VAR_7, VAR_8);
  VAR_13 = FUNC_12(VAR_17, VAR_18);
  if (VAR_13)
   goto err;
 }

 VAR_14 = FUNC_4(16, VAR_18);
 if (!VAR_14)
  return -VAR_0;
 VAR_17 = FUNC_8(0, VAR_18);
 if (!VAR_17) {
  FUNC_3(VAR_14);
  return -VAR_0;
 }
 *((__le32*)VAR_14) = FUNC_1(VAR_5);
 *((__le16*)&VAR_14[4]) =
     FUNC_0(VAR_4|VAR_3);
 *((__le16*)&VAR_14[6]) = FUNC_0(VAR_9);
 *((__le16*)&VAR_14[8]) = FUNC_0(0);
 *((__le16*)&VAR_14[10]) = FUNC_0(0);
 FUNC_9(VAR_17, VAR_8->usb, FUNC_11(VAR_8->usb, VAR_8->endp_out2),
      VAR_14, 16, VAR_7, VAR_8);
 VAR_13 = FUNC_12(VAR_17, VAR_18);
 if (VAR_13)
  goto err;

 if (VAR_12) {
  FUNC_13(VAR_8->rxdataq, VAR_8->rxdatas);
  if (!VAR_8->rxlen || FUNC_5(*(__le16*)&VAR_8->rxdata[6]) != VAR_9) {
   FUNC_2(&VAR_8->usb->dev, "wrong or no RID received\n");
  }
 }

 return 0;
err:
 FUNC_3(VAR_14);
 FUNC_10(VAR_17);
 return VAR_13;
}
