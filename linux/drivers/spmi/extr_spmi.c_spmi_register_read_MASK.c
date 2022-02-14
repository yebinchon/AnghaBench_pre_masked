
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spmi_device {int usid; int ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int,int*,int) ;

int FUNC_1(struct spmi_device *VAR_2, u8 VAR_3, u8 *VAR_4)
{

 if (VAR_3 > 0x1F)
  return -VAR_0;

 return FUNC_0(VAR_2->ctrl, VAR_1, VAR_2->usid, VAR_3,
        VAR_4, 1);
}
