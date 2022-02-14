
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct page {int dummy; } ;
struct inode {int i_lock; } ;
typedef int pgoff_t ;
typedef int loff_t ;
struct TYPE_4__ {int cache_validity; } ;
struct TYPE_3__ {struct inode* host; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*,int) ;
 int FUNC_3 (struct inode*,int ) ;
 TYPE_1__* FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct page *VAR_3, unsigned int VAR_4, unsigned int VAR_5)
{
 struct inode *VAR_6 = FUNC_4(VAR_3)->host;
 loff_t VAR_7, VAR_8;
 pgoff_t VAR_9;

 FUNC_7(&VAR_6->i_lock);
 VAR_8 = FUNC_1(VAR_6);
 VAR_9 = (VAR_8 - 1) >> VAR_2;
 if (VAR_8 > 0 && FUNC_6(VAR_3) < VAR_9)
  goto out;
 VAR_7 = FUNC_5(VAR_3) + ((loff_t)VAR_4+VAR_5);
 if (VAR_8 >= VAR_7)
  goto out;
 FUNC_2(VAR_6, VAR_7);
 FUNC_0(VAR_6)->cache_validity &= ~VAR_1;
 FUNC_3(VAR_6, VAR_0);
out:
 FUNC_8(&VAR_6->i_lock);
}
