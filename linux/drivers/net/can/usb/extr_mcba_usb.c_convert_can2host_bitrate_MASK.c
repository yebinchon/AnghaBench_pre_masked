
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mcba_usb_msg_ka_can {int can_bitrate; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static u32 FUNC_1(struct mcba_usb_msg_ka_can *VAR_0)
{
 const u32 VAR_1 = FUNC_0(&VAR_0->can_bitrate);

 if ((VAR_1 == 33) || (VAR_1 == 83))
  return VAR_1 * 1000 + 333;
 else
  return VAR_1 * 1000;
}
