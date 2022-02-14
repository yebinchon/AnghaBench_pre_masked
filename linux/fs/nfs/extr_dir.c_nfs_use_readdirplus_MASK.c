
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct dir_context {scalar_t__ pos; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int FUNC_1 (struct inode*,int ) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static
bool FUNC_3(struct inode *VAR_2, struct dir_context *VAR_3)
{
 if (!FUNC_1(VAR_2, VAR_0))
  return 0;
 if (FUNC_2(VAR_1, &FUNC_0(VAR_2)->flags))
  return 1;
 if (VAR_3->pos == 0)
  return 1;
 return 0;
}
