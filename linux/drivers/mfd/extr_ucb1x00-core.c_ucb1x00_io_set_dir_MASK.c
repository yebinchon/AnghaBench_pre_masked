
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucb1x00 {unsigned int io_dir; int io_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct ucb1x00*,int ,unsigned int) ;

void FUNC_3(struct ucb1x00 *VAR_1, unsigned int VAR_2, unsigned int VAR_3)
{
 unsigned long VAR_4;

 FUNC_0(&VAR_1->io_lock, VAR_4);
 VAR_1->io_dir |= VAR_3;
 VAR_1->io_dir &= ~VAR_2;

 FUNC_2(VAR_1, VAR_0, VAR_1->io_dir);
 FUNC_1(&VAR_1->io_lock, VAR_4);
}
