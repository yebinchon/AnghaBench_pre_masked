
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vicodec_q_data {unsigned int coded_width; unsigned int coded_height; TYPE_1__* info; } ;
struct TYPE_2__ {unsigned int width_div; unsigned int height_div; int components_num; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static unsigned int FUNC_1(struct vicodec_q_data *VAR_0)
{
 unsigned int VAR_1;
 unsigned int VAR_2;

 if (!VAR_0->info) {
  FUNC_0(1);
  return 0;
 }
 VAR_1 = VAR_0->coded_width * VAR_0->coded_height;
 VAR_2 = VAR_0->info->width_div * VAR_0->info->height_div;

 if (VAR_0->info->components_num == 4)
  return 2 * VAR_1 + 2 * (VAR_1 / VAR_2);
 else if (VAR_0->info->components_num == 3)
  return VAR_1 + 2 * (VAR_1 / VAR_2);
 return VAR_1;
}
