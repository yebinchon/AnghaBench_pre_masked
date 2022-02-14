
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_size; int i_mapping; } ;
struct TYPE_2__ {int i_mmap_sem; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static inline void FUNC_5(struct inode *VAR_0)
{




 FUNC_1(&FUNC_0(VAR_0)->i_mmap_sem);
 FUNC_3(VAR_0->i_mapping, VAR_0->i_size);
 FUNC_2(VAR_0);
 FUNC_4(&FUNC_0(VAR_0)->i_mmap_sem);
}
