
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct antsel_info {scalar_t__ antsel_type; int antcfg_11n; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct antsel_info*,int *) ;

void FUNC_1(struct antsel_info *VAR_2)
{
 if ((VAR_2->antsel_type == VAR_0) ||
     (VAR_2->antsel_type == VAR_1))
  FUNC_0(VAR_2, &VAR_2->antcfg_11n);
}
