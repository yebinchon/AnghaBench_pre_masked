
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct slim_device {int dummy; } ;


 int FUNC_0 (struct slim_device*,int ,int,int*) ;

int FUNC_1(struct slim_device *VAR_0, u32 VAR_1)
{
 int VAR_2;
 u8 VAR_3;

 VAR_2 = FUNC_0(VAR_0, VAR_1, 1, &VAR_3);
 if (VAR_2 < 0)
  return VAR_2;
 else
  return VAR_3;
}
