
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct the_nilfs {int ns_cno; int ns_cpfile; } ;
struct nilfs_sc_info {TYPE_1__* sc_super; } ;
struct nilfs_checkpoint {int dummy; } ;
struct buffer_head {int dummy; } ;
struct TYPE_2__ {struct the_nilfs* s_fs_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (int ,int ,int,struct nilfs_checkpoint**,struct buffer_head**) ;
 int FUNC_4 (int ,int ,struct buffer_head*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct nilfs_sc_info *VAR_2)
{
 struct the_nilfs *VAR_3 = VAR_2->sc_super->s_fs_info;
 struct buffer_head *VAR_4;
 struct nilfs_checkpoint *VAR_5;
 int VAR_6;


 VAR_6 = FUNC_3(VAR_3->ns_cpfile, VAR_3->ns_cno, 1,
       &VAR_5, &VAR_4);
 if (FUNC_1(!VAR_6)) {





  FUNC_2(VAR_4);
  FUNC_5(VAR_3->ns_cpfile);
  FUNC_4(
   VAR_3->ns_cpfile, VAR_3->ns_cno, VAR_4);
 } else
  FUNC_0(VAR_6 == -VAR_0 || VAR_6 == -VAR_1);

 return VAR_6;
}
