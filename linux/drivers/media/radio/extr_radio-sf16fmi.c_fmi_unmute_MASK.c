
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fmi {int lock; int io; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static inline void FUNC_3(struct fmi *VAR_0)
{
 FUNC_0(&VAR_0->lock);
 FUNC_2(0x08, VAR_0->io);
 FUNC_1(&VAR_0->lock);
}
