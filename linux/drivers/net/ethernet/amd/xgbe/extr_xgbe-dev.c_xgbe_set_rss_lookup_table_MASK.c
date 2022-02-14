
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xgbe_prv_data {int * rss_table; } ;


 unsigned int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ,int const) ;
 int FUNC_2 (struct xgbe_prv_data*) ;

__attribute__((used)) static int FUNC_3(struct xgbe_prv_data *VAR_2,
         const u32 *VAR_3)
{
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_2->rss_table); VAR_4++)
  FUNC_1(VAR_2->rss_table[VAR_4], VAR_1, VAR_0, VAR_3[VAR_4]);

 return FUNC_2(VAR_2);
}
