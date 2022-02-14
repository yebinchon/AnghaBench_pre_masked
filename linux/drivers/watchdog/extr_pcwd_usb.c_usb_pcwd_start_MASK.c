
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_pcwd_private {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct usb_pcwd_private*,int ,unsigned char*,unsigned char*) ;

__attribute__((used)) static int FUNC_2(struct usb_pcwd_private *VAR_1)
{
 unsigned char VAR_2 = 0x00;
 unsigned char VAR_3 = 0x00;
 int VAR_4;


 VAR_4 = FUNC_1(VAR_1, VAR_0,
        &VAR_2, &VAR_3);

 if ((VAR_4 == 0) || (VAR_3 == 0)) {
  FUNC_0("Card did not acknowledge enable attempt\n");
  return -1;
 }

 return 0;
}
