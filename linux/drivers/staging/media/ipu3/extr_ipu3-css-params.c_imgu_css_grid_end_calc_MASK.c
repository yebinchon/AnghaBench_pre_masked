
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipu3_uapi_grid_config {int block_height_log2; int height; int y_start; void* y_end; int block_width_log2; int width; int x_start; void* x_end; } ;


 void* FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct ipu3_uapi_grid_config *VAR_0)
{
 VAR_0->x_end = FUNC_0(VAR_0->x_start, VAR_0->width,
         VAR_0->block_width_log2);
 VAR_0->y_end = FUNC_0(VAR_0->y_start, VAR_0->height,
         VAR_0->block_height_log2);
}
