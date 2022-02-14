
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct address_space {struct inode* host; } ;
typedef scalar_t__ loff_t ;
struct TYPE_2__ {int * i_gc_rwsem; int i_mmap_sem; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 size_t VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct inode*,scalar_t__,int) ;
 int FUNC_4 (struct inode*) ;
 scalar_t__ FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*,scalar_t__) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct address_space *VAR_1, loff_t VAR_2)
{
 struct inode *VAR_3 = VAR_1->host;
 loff_t VAR_4 = FUNC_5(VAR_3);


 if (VAR_2 > VAR_4 && !FUNC_4(VAR_3)) {
  FUNC_2(&FUNC_0(VAR_3)->i_gc_rwsem[VAR_0]);
  FUNC_2(&FUNC_0(VAR_3)->i_mmap_sem);

  FUNC_6(VAR_3, VAR_4);
  if (!FUNC_1(VAR_3))
   FUNC_3(VAR_3, VAR_4, 1);

  FUNC_7(&FUNC_0(VAR_3)->i_mmap_sem);
  FUNC_7(&FUNC_0(VAR_3)->i_gc_rwsem[VAR_0]);
 }
}
