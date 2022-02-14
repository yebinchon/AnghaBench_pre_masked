
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rss; } ;
struct xgbe_prv_data {int rss_options; TYPE_1__ hw_feat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct xgbe_prv_data*,int ,int ) ;
 int FUNC_1 (struct xgbe_prv_data*,int ,int ,int) ;
 int FUNC_2 (struct xgbe_prv_data*) ;
 int FUNC_3 (struct xgbe_prv_data*) ;

__attribute__((used)) static int FUNC_4(struct xgbe_prv_data *VAR_3)
{
 int VAR_4;

 if (!VAR_3->hw_feat.rss)
  return -VAR_0;


 VAR_4 = FUNC_2(VAR_3);
 if (VAR_4)
  return VAR_4;


 VAR_4 = FUNC_3(VAR_3);
 if (VAR_4)
  return VAR_4;


 FUNC_0(VAR_3, VAR_1, VAR_3->rss_options);


 FUNC_1(VAR_3, VAR_1, VAR_2, 1);

 return 0;
}
