
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u64 ;
typedef int u32 ;
struct ehea_eqe {int dummy; } ;
struct TYPE_2__ {int type; int nr_pages; int eqe_gen; int max_nr_of_eqes; } ;
struct ehea_eq {int fw_handle; int hw_queue; TYPE_1__ attr; int spinlock; struct ehea_adapter* adapter; } ;
struct ehea_adapter {int handle; } ;
typedef enum ehea_eq_type { ____Placeholder_ehea_eq_type } ehea_eq_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (int ,TYPE_1__*,int *) ;
 int FUNC_2 (int ,int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ,scalar_t__,int) ;
 int FUNC_4 (int *) ;
 void* FUNC_5 (int *) ;
 int FUNC_6 (int *,int,int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct ehea_eq*) ;
 struct ehea_eq* FUNC_9 (int,int ) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int *) ;

struct ehea_eq *FUNC_12(struct ehea_adapter *VAR_7,
          const enum ehea_eq_type VAR_8,
          const u32 VAR_9, const u8 VAR_10)
{
 int VAR_11, VAR_12;
 u64 VAR_13, VAR_14;
 void *VAR_15;
 struct ehea_eq *VAR_16;

 VAR_16 = FUNC_9(sizeof(*VAR_16), VAR_3);
 if (!VAR_16)
  return ((void*)0);

 VAR_16->adapter = VAR_7;
 VAR_16->attr.type = VAR_8;
 VAR_16->attr.max_nr_of_eqes = VAR_9;
 VAR_16->attr.eqe_gen = VAR_10;
 FUNC_11(&VAR_16->spinlock);

 VAR_13 = FUNC_1(VAR_7->handle,
     &VAR_16->attr, &VAR_16->fw_handle);
 if (VAR_13 != VAR_6) {
  FUNC_10("alloc_resource_eq failed\n");
  goto out_freemem;
 }

 VAR_11 = FUNC_6(&VAR_16->hw_queue, VAR_16->attr.nr_pages,
       VAR_1, sizeof(struct ehea_eqe));
 if (VAR_11) {
  FUNC_10("can't allocate eq pages\n");
  goto out_freeres;
 }

 for (VAR_12 = 0; VAR_12 < VAR_16->attr.nr_pages; VAR_12++) {
  VAR_15 = FUNC_5(&VAR_16->hw_queue);
  if (!VAR_15) {
   FUNC_10("hw_qpageit_get_inc failed\n");
   VAR_13 = VAR_5;
   goto out_kill_hwq;
  }

  VAR_14 = FUNC_0(VAR_15);

  VAR_13 = FUNC_3(VAR_7->handle, 0,
          VAR_0,
          VAR_16->fw_handle, VAR_14, 1);

  if (VAR_12 == (VAR_16->attr.nr_pages - 1)) {

   VAR_15 = FUNC_5(&VAR_16->hw_queue);
   if ((VAR_13 != VAR_6) || (VAR_15))
    goto out_kill_hwq;

  } else {
   if (VAR_13 != VAR_4)
    goto out_kill_hwq;

  }
 }

 FUNC_4(&VAR_16->hw_queue);
 return VAR_16;

out_kill_hwq:
 FUNC_7(&VAR_16->hw_queue);

out_freeres:
 FUNC_2(VAR_7->handle, VAR_16->fw_handle, VAR_2);

out_freemem:
 FUNC_8(VAR_16);
 return ((void*)0);
}
