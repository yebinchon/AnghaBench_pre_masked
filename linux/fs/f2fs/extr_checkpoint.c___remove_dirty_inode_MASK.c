
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
typedef enum inode_type { ____Placeholder_inode_type } inode_type ;
struct TYPE_2__ {int dirty_list; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct inode*,int) ;
 scalar_t__ FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static void FUNC_7(struct inode *VAR_3, enum inode_type VAR_4)
{
 int VAR_5 = (VAR_4 == VAR_0) ? VAR_1 : VAR_2;

 if (FUNC_3(VAR_3) || !FUNC_4(VAR_3, VAR_5))
  return;

 FUNC_5(&FUNC_0(VAR_3)->dirty_list);
 FUNC_2(VAR_3, VAR_5);
 FUNC_6(FUNC_1(VAR_3), VAR_4);
}
