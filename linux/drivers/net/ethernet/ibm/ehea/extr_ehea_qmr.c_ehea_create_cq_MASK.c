
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct ehea_cqe {int dummy; } ;
struct TYPE_2__ {int max_nr_of_cqes; int cq_token; int nr_pages; int eq_handle; } ;
struct ehea_cq {int fw_handle; int hw_queue; TYPE_1__ attr; int epas; struct ehea_adapter* adapter; } ;
struct ehea_adapter {int handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (int ,TYPE_1__*,int *,int *) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ,int ,int) ;
 int FUNC_4 (struct ehea_cq*) ;
 int FUNC_5 (struct ehea_cq*) ;
 int FUNC_6 (int *) ;
 void* FUNC_7 (int *) ;
 int FUNC_8 (int *,int,int ,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct ehea_cq*) ;
 struct ehea_cq* FUNC_11 (int,int ) ;
 int FUNC_12 (char*,...) ;

struct ehea_cq *FUNC_13(struct ehea_adapter *VAR_6,
          int VAR_7, u64 VAR_8, u32 VAR_9)
{
 struct ehea_cq *VAR_10;
 u64 VAR_11, VAR_12;
 u32 VAR_13;
 int VAR_14;
 void *VAR_15;

 VAR_10 = FUNC_11(sizeof(*VAR_10), VAR_3);
 if (!VAR_10)
  goto out_nomem;

 VAR_10->attr.max_nr_of_cqes = VAR_7;
 VAR_10->attr.cq_token = VAR_9;
 VAR_10->attr.eq_handle = VAR_8;

 VAR_10->adapter = VAR_6;

 VAR_11 = FUNC_1(VAR_6->handle, &VAR_10->attr,
     &VAR_10->fw_handle, &VAR_10->epas);
 if (VAR_11 != VAR_5) {
  FUNC_12("alloc_resource_cq failed\n");
  goto out_freemem;
 }

 VAR_14 = FUNC_8(&VAR_10->hw_queue, VAR_10->attr.nr_pages,
       VAR_1, sizeof(struct ehea_cqe));
 if (VAR_14)
  goto out_freeres;

 for (VAR_13 = 0; VAR_13 < VAR_10->attr.nr_pages; VAR_13++) {
  VAR_15 = FUNC_7(&VAR_10->hw_queue);
  if (!VAR_15) {
   FUNC_12("hw_qpageit_get_inc failed\n");
   goto out_kill_hwq;
  }

  VAR_12 = FUNC_0(VAR_15);
  VAR_11 = FUNC_3(VAR_6->handle,
          0, VAR_0,
          VAR_10->fw_handle, VAR_12, 1);
  if (VAR_11 < VAR_5) {
   FUNC_12("register_rpage_cq failed ehea_cq=%p hret=%llx counter=%i act_pages=%i\n",
          VAR_10, VAR_11, VAR_13, VAR_10->attr.nr_pages);
   goto out_kill_hwq;
  }

  if (VAR_13 == (VAR_10->attr.nr_pages - 1)) {
   VAR_15 = FUNC_7(&VAR_10->hw_queue);

   if ((VAR_11 != VAR_5) || (VAR_15)) {
    FUNC_12("registration of pages not complete hret=%llx\n",
           VAR_11);
    goto out_kill_hwq;
   }
  } else {
   if (VAR_11 != VAR_4) {
    FUNC_12("CQ: registration of page failed hret=%llx\n",
           VAR_11);
    goto out_kill_hwq;
   }
  }
 }

 FUNC_6(&VAR_10->hw_queue);
 FUNC_4(VAR_10);
 FUNC_5(VAR_10);

 return VAR_10;

out_kill_hwq:
 FUNC_9(&VAR_10->hw_queue);

out_freeres:
 FUNC_2(VAR_6->handle, VAR_10->fw_handle, VAR_2);

out_freemem:
 FUNC_10(VAR_10);

out_nomem:
 return ((void*)0);
}
