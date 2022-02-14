
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_2__ {unsigned int* i_gc_failures; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 size_t VAR_0 ;
 int FUNC_1 (struct inode*,int) ;

__attribute__((used)) static inline void FUNC_2(struct inode *VAR_1,
     unsigned int VAR_2)
{
 FUNC_0(VAR_1)->i_gc_failures[VAR_0] = VAR_2;
 FUNC_1(VAR_1, 1);
}
