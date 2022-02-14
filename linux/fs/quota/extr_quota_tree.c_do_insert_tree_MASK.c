
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
struct qtree_mem_dqinfo {int dqi_qtree_depth; int dqi_usable_bs; } ;
struct dquot {int dq_id; int dq_sb; } ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct qtree_mem_dqinfo*,struct dquot*,int*) ;
 int FUNC_2 (struct qtree_mem_dqinfo*) ;
 size_t FUNC_3 (struct qtree_mem_dqinfo*,int ,int) ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,int ,int ) ;
 int FUNC_8 (struct qtree_mem_dqinfo*,char*,int) ;
 int FUNC_9 (int ,char*,int) ;
 int FUNC_10 (struct qtree_mem_dqinfo*,int,char*) ;
 int FUNC_11 (struct qtree_mem_dqinfo*,int,char*) ;

__attribute__((used)) static int FUNC_12(struct qtree_mem_dqinfo *VAR_2, struct dquot *VAR_3,
     uint *VAR_4, int VAR_5)
{
 char *VAR_6 = FUNC_4(VAR_2->dqi_usable_bs);
 int VAR_7 = 0, VAR_8 = 0, VAR_9 = 0;
 __le32 *VAR_10;
 uint VAR_11;

 if (!VAR_6)
  return -VAR_1;
 if (!*VAR_4) {
  VAR_7 = FUNC_2(VAR_2);
  if (VAR_7 < 0)
   goto out_buf;
  *VAR_4 = VAR_7;
  FUNC_7(VAR_6, 0, VAR_2->dqi_usable_bs);
  VAR_9 = 1;
 } else {
  VAR_7 = FUNC_10(VAR_2, *VAR_4, VAR_6);
  if (VAR_7 < 0) {
   FUNC_9(VAR_3->dq_sb, "Can't read tree quota "
        "block %u", *VAR_4);
   goto out_buf;
  }
 }
 VAR_10 = (__le32 *)VAR_6;
 VAR_11 = FUNC_6(VAR_10[FUNC_3(VAR_2, VAR_3->dq_id, VAR_5)]);
 if (!VAR_11)
  VAR_8 = 1;
 if (VAR_5 == VAR_2->dqi_qtree_depth - 1) {
  VAR_11 = FUNC_1(VAR_2, VAR_3, &VAR_7);
 } else {
  VAR_7 = FUNC_12(VAR_2, VAR_3, &VAR_11, VAR_5+1);
 }
 if (VAR_8 && VAR_7 >= 0) {
  VAR_10[FUNC_3(VAR_2, VAR_3->dq_id, VAR_5)] =
       FUNC_0(VAR_11);
  VAR_7 = FUNC_11(VAR_2, *VAR_4, VAR_6);
 } else if (VAR_9 && VAR_7 < 0) {
  FUNC_8(VAR_2, VAR_6, *VAR_4);
 }
out_buf:
 FUNC_5(VAR_6);
 return VAR_7;
}
