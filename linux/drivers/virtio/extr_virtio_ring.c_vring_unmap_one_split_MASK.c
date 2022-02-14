
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int vdev; } ;
struct vring_virtqueue {TYPE_1__ vq; int use_dma_api; } ;
struct vring_desc {int len; int addr; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct vring_virtqueue const*) ;

__attribute__((used)) static void FUNC_6(const struct vring_virtqueue *VAR_4,
      struct vring_desc *VAR_5)
{
 u16 VAR_6;

 if (!VAR_4->use_dma_api)
  return;

 VAR_6 = FUNC_2(VAR_4->vq.vdev, VAR_5->flags);

 if (VAR_6 & VAR_2) {
  FUNC_1(FUNC_5(VAR_4),
     FUNC_4(VAR_4->vq.vdev, VAR_5->addr),
     FUNC_3(VAR_4->vq.vdev, VAR_5->len),
     (VAR_6 & VAR_3) ?
     VAR_0 : VAR_1);
 } else {
  FUNC_0(FUNC_5(VAR_4),
          FUNC_4(VAR_4->vq.vdev, VAR_5->addr),
          FUNC_3(VAR_4->vq.vdev, VAR_5->len),
          (VAR_6 & VAR_3) ?
          VAR_0 : VAR_1);
 }
}
