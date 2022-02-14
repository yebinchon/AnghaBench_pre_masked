
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtsx_cr_option {int force_clkreq_0; } ;
struct rtsx_pcr {struct rtsx_cr_option option; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct rtsx_pcr*,int) ;

__attribute__((used)) static int FUNC_1(struct rtsx_pcr *VAR_4)
{
 struct rtsx_cr_option *VAR_5 = &(VAR_4->option);

 if (FUNC_0(VAR_4, VAR_0 | VAR_1
    | VAR_2 | VAR_3))
  VAR_5->force_clkreq_0 = 0;
 else
  VAR_5->force_clkreq_0 = 1;

 return 0;
}
