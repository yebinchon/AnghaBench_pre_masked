
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vring_desc {int next; } ;
struct virtqueue {int vdev; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned int) ;
 struct vring_desc* FUNC_1 (unsigned int,int,int ) ;

__attribute__((used)) static struct vring_desc *FUNC_2(struct virtqueue *VAR_1,
            unsigned int VAR_2,
            gfp_t VAR_3)
{
 struct vring_desc *VAR_4;
 unsigned int VAR_5;






 VAR_3 &= ~VAR_0;

 VAR_4 = FUNC_1(VAR_2, sizeof(struct vring_desc), VAR_3);
 if (!VAR_4)
  return ((void*)0);

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
  VAR_4[VAR_5].next = FUNC_0(VAR_1->vdev, VAR_5 + 1);
 return VAR_4;
}
