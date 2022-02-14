
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
struct qtree_mem_dqinfo {int dqi_qtree_depth; int dqi_usable_bs; } ;
struct dquot {int dq_id; int dq_sb; } ;
typedef scalar_t__ loff_t ;
typedef int __le32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct qtree_mem_dqinfo*,struct dquot*,int ) ;
 size_t FUNC_1 (struct qtree_mem_dqinfo*,int ,int) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int ) ;
 scalar_t__ FUNC_6 (struct qtree_mem_dqinfo*,int ,char*) ;

__attribute__((used)) static loff_t FUNC_7(struct qtree_mem_dqinfo *VAR_1,
    struct dquot *VAR_2, uint VAR_3, int VAR_4)
{
 char *VAR_5 = FUNC_2(VAR_1->dqi_usable_bs);
 loff_t VAR_6 = 0;
 __le32 *VAR_7 = (__le32 *)VAR_5;

 if (!VAR_5)
  return -VAR_0;
 VAR_6 = FUNC_6(VAR_1, VAR_3, VAR_5);
 if (VAR_6 < 0) {
  FUNC_5(VAR_2->dq_sb, "Can't read quota tree block %u",
       VAR_3);
  goto out_buf;
 }
 VAR_6 = 0;
 VAR_3 = FUNC_4(VAR_7[FUNC_1(VAR_1, VAR_2->dq_id, VAR_4)]);
 if (!VAR_3)
  goto out_buf;
 if (VAR_4 < VAR_1->dqi_qtree_depth - 1)
  VAR_6 = FUNC_7(VAR_1, VAR_2, VAR_3, VAR_4+1);
 else
  VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_3);
out_buf:
 FUNC_3(VAR_5);
 return VAR_6;
}
