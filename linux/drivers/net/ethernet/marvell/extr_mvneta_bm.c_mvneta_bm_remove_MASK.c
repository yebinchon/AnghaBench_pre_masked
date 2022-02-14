
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct platform_device {int dummy; } ;
struct mvneta_bm_pool {int dummy; } ;
struct mvneta_bm {int clk; struct mvneta_bm_pool* bm_pools; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mvneta_bm*,struct mvneta_bm_pool*,int) ;
 int FUNC_2 (struct mvneta_bm*) ;
 int FUNC_3 (struct mvneta_bm*,int ,int ) ;
 struct mvneta_bm* FUNC_4 (struct platform_device*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_3)
{
 struct mvneta_bm *VAR_4 = FUNC_4(VAR_3);
 u8 VAR_5 = 0xff;
 int VAR_6 = 0;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  struct mvneta_bm_pool *VAR_7 = &VAR_4->bm_pools[VAR_6];

  FUNC_1(VAR_4, VAR_7, VAR_5);
 }

 FUNC_2(VAR_4);


 FUNC_3(VAR_4, VAR_0, VAR_2);

 FUNC_0(VAR_4->clk);

 return 0;
}
