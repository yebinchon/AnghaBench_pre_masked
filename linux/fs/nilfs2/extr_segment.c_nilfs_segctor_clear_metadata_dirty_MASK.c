
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct the_nilfs {int ns_dat; int ns_sufile; int ns_cpfile; } ;
struct nilfs_sc_info {TYPE_2__* sc_root; TYPE_1__* sc_super; } ;
struct TYPE_4__ {int ifile; } ;
struct TYPE_3__ {struct the_nilfs* s_fs_info; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct nilfs_sc_info *VAR_0)
{
 struct the_nilfs *VAR_1 = VAR_0->sc_super->s_fs_info;

 FUNC_0(VAR_0->sc_root->ifile);
 FUNC_0(VAR_1->ns_cpfile);
 FUNC_0(VAR_1->ns_sufile);
 FUNC_0(VAR_1->ns_dat);
}
