
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_ns_head {int srcu; } ;
struct nvme_ns {int srcu; } ;
struct gendisk {struct nvme_ns_head* private_data; int * fops; } ;


 struct nvme_ns_head* FUNC_0 (struct nvme_ns_head*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static struct nvme_ns *FUNC_3(struct gendisk *VAR_1,
  struct nvme_ns_head **VAR_2, int *VAR_3)
{
 *VAR_2 = ((void*)0);
 *VAR_3 = -1;
 return VAR_1->private_data;
}
