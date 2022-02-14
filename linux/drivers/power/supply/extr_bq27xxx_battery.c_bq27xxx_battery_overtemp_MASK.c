
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct bq27xxx_device_info {int opts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static bool FUNC_0(struct bq27xxx_device_info *VAR_5, u16 VAR_6)
{
 if (VAR_5->opts & VAR_3)
  return VAR_6 & (VAR_1 | VAR_2);
        if (VAR_5->opts & VAR_4)
  return VAR_6 & VAR_0;

 return 0;
}
