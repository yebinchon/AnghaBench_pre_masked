
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ds2781_device_info {int w1_dev; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2(struct ds2781_device_info *VAR_0, int VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_0->w1_dev, VAR_1);
 if (VAR_2 < 0)
  return VAR_2;

 VAR_2 = FUNC_0(VAR_0->w1_dev, VAR_1);
 if (VAR_2 < 0)
  return VAR_2;

 return 0;
}
