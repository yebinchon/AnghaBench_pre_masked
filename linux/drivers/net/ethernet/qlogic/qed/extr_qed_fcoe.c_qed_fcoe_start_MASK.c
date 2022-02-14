
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct qed_tid_mem {int blocks; int num_tids_per_block; int tid_size; } ;
struct qed_fcoe_tid {int blocks; int num_tids_per_block; int size; } ;
struct qed_dev {int flags; int connections; } ;


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
 int FUNC_8 (int ,int ,int *) ;

__attribute__((used)) static int FUNC_9(struct qed_dev *VAR_5, struct qed_fcoe_tid *VAR_6)
{
 int VAR_7;

 if (VAR_5->flags & VAR_3) {
  FUNC_0(VAR_5, "fcoe already started;\n");
  return 0;
 }

 VAR_7 = FUNC_8(FUNC_1(VAR_5), VAR_4,
        ((void*)0));
 if (VAR_7) {
  FUNC_0(VAR_5, "Failed to start fcoe\n");
  return VAR_7;
 }

 VAR_5->flags |= VAR_3;
 FUNC_2(VAR_5->connections);

 if (VAR_6) {
  struct qed_tid_mem *VAR_8 = FUNC_4(sizeof(*VAR_8),
             VAR_1);

  if (!VAR_8) {
   FUNC_0(VAR_5,
      "Failed to allocate tasks information\n");
   FUNC_7(VAR_5);
   return -VAR_0;
  }

  VAR_7 = FUNC_6(FUNC_1(VAR_5), VAR_8);
  if (VAR_7) {
   FUNC_0(VAR_5, "Failed to gather task information\n");
   FUNC_7(VAR_5);
   FUNC_3(VAR_8);
   return VAR_7;
  }


  VAR_6->size = VAR_8->tid_size;
  VAR_6->num_tids_per_block = VAR_8->num_tids_per_block;
  FUNC_5(VAR_6->blocks, VAR_8->blocks,
         VAR_2 * sizeof(u8 *));

  FUNC_3(VAR_8);
 }

 return 0;
}
