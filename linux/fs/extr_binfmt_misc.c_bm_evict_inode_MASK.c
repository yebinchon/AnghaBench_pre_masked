
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct inode {TYPE_1__* i_private; } ;
struct TYPE_3__ {int flags; int interp_file; } ;
typedef TYPE_1__ Node ;


 int VAR_0 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(struct inode *VAR_1)
{
 Node *VAR_2 = VAR_1->i_private;

 if (VAR_2 && VAR_2->flags & VAR_0)
  FUNC_1(VAR_2->interp_file, ((void*)0));

 FUNC_0(VAR_1);
 FUNC_2(VAR_2);
}
