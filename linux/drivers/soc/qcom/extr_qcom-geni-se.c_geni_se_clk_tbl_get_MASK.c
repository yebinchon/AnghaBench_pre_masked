
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct geni_se {unsigned long* clk_perf_tbl; int num_clk_levels; int clk; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 long FUNC_0 (int ,long) ;
 unsigned long* FUNC_1 (int ,int,int,int ) ;

int FUNC_2(struct geni_se *VAR_3, unsigned long **VAR_4)
{
 long VAR_5 = 0;
 int VAR_6;

 if (VAR_3->clk_perf_tbl) {
  *VAR_4 = VAR_3->clk_perf_tbl;
  return VAR_3->num_clk_levels;
 }

 VAR_3->clk_perf_tbl = FUNC_1(VAR_3->dev, VAR_2,
     sizeof(*VAR_3->clk_perf_tbl),
     VAR_1);
 if (!VAR_3->clk_perf_tbl)
  return -VAR_0;

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  VAR_5 = FUNC_0(VAR_3->clk, VAR_5 + 1);
  if (VAR_5 <= 0 || VAR_5 == VAR_3->clk_perf_tbl[VAR_6 - 1])
   break;
  VAR_3->clk_perf_tbl[VAR_6] = VAR_5;
 }
 VAR_3->num_clk_levels = VAR_6;
 *VAR_4 = VAR_3->clk_perf_tbl;
 return VAR_3->num_clk_levels;
}
