
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
typedef int spinlock_t ;
struct TYPE_2__ {int mi_bgl; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int * FUNC_1 (int ,unsigned int) ;

__attribute__((used)) static inline spinlock_t *
FUNC_2(struct inode *VAR_0, unsigned int VAR_1)
{
 return FUNC_1(FUNC_0(VAR_0)->mi_bgl, VAR_1);
}
