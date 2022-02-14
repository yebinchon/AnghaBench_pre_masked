
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_lock; } ;
typedef scalar_t__ loff_t ;
struct TYPE_2__ {int cache_validity; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct inode*,scalar_t__) ;
 int FUNC_2 (struct inode*,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct inode*,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct inode * VAR_3, loff_t VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_2(VAR_3, VAR_4);
 if (VAR_5)
  goto out;

 FUNC_1(VAR_3, VAR_4);

 if (VAR_4 == 0)
  FUNC_0(VAR_3)->cache_validity &= ~(VAR_1 |
    VAR_0);
 FUNC_0(VAR_3)->cache_validity &= ~VAR_2;

 FUNC_4(&VAR_3->i_lock);
 FUNC_5(VAR_3, VAR_4);
 FUNC_3(&VAR_3->i_lock);
out:
 return VAR_5;
}
