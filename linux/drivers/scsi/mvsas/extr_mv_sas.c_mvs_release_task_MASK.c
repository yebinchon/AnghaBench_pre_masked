
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvs_info {int dummy; } ;
struct domain_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mvs_info*,int,struct domain_device*) ;
 int FUNC_1 (struct domain_device*,int*) ;

void FUNC_2(struct mvs_info *VAR_1,
        struct domain_device *VAR_2)
{
 int VAR_3, VAR_4[VAR_0], VAR_5;
 VAR_5 = FUNC_1(VAR_2, VAR_4);
 for (VAR_3 = 0; VAR_3 < VAR_5; VAR_3++)
  FUNC_0(VAR_1, VAR_4[VAR_3], VAR_2);
}
