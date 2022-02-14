
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap3isp_prev_nf {int * table; int spread; } ;
struct prev_params {struct omap3isp_prev_nf nf; } ;
struct isp_prev_device {int dummy; } ;
struct isp_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct isp_device*,int ,int ,int ) ;
 struct isp_device* FUNC_1 (struct isp_prev_device*) ;

__attribute__((used)) static void
FUNC_2(struct isp_prev_device *VAR_6,
      const struct prev_params *VAR_7)
{
 struct isp_device *VAR_8 = FUNC_1(VAR_6);
 const struct omap3isp_prev_nf *VAR_9 = &VAR_7->nf;
 unsigned int VAR_10;

 FUNC_0(VAR_8, VAR_9->spread, VAR_5, VAR_0);
 FUNC_0(VAR_8, VAR_1,
         VAR_5, VAR_2);
 for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
  FUNC_0(VAR_8, VAR_9->table[VAR_10],
          VAR_5, VAR_3);
 }
}
