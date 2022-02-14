
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vsp1_pipeline {int partitions; TYPE_1__* output; } ;
struct vsp1_partition_window {unsigned int left; unsigned int width; } ;
struct vsp1_partition {int dummy; } ;
struct v4l2_mbus_framefmt {unsigned int width; } ;
struct TYPE_4__ {int config; } ;
struct TYPE_3__ {TYPE_2__ entity; } ;


 int VAR_0 ;
 struct v4l2_mbus_framefmt* FUNC_0 (TYPE_2__*,int ,int ) ;
 int FUNC_1 (struct vsp1_pipeline*,struct vsp1_partition*,unsigned int,struct vsp1_partition_window*) ;

__attribute__((used)) static void FUNC_2(struct vsp1_pipeline *VAR_1,
        struct vsp1_partition *VAR_2,
        unsigned int VAR_3,
        unsigned int VAR_4)
{
 const struct v4l2_mbus_framefmt *VAR_5;
 struct vsp1_partition_window VAR_6;
 unsigned int VAR_7;





 VAR_5 = FUNC_0(&VAR_1->output->entity,
         VAR_1->output->entity.config,
         VAR_0);


 if (VAR_1->partitions <= 1) {
  VAR_6.left = 0;
  VAR_6.width = VAR_5->width;

  FUNC_1(VAR_1, VAR_2, VAR_4,
        &VAR_6);
  return;
 }


 VAR_6.left = VAR_4 * VAR_3;
 VAR_6.width = VAR_3;

 VAR_7 = VAR_5->width % VAR_3;
 if (VAR_7) {




  unsigned int VAR_8 = VAR_1->partitions - 1;

  if (VAR_7 < VAR_3 / 2) {
   if (VAR_4 == VAR_8 - 1) {

    VAR_6.width = VAR_3 / 2;
   } else if (VAR_4 == VAR_8) {

    VAR_6.width = (VAR_3 / 2) + VAR_7;
    VAR_6.left -= VAR_3 / 2;
   }
  } else if (VAR_4 == VAR_8) {
   VAR_6.width = VAR_7;
  }
 }

 FUNC_1(VAR_1, VAR_2, VAR_4, &VAR_6);
}
