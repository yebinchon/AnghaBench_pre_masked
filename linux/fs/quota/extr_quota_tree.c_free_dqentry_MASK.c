
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
struct qtree_mem_dqinfo {int dqi_blocksize_bits; int dqi_entry_size; int dqi_usable_bs; } ;
struct qt_disk_dqdbheader {int dqdh_entries; } ;
struct dquot {int dq_off; int dq_sb; } ;


 int VAR_0 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (struct qtree_mem_dqinfo*,char*,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int ,int ) ;
 int FUNC_6 (struct qtree_mem_dqinfo*,char*,int) ;
 int FUNC_7 (struct qtree_mem_dqinfo*) ;
 int FUNC_8 (int ,char*,int,...) ;
 int FUNC_9 (struct qtree_mem_dqinfo*,int,char*) ;
 int FUNC_10 (struct qtree_mem_dqinfo*,char*,int) ;
 int FUNC_11 (struct qtree_mem_dqinfo*,int,char*) ;

__attribute__((used)) static int FUNC_12(struct qtree_mem_dqinfo *VAR_1, struct dquot *VAR_2,
   uint VAR_3)
{
 struct qt_disk_dqdbheader *VAR_4;
 char *VAR_5 = FUNC_0(VAR_1->dqi_usable_bs);
 int VAR_6 = 0;

 if (!VAR_5)
  return -VAR_0;
 if (VAR_2->dq_off >> VAR_1->dqi_blocksize_bits != VAR_3) {
  FUNC_8(VAR_2->dq_sb, "Quota structure has offset to "
   "other block (%u) than it should (%u)", VAR_3,
   (uint)(VAR_2->dq_off >> VAR_1->dqi_blocksize_bits));
  goto out_buf;
 }
 VAR_6 = FUNC_9(VAR_1, VAR_3, VAR_5);
 if (VAR_6 < 0) {
  FUNC_8(VAR_2->dq_sb, "Can't read quota data block %u",
       VAR_3);
  goto out_buf;
 }
 VAR_4 = (struct qt_disk_dqdbheader *)VAR_5;
 FUNC_3(&VAR_4->dqdh_entries, -1);
 if (!FUNC_4(VAR_4->dqdh_entries)) {
  VAR_6 = FUNC_10(VAR_1, VAR_5, VAR_3);
  if (VAR_6 >= 0)
   VAR_6 = FUNC_6(VAR_1, VAR_5, VAR_3);
  if (VAR_6 < 0) {
   FUNC_8(VAR_2->dq_sb, "Can't move quota data block "
        "(%u) to free list", VAR_3);
   goto out_buf;
  }
 } else {
  FUNC_5(VAR_5 +
         (VAR_2->dq_off & ((1 << VAR_1->dqi_blocksize_bits) - 1)),
         0, VAR_1->dqi_entry_size);
  if (FUNC_4(VAR_4->dqdh_entries) ==
      FUNC_7(VAR_1) - 1) {

   VAR_6 = FUNC_1(VAR_1, VAR_5, VAR_3);
   if (VAR_6 < 0) {
    FUNC_8(VAR_2->dq_sb, "Can't insert quota "
        "data block (%u) to free entry list", VAR_3);
    goto out_buf;
   }
  } else {
   VAR_6 = FUNC_11(VAR_1, VAR_3, VAR_5);
   if (VAR_6 < 0) {
    FUNC_8(VAR_2->dq_sb, "Can't write quota "
         "data block %u", VAR_3);
    goto out_buf;
   }
  }
 }
 VAR_2->dq_off = 0;
out_buf:
 FUNC_2(VAR_5);
 return VAR_6;
}
