
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint ;
struct qtree_mem_dqinfo {int dqi_entry_size; int dqi_blocksize_bits; TYPE_1__* dqi_ops; int dqi_usable_bs; } ;
struct qt_disk_dqdbheader {int dummy; } ;
struct dquot {int dq_id; int dq_sb; } ;
typedef int loff_t ;
struct TYPE_2__ {scalar_t__ (* is_id ) (char*,struct dquot*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 char* FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct qtree_mem_dqinfo*) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (struct qtree_mem_dqinfo*,int,char*) ;
 scalar_t__ FUNC_6 (char*,struct dquot*) ;

__attribute__((used)) static loff_t FUNC_7(struct qtree_mem_dqinfo *VAR_3,
     struct dquot *VAR_4, uint VAR_5)
{
 char *VAR_6 = FUNC_1(VAR_3->dqi_usable_bs);
 loff_t VAR_7 = 0;
 int VAR_8;
 char *VAR_9;

 if (!VAR_6)
  return -VAR_1;
 VAR_7 = FUNC_5(VAR_3, VAR_5, VAR_6);
 if (VAR_7 < 0) {
  FUNC_4(VAR_4->dq_sb, "Can't read quota tree "
       "block %u", VAR_5);
  goto out_buf;
 }
 VAR_9 = VAR_6 + sizeof(struct qt_disk_dqdbheader);
 for (VAR_8 = 0; VAR_8 < FUNC_3(VAR_3); VAR_8++) {
  if (VAR_3->dqi_ops->is_id(VAR_9, VAR_4))
   break;
  VAR_9 += VAR_3->dqi_entry_size;
 }
 if (VAR_8 == FUNC_3(VAR_3)) {
  FUNC_4(VAR_4->dq_sb,
       "Quota for id %u referenced but not present",
       FUNC_0(&VAR_2, VAR_4->dq_id));
  VAR_7 = -VAR_0;
  goto out_buf;
 } else {
  VAR_7 = (VAR_5 << VAR_3->dqi_blocksize_bits) + sizeof(struct
    qt_disk_dqdbheader) + VAR_8 * VAR_3->dqi_entry_size;
 }
out_buf:
 FUNC_2(VAR_6);
 return VAR_7;
}
