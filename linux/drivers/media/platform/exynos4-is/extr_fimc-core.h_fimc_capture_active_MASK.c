
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fimc_dev {int state; int slock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static inline bool FUNC_2(struct fimc_dev *VAR_2)
{
 unsigned long VAR_3;
 bool VAR_4;

 FUNC_0(&VAR_2->slock, VAR_3);
 VAR_4 = !!(VAR_2->state & (1 << VAR_1) ||
   VAR_2->state & (1 << VAR_0));
 FUNC_1(&VAR_2->slock, VAR_3);
 return VAR_4;
}
