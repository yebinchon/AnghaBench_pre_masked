
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long uint32_t ;
typedef int u32 ;
struct tcmu_mailbox {int cmd_head; } ;
struct tcmu_dev {int cmdr_size; size_t dbi_thresh; size_t max_blocks; int data_bitmap; int cmdr_last_cleaned; struct tcmu_mailbox* mb_addr; } ;
struct tcmu_cmd {int dummy; } ;


 size_t VAR_0 ;
 size_t FUNC_0 (int,int) ;
 int FUNC_1 (char*,unsigned long,size_t,...) ;
 size_t FUNC_2 (int ,size_t) ;
 size_t FUNC_3 (int,int ,int) ;
 int FUNC_4 (struct tcmu_mailbox*,int) ;
 int FUNC_5 (struct tcmu_dev*,struct tcmu_cmd*) ;

__attribute__((used)) static bool FUNC_6(struct tcmu_dev *VAR_1, struct tcmu_cmd *VAR_2,
  size_t VAR_3, size_t VAR_4)
{
 struct tcmu_mailbox *VAR_5 = VAR_1->mb_addr;
 uint32_t VAR_6 = (VAR_4 + VAR_0 - 1)
    / VAR_0;
 size_t VAR_7, VAR_8;
 u32 VAR_9;

 FUNC_4(VAR_5, sizeof(*VAR_5));

 VAR_9 = VAR_5->cmd_head % VAR_1->cmdr_size;





 if (FUNC_0(VAR_9, VAR_1->cmdr_size) >= VAR_3)
  VAR_8 = VAR_3;
 else
  VAR_8 = VAR_3 + FUNC_0(VAR_9, VAR_1->cmdr_size);

 VAR_7 = FUNC_3(VAR_9, VAR_1->cmdr_last_cleaned, VAR_1->cmdr_size);
 if (VAR_7 < VAR_8) {
  FUNC_1("no cmd space: %u %u %u\n", VAR_9,
         VAR_1->cmdr_last_cleaned, VAR_1->cmdr_size);
  return 0;
 }


 VAR_7 = FUNC_2(VAR_1->data_bitmap, VAR_1->dbi_thresh);
 if ((VAR_7 * VAR_0) < VAR_4) {
  unsigned long VAR_10 =
    (VAR_1->max_blocks - VAR_1->dbi_thresh) + VAR_7;

  if (VAR_10 < VAR_6) {
   FUNC_1("no data space: only %lu available, but ask for %zu\n",
     VAR_10 * VAR_0,
     VAR_4);
   return 0;
  }

  VAR_1->dbi_thresh += VAR_6;
  if (VAR_1->dbi_thresh > VAR_1->max_blocks)
   VAR_1->dbi_thresh = VAR_1->max_blocks;
 }

 return FUNC_5(VAR_1, VAR_2);
}
