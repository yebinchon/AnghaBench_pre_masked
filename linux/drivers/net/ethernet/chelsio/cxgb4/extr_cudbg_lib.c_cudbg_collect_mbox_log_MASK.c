
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef void* u32 ;
typedef int u16 ;
struct mbox_cmd_log {int size; int cursor; } ;
struct mbox_cmd {scalar_t__ timestamp; int* cmd; } ;
struct cudbg_mbox_log {void** lo; void** hi; int entry; } ;
struct cudbg_init {struct adapter* adap; } ;
struct cudbg_error {int dummy; } ;
struct cudbg_buffer {scalar_t__ data; int member_0; } ;
struct adapter {struct mbox_cmd_log* mbox_log; } ;


 int VAR_0 ;
 int FUNC_0 (struct cudbg_init*,struct cudbg_buffer*,void*,struct cudbg_buffer*) ;
 int FUNC_1 (struct cudbg_init*,struct cudbg_buffer*,struct cudbg_buffer*) ;
 struct mbox_cmd* FUNC_2 (struct mbox_cmd_log*,unsigned int) ;
 int FUNC_3 (int *,struct mbox_cmd*,int) ;

int FUNC_4(struct cudbg_init *VAR_1,
      struct cudbg_buffer *VAR_2,
      struct cudbg_error *VAR_3)
{
 struct adapter *VAR_4 = VAR_1->adap;
 struct cudbg_mbox_log *VAR_5 = ((void*)0);
 struct cudbg_buffer VAR_6 = { 0 };
 struct mbox_cmd_log *VAR_7 = ((void*)0);
 struct mbox_cmd *VAR_8;
 unsigned int VAR_9;
 u16 VAR_10;
 int VAR_11, VAR_12, VAR_13;
 u64 VAR_14;
 u32 VAR_15;

 VAR_7 = VAR_4->mbox_log;
 VAR_10 = VAR_4->mbox_log->size;
 VAR_15 = sizeof(struct cudbg_mbox_log) * VAR_10;
 VAR_13 = FUNC_0(VAR_1, VAR_2, VAR_15, &VAR_6);
 if (VAR_13)
  return VAR_13;

 VAR_5 = (struct cudbg_mbox_log *)VAR_6.data;
 for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++) {
  VAR_9 = VAR_7->cursor + VAR_12;
  if (VAR_9 >= VAR_7->size)
   VAR_9 -= VAR_7->size;

  VAR_8 = FUNC_2(VAR_7, VAR_9);

  if (VAR_8->timestamp == 0)
   continue;

  FUNC_3(&VAR_5->entry, VAR_8, sizeof(struct mbox_cmd));
  for (VAR_11 = 0; VAR_11 < VAR_0 / 8; VAR_11++) {
   VAR_14 = VAR_8->cmd[VAR_11];
   VAR_5->hi[VAR_11] = (u32)(VAR_14 >> 32);
   VAR_5->lo[VAR_11] = (u32)VAR_14;
  }
  VAR_5++;
 }
 return FUNC_1(VAR_1, &VAR_6, VAR_2);
}
