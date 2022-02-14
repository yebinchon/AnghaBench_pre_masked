
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct pwc_device {int * ctrl_buf; } ;


 int FUNC_0 (struct pwc_device*,int ,int ,int *,int) ;

int FUNC_1(struct pwc_device *VAR_0, u8 VAR_1, u16 VAR_2, u8 VAR_3)
{
 int VAR_4;

 VAR_0->ctrl_buf[0] = VAR_3;
 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_0->ctrl_buf, 1);
 if (VAR_4 < 0)
  return VAR_4;

 return 0;
}
