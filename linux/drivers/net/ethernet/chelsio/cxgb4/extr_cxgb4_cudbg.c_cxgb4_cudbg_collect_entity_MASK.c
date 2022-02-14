
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct cxgb4_collect_entity {int (* collect_cb ) (struct cudbg_init*,struct cudbg_buffer*,struct cudbg_error*) ;int entity; } ;
struct cudbg_init {int dummy; } ;
struct cudbg_error {int sys_warn; scalar_t__ sys_err; int member_0; } ;
struct cudbg_entity_hdr {size_t size; int hdr_flags; int sys_warn; scalar_t__ sys_err; int start_offset; int entity_type; } ;
struct cudbg_buffer {int offset; } ;


 int VAR_0 ;
 int FUNC_0 (struct cudbg_buffer*,struct cudbg_entity_hdr*) ;
 struct cudbg_entity_hdr* FUNC_1 (void*,int ) ;
 int FUNC_2 (struct cudbg_error*,int ,int) ;
 int FUNC_3 (struct cudbg_init*,struct cudbg_buffer*,struct cudbg_error*) ;

__attribute__((used)) static void FUNC_4(struct cudbg_init *VAR_1,
           struct cudbg_buffer *VAR_2,
           const struct cxgb4_collect_entity *VAR_3,
           u32 VAR_4, void *VAR_5, u32 *VAR_6)
{
 struct cudbg_error VAR_7 = { 0 };
 struct cudbg_entity_hdr *VAR_8;
 u32 VAR_9, VAR_10 = 0;
 int VAR_11;

 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
  const struct cxgb4_collect_entity *VAR_12 = &VAR_3[VAR_9];

  VAR_8 = FUNC_1(VAR_5, VAR_12->entity);
  VAR_8->entity_type = VAR_12->entity;
  VAR_8->start_offset = VAR_2->offset;
  FUNC_2(&VAR_7, 0, sizeof(struct cudbg_error));
  VAR_11 = VAR_12->collect_cb(VAR_1, VAR_2, &VAR_7);
  if (VAR_11) {
   VAR_8->size = 0;
   VAR_2->offset = VAR_8->start_offset;
  } else {
   FUNC_0(VAR_2, VAR_8);
  }


  if (VAR_7.sys_err)
   VAR_11 = VAR_0;

  VAR_8->hdr_flags = VAR_11;
  VAR_8->sys_err = VAR_7.sys_err;
  VAR_8->sys_warn = VAR_7.sys_warn;
  VAR_10 += VAR_8->size;
 }

 *VAR_6 += VAR_10;
}
