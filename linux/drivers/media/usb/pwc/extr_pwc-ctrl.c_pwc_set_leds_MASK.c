
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwc_device {int type; int* ctrl_buf; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int VAR_1 ;
 int FUNC_1 (struct pwc_device*,int ,int ,int*,int) ;

int FUNC_2(struct pwc_device *VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5;

 if (VAR_2->type < 730)
  return 0;
 VAR_3 /= 100;
 VAR_4 /= 100;
 if (VAR_3 < 0)
  VAR_3 = 0;
 if (VAR_3 > 0xff)
  VAR_3 = 0xff;
 if (VAR_4 < 0)
  VAR_4 = 0;
 if (VAR_4 > 0xff)
  VAR_4 = 0xff;

 VAR_2->ctrl_buf[0] = VAR_3;
 VAR_2->ctrl_buf[1] = VAR_4;

 VAR_5 = FUNC_1(VAR_2,
  VAR_1, VAR_0, VAR_2->ctrl_buf, 2);
 if (VAR_5 < 0)
  FUNC_0("Failed to set LED on/off time (%d)\n", VAR_5);

 return VAR_5;
}
