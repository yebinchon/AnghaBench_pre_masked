
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
struct qtree_mem_dqinfo {int dqi_usable_bs; int dqi_qtree_depth; } ;
struct dquot {int dq_sb; int dq_id; } ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct qtree_mem_dqinfo*,struct dquot*,int ) ;
 size_t FUNC_2 (struct qtree_mem_dqinfo*,int ,int) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct qtree_mem_dqinfo*,char*,int ) ;
 int FUNC_7 (int ,char*,int ) ;
 int FUNC_8 (struct qtree_mem_dqinfo*,int ,char*) ;
 int FUNC_9 (struct qtree_mem_dqinfo*,int ,char*) ;

__attribute__((used)) static int FUNC_10(struct qtree_mem_dqinfo *VAR_2, struct dquot *VAR_3,
         uint *VAR_4, int VAR_5)
{
 char *VAR_6 = FUNC_3(VAR_2->dqi_usable_bs);
 int VAR_7 = 0;
 uint VAR_8;
 __le32 *VAR_9 = (__le32 *)VAR_6;

 if (!VAR_6)
  return -VAR_0;
 VAR_7 = FUNC_8(VAR_2, *VAR_4, VAR_6);
 if (VAR_7 < 0) {
  FUNC_7(VAR_3->dq_sb, "Can't read quota data block %u",
       *VAR_4);
  goto out_buf;
 }
 VAR_8 = FUNC_5(VAR_9[FUNC_2(VAR_2, VAR_3->dq_id, VAR_5)]);
 if (VAR_5 == VAR_2->dqi_qtree_depth - 1) {
  VAR_7 = FUNC_1(VAR_2, VAR_3, VAR_8);
  VAR_8 = 0;
 } else {
  VAR_7 = FUNC_10(VAR_2, VAR_3, &VAR_8, VAR_5+1);
 }
 if (VAR_7 >= 0 && !VAR_8) {
  int VAR_10;
  VAR_9[FUNC_2(VAR_2, VAR_3->dq_id, VAR_5)] = FUNC_0(0);

  for (VAR_10 = 0; VAR_10 < (VAR_2->dqi_usable_bs >> 2) && !VAR_9[VAR_10]; VAR_10++)
   ;

  if (VAR_10 == (VAR_2->dqi_usable_bs >> 2)
      && *VAR_4 != VAR_1) {
   FUNC_6(VAR_2, VAR_6, *VAR_4);
   *VAR_4 = 0;
  } else {
   VAR_7 = FUNC_9(VAR_2, *VAR_4, VAR_6);
   if (VAR_7 < 0)
    FUNC_7(VAR_3->dq_sb,
         "Can't write quota tree block %u",
         *VAR_4);
  }
 }
out_buf:
 FUNC_4(VAR_6);
 return VAR_7;
}
