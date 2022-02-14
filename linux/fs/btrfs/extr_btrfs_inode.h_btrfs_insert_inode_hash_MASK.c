
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_ino; } ;
struct TYPE_2__ {int root; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*,unsigned long) ;
 unsigned long FUNC_2 (int ,int ) ;

__attribute__((used)) static inline void FUNC_3(struct inode *VAR_0)
{
 unsigned long VAR_1 = FUNC_2(VAR_0->i_ino, FUNC_0(VAR_0)->root);

 FUNC_1(VAR_0, VAR_1);
}
