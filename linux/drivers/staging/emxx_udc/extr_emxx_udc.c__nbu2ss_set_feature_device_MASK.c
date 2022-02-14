
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct nbu2ss_udc {int remote_wakeup; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



__attribute__((used)) static int FUNC_0(struct nbu2ss_udc *VAR_3,
          u16 VAR_4, u16 VAR_5)
{
 int VAR_6 = -VAR_0;

 switch (VAR_4) {
 case 129:
  if (VAR_5 == 0x0000) {
   VAR_3->remote_wakeup = VAR_2;
   VAR_6 = 0;
  }
  break;

 case 128:
  VAR_5 >>= 8;
  if (VAR_5 <= VAR_1)
   VAR_6 = 0;
  break;

 default:
  break;
 }

 return VAR_6;
}
