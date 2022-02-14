
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {int netdev; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned int VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (int ,char*,char const*) ;
 scalar_t__ FUNC_1 (unsigned long,unsigned long) ;

__attribute__((used)) static bool FUNC_2(struct xgbe_prv_data *VAR_4, unsigned long *VAR_5,
    unsigned int *VAR_6, const char *VAR_7)
{
 if (FUNC_1(VAR_3, *VAR_5)) {
  (*VAR_6)++;
 } else {
  *VAR_5 = VAR_3 + (VAR_1 * VAR_0);
  *VAR_6 = 1;
 }

 if (*VAR_6 > VAR_2) {
  FUNC_0(VAR_4->netdev,
        "%s ECC detected errors exceed threshold\n",
        VAR_7);
  return 1;
 }

 return 0;
}
