
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vhost_virtqueue {struct vhost_umem_node const** meta_iotlb; } ;
struct vhost_umem_node {int perm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct vhost_virtqueue *VAR_3,
     const struct vhost_umem_node *VAR_4,
     int VAR_5)
{
 int VAR_6 = (VAR_5 == VAR_2) ?
       VAR_1 : VAR_0;

 if (FUNC_0(VAR_4->perm & VAR_6))
  VAR_3->meta_iotlb[VAR_5] = VAR_4;
}
