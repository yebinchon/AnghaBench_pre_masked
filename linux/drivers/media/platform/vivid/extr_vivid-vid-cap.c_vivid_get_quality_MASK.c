
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vivid_dev {int tv_freq; int tpg; } ;
typedef unsigned int s32 ;
typedef enum tpg_quality { ____Placeholder_tpg_quality } tpg_quality ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static enum tpg_quality FUNC_1(struct vivid_dev *VAR_3, s32 *VAR_4)
{
 unsigned VAR_5;

 if (VAR_4)
  *VAR_4 = 0;
 if (FUNC_0(&VAR_3->tpg) == VAR_0 ||
     FUNC_0(&VAR_3->tpg) == VAR_2)
  return FUNC_0(&VAR_3->tpg);







 VAR_5 = (VAR_3->tv_freq - 676 ) % (6 * 16);
 if (VAR_4)
  *VAR_4 = VAR_5 - 1 * 16;
 return VAR_1;
}
