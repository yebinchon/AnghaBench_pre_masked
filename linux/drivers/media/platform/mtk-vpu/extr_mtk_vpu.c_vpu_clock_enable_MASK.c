
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_vpu {int vpu_mutex; int wdt_refcnt; int clk; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 long FUNC_3 (struct mtk_vpu*,int ) ;
 int FUNC_4 (struct mtk_vpu*,long,int ) ;

__attribute__((used)) static int FUNC_5(struct mtk_vpu *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1->clk);
 if (VAR_2)
  return VAR_2;

 FUNC_1(&VAR_1->vpu_mutex);
 if (!VAR_1->wdt_refcnt++)
  FUNC_4(VAR_1,
          FUNC_3(VAR_1, VAR_0) | (1L << 31),
          VAR_0);
 FUNC_2(&VAR_1->vpu_mutex);

 return VAR_2;
}
