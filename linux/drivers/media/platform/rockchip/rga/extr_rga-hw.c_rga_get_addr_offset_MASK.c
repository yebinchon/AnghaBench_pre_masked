
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rga_frame {unsigned int stride; unsigned int width; unsigned int height; TYPE_1__* fmt; } ;
struct rga_addr_offset {unsigned int y_off; unsigned int u_off; unsigned int v_off; } ;
struct rga_corners_addr_offset {struct rga_addr_offset right_bottom; struct rga_addr_offset right_top; struct rga_addr_offset left_bottom; struct rga_addr_offset left_top; } ;
struct TYPE_2__ {unsigned int x_div; unsigned int y_div; unsigned int uv_factor; } ;



__attribute__((used)) static struct rga_corners_addr_offset
FUNC_0(struct rga_frame *VAR_0, unsigned int VAR_1, unsigned int VAR_2,
      unsigned int VAR_3, unsigned int VAR_4)
{
 struct rga_corners_addr_offset VAR_5;
 struct rga_addr_offset *VAR_6, *VAR_7, *VAR_8, *VAR_9;
 unsigned int VAR_10 = 0,
       VAR_11 = 0, VAR_12 = 0, VAR_13 = 0, VAR_14 = 0;

 VAR_6 = &VAR_5.left_top;
 VAR_7 = &VAR_5.left_bottom;
 VAR_8 = &VAR_5.right_top;
 VAR_9 = &VAR_5.right_bottom;

 VAR_10 = VAR_0->fmt->x_div;
 VAR_11 = VAR_0->fmt->y_div;
 VAR_14 = VAR_0->fmt->uv_factor;
 VAR_12 = VAR_0->stride / VAR_10;
 VAR_13 = VAR_0->stride / VAR_0->width;

 VAR_6->y_off = VAR_2 * VAR_0->stride + VAR_1 * VAR_13;
 VAR_6->u_off =
  VAR_0->width * VAR_0->height + (VAR_2 / VAR_11) * VAR_12 + VAR_1 / VAR_10;
 VAR_6->v_off = VAR_6->u_off + VAR_0->width * VAR_0->height / VAR_14;

 VAR_7->y_off = VAR_6->y_off + (VAR_4 - 1) * VAR_0->stride;
 VAR_7->u_off = VAR_6->u_off + (VAR_4 / VAR_11 - 1) * VAR_12;
 VAR_7->v_off = VAR_6->v_off + (VAR_4 / VAR_11 - 1) * VAR_12;

 VAR_8->y_off = VAR_6->y_off + (VAR_3 - 1) * VAR_13;
 VAR_8->u_off = VAR_6->u_off + VAR_3 / VAR_10 - 1;
 VAR_8->v_off = VAR_6->v_off + VAR_3 / VAR_10 - 1;

 VAR_9->y_off = VAR_7->y_off + (VAR_3 - 1) * VAR_13;
 VAR_9->u_off = VAR_7->u_off + VAR_3 / VAR_10 - 1;
 VAR_9->v_off = VAR_7->v_off + VAR_3 / VAR_10 - 1;

 return VAR_5;
}
