
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct ocfs2_mem_dqinfo {struct buffer_head* dqi_libh; } ;
struct mem_dqinfo {scalar_t__ dqi_priv; } ;
struct buffer_head {int dummy; } ;
struct TYPE_2__ {int * files; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,struct buffer_head*,int ,struct mem_dqinfo*) ;
 int VAR_0 ;
 struct mem_dqinfo* FUNC_2 (struct super_block*,int) ;
 TYPE_1__* FUNC_3 (struct super_block*) ;

__attribute__((used)) static int FUNC_4(struct super_block *VAR_1, int VAR_2)
{
 struct mem_dqinfo *VAR_3 = FUNC_2(VAR_1, VAR_2);
 struct buffer_head *VAR_4 = ((struct ocfs2_mem_dqinfo *)VAR_3->dqi_priv)
      ->dqi_libh;
 int VAR_5;

 VAR_5 = FUNC_1(FUNC_3(VAR_1)->files[VAR_2], VAR_4, VAR_0,
     VAR_3);
 if (VAR_5 < 0) {
  FUNC_0(VAR_5);
  return -1;
 }

 return 0;
}
