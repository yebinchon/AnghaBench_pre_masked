
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_data; int i_nlink; } ;
struct TYPE_2__ {int ip_flags; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct inode *VAR_1)
{
 if (!VAR_1->i_nlink ||
     (FUNC_0(VAR_1)->ip_flags & VAR_0)) {
  FUNC_2(VAR_1);
 } else {
  FUNC_3(&VAR_1->i_data);
 }
 FUNC_1(VAR_1);
}
