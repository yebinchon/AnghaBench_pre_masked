
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
typedef size_t u16 ;
struct qed_ooo_isle {int dummy; } ;
struct TYPE_4__ {size_t num_of_cqes; void* p_cqes; } ;
struct qed_ooo_info {size_t cid_base; size_t max_num_archipelagos; struct qed_ooo_info* p_isles_mem; struct qed_ooo_info* p_archipelagos_mem; TYPE_2__ ooo_history; int isles_list; int free_isles_list; int list_entry; int buffers_list; int ready_buffers_list; int free_buffers_list; } ;
struct qed_ooo_archipelago {int dummy; } ;
struct TYPE_3__ {int personality; } ;
struct qed_hwfn {struct qed_ooo_info* p_ooo_info; TYPE_1__ hw_info; } ;
struct ooo_opaque {int dummy; } ;
typedef enum protocol_type { ____Placeholder_protocol_type } protocol_type ;


 int FUNC_0 (struct qed_hwfn*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;



 void* FUNC_2 (size_t,int,int ) ;
 int FUNC_3 (struct qed_ooo_info*) ;
 struct qed_ooo_info* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;
 scalar_t__ FUNC_6 (struct qed_hwfn*,int,int *) ;
 scalar_t__ FUNC_7 (struct qed_hwfn*,int) ;

int FUNC_8(struct qed_hwfn *VAR_7)
{
 u16 VAR_8 = 0, VAR_9;
 struct qed_ooo_info *VAR_10;
 enum protocol_type VAR_11;
 u16 VAR_12 = 0;
 u32 VAR_13;

 switch (VAR_7->hw_info.personality) {
 case 128:
  VAR_11 = VAR_3;
  break;
 case 129:
 case 130:
  VAR_11 = VAR_4;
  break;
 default:
  FUNC_0(VAR_7,
     "Failed to allocate qed_ooo_info: unknown personality\n");
  return -VAR_0;
 }

 VAR_8 = (u16)FUNC_6(VAR_7, VAR_11,
        ((void*)0));
 VAR_12 = VAR_5 + VAR_8;
 VAR_9 = (u16)FUNC_7(VAR_7, VAR_11);

 if (!VAR_8) {
  FUNC_0(VAR_7,
     "Failed to allocate qed_ooo_info: unknown amount of connections\n");
  return -VAR_0;
 }

 VAR_10 = FUNC_4(sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return -VAR_1;

 VAR_10->cid_base = VAR_9;
 VAR_10->max_num_archipelagos = VAR_8;

 FUNC_1(&VAR_10->free_buffers_list);
 FUNC_1(&VAR_10->ready_buffers_list);
 FUNC_1(&VAR_10->free_isles_list);

 VAR_10->p_isles_mem = FUNC_2(VAR_12,
       sizeof(struct qed_ooo_isle),
       VAR_2);
 if (!VAR_10->p_isles_mem)
  goto no_isles_mem;

 for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++) {
  FUNC_1(&VAR_10->p_isles_mem[VAR_13].buffers_list);
  FUNC_5(&VAR_10->p_isles_mem[VAR_13].list_entry,
         &VAR_10->free_isles_list);
 }

 VAR_10->p_archipelagos_mem =
    FUNC_2(VAR_8,
     sizeof(struct qed_ooo_archipelago),
     VAR_2);
 if (!VAR_10->p_archipelagos_mem)
  goto no_archipelagos_mem;

 for (VAR_13 = 0; VAR_13 < VAR_8; VAR_13++)
  FUNC_1(&VAR_10->p_archipelagos_mem[VAR_13].isles_list);

 VAR_10->ooo_history.p_cqes =
    FUNC_2(VAR_6,
     sizeof(struct ooo_opaque),
     VAR_2);
 if (!VAR_10->ooo_history.p_cqes)
  goto no_history_mem;

 VAR_10->ooo_history.num_of_cqes = VAR_6;

 VAR_7->p_ooo_info = VAR_10;
 return 0;

no_history_mem:
 FUNC_3(VAR_10->p_archipelagos_mem);
no_archipelagos_mem:
 FUNC_3(VAR_10->p_isles_mem);
no_isles_mem:
 FUNC_3(VAR_10);
 return -VAR_1;
}
