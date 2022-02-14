
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xgbe_prv_data {int rss_key; } ;


 int VAR_0 ;
 int FUNC_0 (struct xgbe_prv_data*,int ,unsigned int,int ) ;

__attribute__((used)) static int FUNC_1(struct xgbe_prv_data *VAR_1)
{
 unsigned int VAR_2 = sizeof(VAR_1->rss_key) / sizeof(u32);
 unsigned int *VAR_3 = (unsigned int *)&VAR_1->rss_key;
 int VAR_4;

 while (VAR_2--) {
  VAR_4 = FUNC_0(VAR_1, VAR_0,
      VAR_2, *VAR_3++);
  if (VAR_4)
   return VAR_4;
 }

 return 0;
}
