
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct axp288_fg_info {int max_volt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct axp288_fg_info*,int*) ;

__attribute__((used)) static int FUNC_1(struct axp288_fg_info *VAR_3)
{
 int VAR_4, VAR_5, VAR_6 = VAR_2;

 VAR_4 = FUNC_0(VAR_3, &VAR_5);
 if (VAR_4 < 0)
  goto health_read_fail;

 if (VAR_5 > VAR_3->max_volt)
  VAR_6 = VAR_1;
 else
  VAR_6 = VAR_0;

health_read_fail:
 return VAR_6;
}
