
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ns_common {TYPE_1__* ops; } ;
struct inode {struct ns_common* i_private; } ;
struct TYPE_2__ {int (* put ) (struct ns_common*) ;} ;


 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct ns_common*) ;

__attribute__((used)) static void FUNC_2(struct inode *VAR_0)
{
 struct ns_common *VAR_1 = VAR_0->i_private;
 FUNC_0(VAR_0);
 VAR_1->ops->put(VAR_1);
}
