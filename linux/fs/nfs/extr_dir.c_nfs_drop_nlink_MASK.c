
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {scalar_t__ i_nlink; int i_lock; } ;
struct TYPE_2__ {int cache_validity; int attr_gencount; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct inode *VAR_4)
{
 FUNC_3(&VAR_4->i_lock);

 if (VAR_4->i_nlink > 0)
  FUNC_1(VAR_4);
 FUNC_0(VAR_4)->attr_gencount = FUNC_2();
 FUNC_0(VAR_4)->cache_validity |= VAR_0
  | VAR_1
  | VAR_2
  | VAR_3;
 FUNC_4(&VAR_4->i_lock);
}
