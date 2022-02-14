
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct v4l2_mbus_framefmt {int width; int height; } ;
struct TYPE_4__ {int height; int width; } ;
struct TYPE_5__ {TYPE_1__ active; } ;
struct TYPE_6__ {int entity; } ;
struct isp_res_device {TYPE_2__ crop; struct v4l2_mbus_framefmt* formats; TYPE_3__ subdev; } ;
struct isp_pipeline {unsigned long l3_ick; } ;


 size_t VAR_0 ;
 void* FUNC_0 (int,int ) ;
 unsigned long FUNC_1 (unsigned long,unsigned long) ;
 struct isp_pipeline* FUNC_2 (int *) ;

void FUNC_3(struct isp_res_device *VAR_1,
          unsigned int *VAR_2)
{
 struct isp_pipeline *VAR_3 = FUNC_2(&VAR_1->subdev.entity);
 const struct v4l2_mbus_framefmt *VAR_4 = &VAR_1->formats[VAR_0];
 unsigned long VAR_5 = FUNC_1(VAR_3->l3_ick, 200000000UL);
 unsigned long VAR_6;

 VAR_6 = FUNC_0((u64)VAR_5 * VAR_1->crop.active.height, VAR_4->height);
 VAR_6 = FUNC_1(VAR_6, VAR_5 / 2);
 *VAR_2 = FUNC_0((u64)VAR_6 * VAR_1->crop.active.width, VAR_4->width);
}
