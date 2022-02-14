
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ilo_hwinfo {int fifo_lock; } ;
struct fifo {int* fifobar; size_t head; size_t imask; } ;


 int VAR_0 ;
 struct fifo* FUNC_0 (char*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct ilo_hwinfo *VAR_1, char *VAR_2)
{
 struct fifo *VAR_3 = FUNC_0(VAR_2);
 unsigned long VAR_4;
 int VAR_5 = 0;
 u64 VAR_6;

 FUNC_1(&VAR_1->fifo_lock, VAR_4);
 VAR_6 = VAR_3->fifobar[VAR_3->head & VAR_3->imask];
 if (VAR_6 & VAR_0)
  VAR_5 = 1;
 FUNC_2(&VAR_1->fifo_lock, VAR_4);

 return VAR_5;
}
