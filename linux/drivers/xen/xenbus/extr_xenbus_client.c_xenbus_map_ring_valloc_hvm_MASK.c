
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pages; void* addr; } ;
struct xenbus_map_node {unsigned int nr_handles; TYPE_1__ hvm; int handles; int next; } ;
struct xenbus_device {int dummy; } ;
struct map_ring_valloc_hvm {int addrs; int phys_addrs; int idx; } ;
typedef int grant_ref_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct xenbus_device*,int *,unsigned int,int ,int ,int ,int*) ;
 int FUNC_2 (unsigned int,int ) ;
 int FUNC_3 (unsigned int,int ) ;
 int FUNC_4 (int ,unsigned int,int ,struct map_ring_valloc_hvm*) ;
 int FUNC_5 (struct xenbus_map_node*) ;
 struct xenbus_map_node* FUNC_6 (int,int ) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (char*,void*,unsigned int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 void* FUNC_11 (int ,unsigned int,int,int ) ;
 int VAR_8 ;
 int FUNC_12 (struct xenbus_device*,int ,unsigned int,int ) ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_13(struct xenbus_device *VAR_11,
          grant_ref_t *VAR_12,
          unsigned int VAR_13,
          void **VAR_14)
{
 struct xenbus_map_node *VAR_15;
 int VAR_16;
 void *VAR_17;
 bool VAR_18 = 0;
 struct map_ring_valloc_hvm VAR_19 = {
  .idx = 0,
 };
 unsigned int VAR_20 = FUNC_0(VAR_13);

 if (VAR_13 > VAR_7)
  return -VAR_0;

 *VAR_14 = ((void*)0);

 VAR_15 = FUNC_6(sizeof(*VAR_15), VAR_2);
 if (!VAR_15)
  return -VAR_1;

 VAR_16 = FUNC_2(VAR_20, VAR_15->hvm.pages);
 if (VAR_16)
  goto out_err;

 FUNC_4(VAR_15->hvm.pages, VAR_13,
        VAR_8,
        &VAR_19);

 VAR_16 = FUNC_1(VAR_11, VAR_12, VAR_13, VAR_15->handles,
    VAR_19.phys_addrs, VAR_3, &VAR_18);
 VAR_15->nr_handles = VAR_13;

 if (VAR_16)
  goto out_free_ballooned_pages;

 VAR_17 = FUNC_11(VAR_15->hvm.pages, VAR_20, VAR_6 | VAR_5,
      VAR_4);
 if (!VAR_17) {
  VAR_16 = -VAR_1;
  goto out_xenbus_unmap_ring;
 }

 VAR_15->hvm.addr = VAR_17;

 FUNC_9(&VAR_9);
 FUNC_7(&VAR_15->next, &VAR_10);
 FUNC_10(&VAR_9);

 *VAR_14 = VAR_17;
 return 0;

 out_xenbus_unmap_ring:
 if (!VAR_18)
  FUNC_12(VAR_11, VAR_15->handles, VAR_13, VAR_19.addrs);
 else
  FUNC_8("leaking %p size %u page(s)",
    VAR_17, VAR_20);
 out_free_ballooned_pages:
 if (!VAR_18)
  FUNC_3(VAR_20, VAR_15->hvm.pages);
 out_err:
 FUNC_5(VAR_15);
 return VAR_16;
}
