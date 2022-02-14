
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fsg_opts {int lock; TYPE_1__* common; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int can_stall; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,char*,int) ;
 struct fsg_opts* FUNC_3 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_4(struct config_item *VAR_0, char *VAR_1)
{
 struct fsg_opts *VAR_2 = FUNC_3(VAR_0);
 int VAR_3;

 FUNC_0(&VAR_2->lock);
 VAR_3 = FUNC_2(VAR_1, "%d", VAR_2->common->can_stall);
 FUNC_1(&VAR_2->lock);

 return VAR_3;
}
