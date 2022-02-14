
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint ;
struct qtree_mem_dqinfo {int dqi_free_entry; int dqi_entry_size; int dqi_blocksize_bits; int dqi_usable_bs; } ;
struct qt_disk_dqdbheader {int dqdh_entries; } ;
struct TYPE_2__ {int type; } ;
struct dquot {int dq_off; int dq_sb; TYPE_1__ dq_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qtree_mem_dqinfo*) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (char*,int ,int ) ;
 int FUNC_7 (struct qtree_mem_dqinfo*) ;
 scalar_t__ FUNC_8 (struct qtree_mem_dqinfo*,char*) ;
 int FUNC_9 (int ,char*,...) ;
 int FUNC_10 (struct qtree_mem_dqinfo*,int,char*) ;
 int FUNC_11 (struct qtree_mem_dqinfo*,char*,int) ;
 int FUNC_12 (struct qtree_mem_dqinfo*,int,char*) ;

__attribute__((used)) static uint FUNC_13(struct qtree_mem_dqinfo *VAR_2,
         struct dquot *VAR_3, int *VAR_4)
{
 uint VAR_5, VAR_6;
 struct qt_disk_dqdbheader *VAR_7;
 char *VAR_8 = FUNC_1(VAR_2->dqi_usable_bs);
 char *VAR_9;

 *VAR_4 = 0;
 if (!VAR_8) {
  *VAR_4 = -VAR_1;
  return 0;
 }
 VAR_7 = (struct qt_disk_dqdbheader *)VAR_8;
 if (VAR_2->dqi_free_entry) {
  VAR_5 = VAR_2->dqi_free_entry;
  *VAR_4 = FUNC_10(VAR_2, VAR_5, VAR_8);
  if (*VAR_4 < 0)
   goto out_buf;
 } else {
  VAR_5 = FUNC_0(VAR_2);
  if ((int)VAR_5 < 0) {
   *VAR_4 = VAR_5;
   FUNC_2(VAR_8);
   return 0;
  }
  FUNC_6(VAR_8, 0, VAR_2->dqi_usable_bs);


  VAR_2->dqi_free_entry = VAR_5;
  FUNC_5(VAR_3->dq_sb, VAR_3->dq_id.type);
 }

 if (FUNC_4(VAR_7->dqdh_entries) + 1 >= FUNC_7(VAR_2)) {
  *VAR_4 = FUNC_11(VAR_2, VAR_8, VAR_5);
  if (*VAR_4 < 0) {
   FUNC_9(VAR_3->dq_sb, "Can't remove block (%u) "
        "from entry free list", VAR_5);
   goto out_buf;
  }
 }
 FUNC_3(&VAR_7->dqdh_entries, 1);

 VAR_9 = VAR_8 + sizeof(struct qt_disk_dqdbheader);
 for (VAR_6 = 0; VAR_6 < FUNC_7(VAR_2); VAR_6++) {
  if (FUNC_8(VAR_2, VAR_9))
   break;
  VAR_9 += VAR_2->dqi_entry_size;
 }







 *VAR_4 = FUNC_12(VAR_2, VAR_5, VAR_8);
 if (*VAR_4 < 0) {
  FUNC_9(VAR_3->dq_sb, "Can't write quota data block %u",
       VAR_5);
  goto out_buf;
 }
 VAR_3->dq_off = (VAR_5 << VAR_2->dqi_blocksize_bits) +
   sizeof(struct qt_disk_dqdbheader) +
   VAR_6 * VAR_2->dqi_entry_size;
 FUNC_2(VAR_8);
 return VAR_5;
out_buf:
 FUNC_2(VAR_8);
 return 0;
}
