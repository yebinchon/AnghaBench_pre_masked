
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvpp2_bm_pool {int id; } ;
struct mvpp2 {struct mvpp2_bm_pool* bm_pools; scalar_t__ percpu_pools; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*,int,int) ;
 int FUNC_1 (struct mvpp2*,struct mvpp2_bm_pool*,int ) ;
 int FUNC_2 (struct device*,struct mvpp2*,struct mvpp2_bm_pool*,int) ;
 int FUNC_3 (struct device*,struct mvpp2*,struct mvpp2_bm_pool*) ;
 int FUNC_4 (struct mvpp2*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_2, struct mvpp2 *VAR_3)
{
 int VAR_4, VAR_5, VAR_6, VAR_7 = VAR_0;
 struct mvpp2_bm_pool *VAR_8;

 if (VAR_3->percpu_pools)
  VAR_7 = FUNC_4(VAR_3) * 2;


 VAR_6 = VAR_1;
 for (VAR_4 = 0; VAR_4 < VAR_7; VAR_4++) {
  VAR_8 = &VAR_3->bm_pools[VAR_4];
  VAR_8->id = VAR_4;
  VAR_5 = FUNC_2(VAR_2, VAR_3, VAR_8, VAR_6);
  if (VAR_5)
   goto err_unroll_pools;
  FUNC_1(VAR_3, VAR_8, 0);
 }
 return 0;

err_unroll_pools:
 FUNC_0(VAR_2, "failed to create BM pool %d, size %d\n", VAR_4, VAR_6);
 for (VAR_4 = VAR_4 - 1; VAR_4 >= 0; VAR_4--)
  FUNC_3(VAR_2, VAR_3, &VAR_3->bm_pools[VAR_4]);
 return VAR_5;
}
