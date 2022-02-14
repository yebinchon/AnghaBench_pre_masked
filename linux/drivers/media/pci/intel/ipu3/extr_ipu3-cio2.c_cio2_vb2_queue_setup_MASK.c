
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vb2_queue {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_5__ {unsigned int num_planes; TYPE_1__* plane_fmt; } ;
struct cio2_queue {scalar_t__ bufs_next; scalar_t__ bufs_first; int bufs_queued; int * fbpt; int ** bufs; TYPE_2__ format; } ;
struct cio2_device {TYPE_3__* pci_dev; } ;
struct TYPE_6__ {struct device dev; } ;
struct TYPE_4__ {unsigned int sizeimage; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct cio2_device*,int *) ;
 unsigned int FUNC_2 (unsigned int,int,unsigned int) ;
 struct cio2_device* FUNC_3 (struct vb2_queue*) ;
 struct cio2_queue* FUNC_4 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_5(struct vb2_queue *VAR_2,
    unsigned int *VAR_3,
    unsigned int *VAR_4,
    unsigned int VAR_5[],
    struct device *VAR_6[])
{
 struct cio2_device *VAR_7 = FUNC_3(VAR_2);
 struct cio2_queue *VAR_8 = FUNC_4(VAR_2);
 unsigned int VAR_9;

 *VAR_4 = VAR_8->format.num_planes;

 for (VAR_9 = 0; VAR_9 < *VAR_4; ++VAR_9) {
  VAR_5[VAR_9] = VAR_8->format.plane_fmt[VAR_9].sizeimage;
  VAR_6[VAR_9] = &VAR_7->pci_dev->dev;
 }

 *VAR_3 = FUNC_2(*VAR_3, 1, VAR_0);


 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  VAR_8->bufs[VAR_9] = ((void*)0);
  FUNC_1(VAR_7, &VAR_8->fbpt[VAR_9 * VAR_1]);
 }
 FUNC_0(&VAR_8->bufs_queued, 0);
 VAR_8->bufs_first = 0;
 VAR_8->bufs_next = 0;

 return 0;
}
