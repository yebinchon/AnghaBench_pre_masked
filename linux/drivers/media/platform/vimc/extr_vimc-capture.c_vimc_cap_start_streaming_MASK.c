
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int pipe; } ;
struct media_entity {int dummy; } ;
struct TYPE_3__ {struct media_entity entity; } ;
struct vimc_cap_device {int ved; TYPE_2__ stream; scalar_t__ sequence; TYPE_1__ vdev; } ;
struct vb2_queue {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct media_entity*,int *) ;
 int FUNC_1 (struct media_entity*) ;
 struct vimc_cap_device* FUNC_2 (struct vb2_queue*) ;
 int FUNC_3 (struct vimc_cap_device*,int ) ;
 int FUNC_4 (TYPE_2__*,int *,int) ;

__attribute__((used)) static int FUNC_5(struct vb2_queue *VAR_1, unsigned int VAR_2)
{
 struct vimc_cap_device *VAR_3 = FUNC_2(VAR_1);
 struct media_entity *VAR_4 = &VAR_3->vdev.entity;
 int VAR_5;

 VAR_3->sequence = 0;


 VAR_5 = FUNC_0(VAR_4, &VAR_3->stream.pipe);
 if (VAR_5) {
  FUNC_3(VAR_3, VAR_0);
  return VAR_5;
 }

 VAR_5 = FUNC_4(&VAR_3->stream, &VAR_3->ved, 1);
 if (VAR_5) {
  FUNC_1(VAR_4);
  FUNC_3(VAR_3, VAR_0);
  return VAR_5;
 }

 return 0;
}
