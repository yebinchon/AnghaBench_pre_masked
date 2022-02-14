
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct qed_tid_mem {int blocks; int num_tids_per_block; int tid_size; } ;
struct qed_iscsi_tid {int blocks; int num_tids_per_block; int size; } ;
struct qed_dev {int flags; int connections; } ;
typedef int iscsi_event_cb_t ;


 int FUNC_0 (struct qed_dev*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct qed_dev*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct qed_tid_mem*) ;
 struct qed_tid_mem* FUNC_4 (int,int ) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,struct qed_tid_mem*) ;
 int FUNC_7 (struct qed_dev*) ;
 int FUNC_8 (int ,int ,int *,void*,int ) ;

__attribute__((used)) static int FUNC_9(struct qed_dev *VAR_5,
      struct qed_iscsi_tid *VAR_6,
      void *VAR_7,
      iscsi_event_cb_t VAR_8)
{
 int VAR_9;
 struct qed_tid_mem *VAR_10;

 if (VAR_5->flags & VAR_3) {
  FUNC_0(VAR_5, "iscsi already started;\n");
  return 0;
 }

 VAR_9 = FUNC_8(FUNC_1(VAR_5), VAR_4,
         ((void*)0), VAR_7, VAR_8);
 if (VAR_9) {
  FUNC_0(VAR_5, "Failed to start iscsi\n");
  return VAR_9;
 }

 VAR_5->flags |= VAR_3;
 FUNC_2(VAR_5->connections);

 if (!VAR_6)
  return 0;

 VAR_10 = FUNC_4(sizeof(*VAR_10), VAR_1);

 if (!VAR_10) {
  FUNC_7(VAR_5);
  return -VAR_0;
 }

 VAR_9 = FUNC_6(FUNC_1(VAR_5), VAR_10);
 if (VAR_9) {
  FUNC_0(VAR_5, "Failed to gather task information\n");
  FUNC_7(VAR_5);
  FUNC_3(VAR_10);
  return VAR_9;
 }


 VAR_6->size = VAR_10->tid_size;
 VAR_6->num_tids_per_block = VAR_10->num_tids_per_block;
 FUNC_5(VAR_6->blocks, VAR_10->blocks,
        VAR_2 * sizeof(u8 *));

 FUNC_3(VAR_10);

 return 0;
}
