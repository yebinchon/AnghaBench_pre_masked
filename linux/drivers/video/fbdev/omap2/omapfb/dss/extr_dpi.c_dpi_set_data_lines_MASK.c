
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_dss_device {int dummy; } ;
struct dpi_data {int data_lines; int lock; } ;


 struct dpi_data* FUNC_0 (struct omap_dss_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct omap_dss_device *VAR_0, int VAR_1)
{
 struct dpi_data *VAR_2 = FUNC_0(VAR_0);

 FUNC_1(&VAR_2->lock);

 VAR_2->data_lines = VAR_1;

 FUNC_2(&VAR_2->lock);
}
