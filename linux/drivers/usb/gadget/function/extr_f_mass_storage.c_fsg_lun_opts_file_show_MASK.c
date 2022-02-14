
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct fsg_opts {TYPE_3__* common; } ;
struct TYPE_4__ {int ci_parent; } ;
struct TYPE_5__ {TYPE_1__ cg_item; } ;
struct fsg_lun_opts {int lun; TYPE_2__ group; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;
struct TYPE_6__ {int filesem; } ;


 int FUNC_0 (int ,int *,char*) ;
 struct fsg_lun_opts* FUNC_1 (struct config_item*) ;
 struct fsg_opts* FUNC_2 (int ) ;

__attribute__((used)) static ssize_t FUNC_3(struct config_item *VAR_0, char *VAR_1)
{
 struct fsg_lun_opts *VAR_2 = FUNC_1(VAR_0);
 struct fsg_opts *VAR_3 = FUNC_2(VAR_2->group.cg_item.ci_parent);

 return FUNC_0(VAR_2->lun, &VAR_3->common->filesem, VAR_1);
}
