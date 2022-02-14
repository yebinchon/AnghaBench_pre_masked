
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_device_info {int direct; scalar_t__ chnl_addr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct thermal_device_info* FUNC_0 (int,int ) ;

__attribute__((used)) static struct thermal_device_info *FUNC_1(int VAR_3)
{
 struct thermal_device_info *VAR_4 =
  FUNC_0(sizeof(struct thermal_device_info), VAR_1);

 if (!VAR_4)
  return ((void*)0);


 VAR_4->chnl_addr = VAR_0 + 2 * (VAR_2 + VAR_3);

 if (VAR_3 == 3)
  VAR_4->direct = 1;
 return VAR_4;
}
