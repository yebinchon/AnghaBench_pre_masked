
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwc_device {int type; int release; int* ctrl_buf; int power_save; } ;


 int FUNC_0 (char*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct pwc_device*,int ,int ,int*,int) ;

void FUNC_2(struct pwc_device *VAR_2, int VAR_3)
{
 int VAR_4;

 if (!VAR_2->power_save)
  return;

 if (VAR_2->type < 675 || (VAR_2->type < 730 && VAR_2->release < 6))
  return;

 if (VAR_3)
  VAR_2->ctrl_buf[0] = 0x00;
 else
  VAR_2->ctrl_buf[0] = 0xFF;
 VAR_4 = FUNC_1(VAR_2, VAR_1,
  VAR_0, VAR_2->ctrl_buf, 1);
 if (VAR_4 < 0)
  FUNC_0("Failed to power %s camera (%d)\n",
     VAR_3 ? "on" : "off", VAR_4);
}
