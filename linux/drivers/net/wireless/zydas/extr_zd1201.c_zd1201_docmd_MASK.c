
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zd1201 {int endp_out2; int usb; } ;
struct urb {int dummy; } ;
typedef int __le32 ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned char*) ;
 unsigned char* FUNC_3 (int,int ) ;
 struct urb* FUNC_4 (int ,int ) ;
 int FUNC_5 (struct urb*,int ,int ,unsigned char*,int,int ,struct zd1201*) ;
 int FUNC_6 (struct urb*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct urb*,int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_9(struct zd1201 *VAR_4, int VAR_5, int VAR_6,
   int VAR_7, int VAR_8)
{
 unsigned char *VAR_9;
 int VAR_10;
 struct urb *VAR_11;

 VAR_9 = FUNC_3(16, VAR_1);
 if (!VAR_9)
  return -VAR_0;

 *((__le32*)VAR_9) = FUNC_1(VAR_2);
 *((__le16*)&VAR_9[4]) = FUNC_0(VAR_5);
 *((__le16*)&VAR_9[6]) = FUNC_0(VAR_6);
 *((__le16*)&VAR_9[8]) = FUNC_0(VAR_7);
 *((__le16*)&VAR_9[10])= FUNC_0(VAR_8);

 VAR_11 = FUNC_4(0, VAR_1);
 if (!VAR_11) {
  FUNC_2(VAR_9);
  return -VAR_0;
 }
 FUNC_5(VAR_11, VAR_4->usb, FUNC_7(VAR_4->usb, VAR_4->endp_out2),
     VAR_9, 16, VAR_3, VAR_4);
 VAR_10 = FUNC_8(VAR_11, VAR_1);
 if (VAR_10) {
  FUNC_2(VAR_9);
  FUNC_6(VAR_11);
 }

 return VAR_10;
}
