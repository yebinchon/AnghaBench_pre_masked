
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap3isp_prev_gtables {int * blue; int * green; int * red; } ;
struct prev_params {struct omap3isp_prev_gtables gamma; } ;
struct isp_prev_device {int dummy; } ;
struct isp_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct isp_device*,int ,int ,int ) ;
 struct isp_device* FUNC_1 (struct isp_prev_device*) ;

__attribute__((used)) static void
FUNC_2(struct isp_prev_device *VAR_7,
     const struct prev_params *VAR_8)
{
 struct isp_device *VAR_9 = FUNC_1(VAR_7);
 const struct omap3isp_prev_gtables *VAR_10 = &VAR_8->gamma;
 unsigned int VAR_11;

 FUNC_0(VAR_9, VAR_2,
         VAR_6, VAR_3);
 for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++)
  FUNC_0(VAR_9, VAR_10->red[VAR_11], VAR_6,
          VAR_4);

 FUNC_0(VAR_9, VAR_1,
         VAR_6, VAR_3);
 for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++)
  FUNC_0(VAR_9, VAR_10->green[VAR_11], VAR_6,
          VAR_4);

 FUNC_0(VAR_9, VAR_0,
         VAR_6, VAR_3);
 for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++)
  FUNC_0(VAR_9, VAR_10->blue[VAR_11], VAR_6,
          VAR_4);
}
