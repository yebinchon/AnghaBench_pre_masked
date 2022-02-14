
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct imx_rproc_dcfg {int att_size; struct imx_rproc_att* att; } ;
struct imx_rproc_att {scalar_t__ da; scalar_t__ size; scalar_t__ sa; } ;
struct imx_rproc {int dev; struct imx_rproc_dcfg* dcfg; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_1(struct imx_rproc *VAR_1, u64 VAR_2,
          int VAR_3, u64 *VAR_4)
{
 const struct imx_rproc_dcfg *VAR_5 = VAR_1->dcfg;
 int VAR_6;


 for (VAR_6 = 0; VAR_6 < VAR_5->att_size; VAR_6++) {
  const struct imx_rproc_att *VAR_7 = &VAR_5->att[VAR_6];

  if (VAR_2 >= VAR_7->da && VAR_2 + VAR_3 < VAR_7->da + VAR_7->size) {
   unsigned int VAR_8 = VAR_2 - VAR_7->da;

   *VAR_4 = VAR_7->sa + VAR_8;
   return 0;
  }
 }

 FUNC_0(VAR_1->dev, "Translation failed: da = 0x%llx len = 0x%x\n",
   VAR_2, VAR_3);
 return -VAR_0;
}
