
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct command {int kref; int * lock; } ;
typedef int spinlock_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static inline void FUNC_3(struct command *VAR_1)
{
 unsigned long VAR_2;
 spinlock_t *VAR_3 = VAR_1->lock;

 FUNC_1(VAR_3, VAR_2);
 FUNC_0(&VAR_1->kref, VAR_0);
 FUNC_2(VAR_3, VAR_2);
}
