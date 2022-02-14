
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int entity; } ;
struct TYPE_9__ {TYPE_3__* sd; } ;
struct camif_dev {TYPE_2__* vp; TYPE_5__ subdev; TYPE_4__ sensor; } ;
struct TYPE_8__ {int entity; } ;
struct TYPE_6__ {int entity; } ;
struct TYPE_7__ {TYPE_1__ vdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int,int *,int ,int) ;

__attribute__((used)) static int FUNC_1(struct camif_dev *VAR_4)
{
 int VAR_5, VAR_6;

 VAR_6 = FUNC_0(&VAR_4->sensor.sd->entity, 0,
    &VAR_4->subdev.entity, VAR_1,
    VAR_3 |
    VAR_2);
 if (VAR_6)
  return VAR_6;

 for (VAR_5 = 1; VAR_5 < VAR_0 && !VAR_6; VAR_5++) {
  VAR_6 = FUNC_0(&VAR_4->subdev.entity, VAR_5,
    &VAR_4->vp[VAR_5 - 1].vdev.entity, 0,
    VAR_3 |
    VAR_2);
 }

 return VAR_6;
}
