
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct vfio_iommu {struct list_head iova_list; } ;


 int FUNC_0 (struct list_head*,struct list_head*) ;
 int FUNC_1 (struct list_head*) ;

__attribute__((used)) static void FUNC_2(struct vfio_iommu *VAR_0,
     struct list_head *VAR_1)
{
 struct list_head *VAR_2 = &VAR_0->iova_list;

 FUNC_1(VAR_2);

 FUNC_0(VAR_1, VAR_2);
}
