
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {int * rss_table; } ;


 unsigned int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (struct xgbe_prv_data*,int ,unsigned int,int ) ;

__attribute__((used)) static int FUNC_2(struct xgbe_prv_data *VAR_1)
{
 unsigned int VAR_2;
 int VAR_3;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1->rss_table); VAR_2++) {
  VAR_3 = FUNC_1(VAR_1,
      VAR_0, VAR_2,
      VAR_1->rss_table[VAR_2]);
  if (VAR_3)
   return VAR_3;
 }

 return 0;
}
