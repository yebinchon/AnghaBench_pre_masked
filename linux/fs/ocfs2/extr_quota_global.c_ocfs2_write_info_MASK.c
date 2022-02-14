
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct ocfs2_mem_dqinfo {int dummy; } ;
typedef int handle_t ;
struct TYPE_2__ {struct ocfs2_mem_dqinfo* dqi_priv; } ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (struct super_block*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct super_block*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (struct ocfs2_mem_dqinfo*,int) ;
 int * FUNC_7 (int ,int ) ;
 int FUNC_8 (struct ocfs2_mem_dqinfo*,int) ;
 TYPE_1__* FUNC_9 (struct super_block*,int) ;

__attribute__((used)) static int FUNC_10(struct super_block *VAR_1, int VAR_2)
{
 handle_t *VAR_3;
 int VAR_4 = 0;
 struct ocfs2_mem_dqinfo *VAR_5 = FUNC_9(VAR_1, VAR_2)->dqi_priv;

 VAR_4 = FUNC_6(VAR_5, 1);
 if (VAR_4 < 0)
  goto out;
 VAR_3 = FUNC_7(FUNC_1(VAR_1), VAR_0);
 if (FUNC_0(VAR_3)) {
  VAR_4 = FUNC_2(VAR_3);
  FUNC_4(VAR_4);
  goto out_ilock;
 }
 VAR_4 = FUNC_3(VAR_1, VAR_2);
 FUNC_5(FUNC_1(VAR_1), VAR_3);
out_ilock:
 FUNC_8(VAR_5, 1);
out:
 if (VAR_4)
  FUNC_4(VAR_4);
 return VAR_4;
}
