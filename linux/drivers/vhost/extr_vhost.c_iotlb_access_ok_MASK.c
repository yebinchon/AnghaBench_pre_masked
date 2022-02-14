
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct vhost_virtqueue {struct vhost_umem* iotlb; } ;
struct vhost_umem_node {scalar_t__ start; int perm; scalar_t__ size; } ;
struct vhost_umem {int umem_tree; } ;


 int FUNC_0 (struct vhost_virtqueue*,scalar_t__,int) ;
 struct vhost_umem_node* FUNC_1 (int *,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (struct vhost_virtqueue*,scalar_t__,scalar_t__,int) ;
 int FUNC_3 (struct vhost_virtqueue*,struct vhost_umem_node const*,int) ;

__attribute__((used)) static bool FUNC_4(struct vhost_virtqueue *VAR_0,
       int VAR_1, u64 VAR_2, u64 VAR_3, int VAR_4)
{
 const struct vhost_umem_node *VAR_5;
 struct vhost_umem *VAR_6 = VAR_0->iotlb;
 u64 VAR_7 = 0, VAR_8, VAR_9 = VAR_2, VAR_10 = VAR_2 + VAR_3 - 1;

 if (FUNC_2(VAR_0, VAR_2, VAR_3, VAR_4))
  return 1;

 while (VAR_3 > VAR_7) {
  VAR_5 = FUNC_1(&VAR_6->umem_tree,
          VAR_2,
          VAR_10);
  if (VAR_5 == ((void*)0) || VAR_5->start > VAR_2) {
   FUNC_0(VAR_0, VAR_2, VAR_1);
   return 0;
  } else if (!(VAR_5->perm & VAR_1)) {



   return 0;
  }

  VAR_8 = VAR_5->size - VAR_2 + VAR_5->start;

  if (VAR_9 == VAR_2 && VAR_8 >= VAR_3)
   FUNC_3(VAR_0, VAR_5, VAR_4);

  VAR_7 += VAR_8;
  VAR_2 += VAR_8;
 }

 return 1;
}
