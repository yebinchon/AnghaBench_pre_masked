
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_lock; } ;
typedef int loff_t ;
typedef int i_size ;


 int FUNC_0 (struct inode*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline void FUNC_3(struct inode *VAR_0, loff_t VAR_1)
{





 if (sizeof(VAR_1) > sizeof(long))
  FUNC_1(&VAR_0->i_lock);
 FUNC_0(VAR_0, VAR_1);
 if (sizeof(VAR_1) > sizeof(long))
  FUNC_2(&VAR_0->i_lock);
}
