
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qtree_mem_dqinfo {int dqi_usable_bs; int dqi_qtree_depth; int dqi_sb; } ;
typedef int ssize_t ;
typedef unsigned int qid_t ;
typedef scalar_t__ __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qtree_mem_dqinfo*,unsigned int,int) ;
 scalar_t__ FUNC_1 (int ) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 unsigned int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,char*,unsigned int) ;
 int FUNC_6 (struct qtree_mem_dqinfo*,unsigned int,char*) ;

__attribute__((used)) static int FUNC_7(struct qtree_mem_dqinfo *VAR_2, qid_t *VAR_3,
   unsigned int VAR_4, int VAR_5)
{
 char *VAR_6 = FUNC_2(VAR_2->dqi_usable_bs);
 __le32 *VAR_7 = (__le32 *)VAR_6;
 ssize_t VAR_8;
 unsigned int VAR_9 = VAR_2->dqi_usable_bs >> 2;
 unsigned int VAR_10 = 1;
 int VAR_11;

 if (!VAR_6)
  return -VAR_1;

 for (VAR_11 = VAR_5; VAR_11 < VAR_2->dqi_qtree_depth - 1; VAR_11++)
  VAR_10 *= VAR_9;

 VAR_8 = FUNC_6(VAR_2, VAR_4, VAR_6);
 if (VAR_8 < 0) {
  FUNC_5(VAR_2->dqi_sb,
       "Can't read quota tree block %u", VAR_4);
  goto out_buf;
 }
 for (VAR_11 = FUNC_0(VAR_2, *VAR_3, VAR_5); VAR_11 < VAR_9; VAR_11++) {
  if (VAR_7[VAR_11] == FUNC_1(0)) {
   *VAR_3 += VAR_10;
   continue;
  }
  if (VAR_5 == VAR_2->dqi_qtree_depth - 1) {
   VAR_8 = 0;
   goto out_buf;
  }
  VAR_8 = FUNC_7(VAR_2, VAR_3, FUNC_4(VAR_7[VAR_11]), VAR_5 + 1);
  if (VAR_8 != -VAR_0)
   break;
 }
 if (VAR_11 == VAR_9) {
  VAR_8 = -VAR_0;
  goto out_buf;
 }
out_buf:
 FUNC_3(VAR_6);
 return VAR_8;
}
