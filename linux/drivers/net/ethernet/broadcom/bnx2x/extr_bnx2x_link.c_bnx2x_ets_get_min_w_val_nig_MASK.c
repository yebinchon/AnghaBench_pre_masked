
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct link_vars {scalar_t__ line_speed; scalar_t__ link_up; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static u32 FUNC_0(const struct link_vars *VAR_3)
{
 u32 VAR_4 = 0;

 if (VAR_3->link_up) {
  if (VAR_3->line_speed == VAR_2)
   VAR_4 = VAR_0;
  else
   VAR_4 = VAR_1;
 } else
  VAR_4 = VAR_0;



 return VAR_4;
}
