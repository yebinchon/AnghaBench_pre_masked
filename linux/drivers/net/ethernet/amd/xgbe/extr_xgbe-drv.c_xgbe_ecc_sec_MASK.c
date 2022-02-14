
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {int dev; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (int ,char*,char const*) ;
 unsigned int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned int VAR_3 ;
 unsigned long VAR_4 ;
 scalar_t__ FUNC_1 (unsigned long,unsigned long) ;

__attribute__((used)) static bool FUNC_2(struct xgbe_prv_data *VAR_5, unsigned long *VAR_6,
    unsigned int *VAR_7, const char *VAR_8)
{
 if (FUNC_1(VAR_4, *VAR_6)) {
  (*VAR_7)++;
 } else {
  *VAR_6 = VAR_4 + (VAR_2 * VAR_0);
  *VAR_7 = 1;
 }

 if (*VAR_7 > VAR_1)
  FUNC_0(VAR_5->dev,
         "%s ECC corrected errors exceed informational threshold\n",
         VAR_8);

 if (*VAR_7 > VAR_3) {
  FUNC_0(VAR_5->dev,
         "%s ECC corrected errors exceed warning threshold\n",
         VAR_8);
  return 1;
 }

 return 0;
}
