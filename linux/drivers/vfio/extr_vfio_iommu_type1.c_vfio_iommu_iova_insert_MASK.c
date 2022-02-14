
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_iova {int list; void* end; void* start; } ;
struct list_head {int dummy; } ;
typedef void* dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct vfio_iova* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,struct list_head*) ;

__attribute__((used)) static int FUNC_3(struct list_head *VAR_2,
      dma_addr_t VAR_3, dma_addr_t VAR_4)
{
 struct vfio_iova *VAR_5;

 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 FUNC_0(&VAR_5->list);
 VAR_5->start = VAR_3;
 VAR_5->end = VAR_4;

 FUNC_2(&VAR_5->list, VAR_2);
 return 0;
}
