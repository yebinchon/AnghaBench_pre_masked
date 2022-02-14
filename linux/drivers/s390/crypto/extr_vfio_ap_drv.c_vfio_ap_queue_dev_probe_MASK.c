
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfio_ap_queue {int saved_isc; int apqn; } ;
struct ap_device {int device; } ;
struct TYPE_2__ {int qid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct vfio_ap_queue*) ;
 struct vfio_ap_queue* FUNC_1 (int,int ) ;
 TYPE_1__* FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct ap_device *VAR_3)
{
 struct vfio_ap_queue *VAR_4;

 VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;
 FUNC_0(&VAR_3->device, VAR_4);
 VAR_4->apqn = FUNC_2(&VAR_3->device)->qid;
 VAR_4->saved_isc = VAR_2;
 return 0;
}
