
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct bq27xxx_device_info {int opts; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_0(struct bq27xxx_device_info *VAR_2, u16 VAR_3)
{
 if (VAR_2->opts & VAR_1)
  return VAR_3 & VAR_0;

 return 0;
}
