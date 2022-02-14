
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct fimc_is {int slock; } ;
typedef int irqreturn_t ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct fimc_is*) ;
 int FUNC_1 (struct fimc_is*) ;
 unsigned long FUNC_2 (struct fimc_is*,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_4, void *VAR_5)
{
 struct fimc_is *VAR_6 = VAR_5;
 unsigned long VAR_7;
 u32 VAR_8;

 FUNC_3(&VAR_6->slock, VAR_7);
 VAR_8 = FUNC_2(VAR_6, VAR_3);

 if (VAR_8 & (1UL << VAR_1))
  FUNC_0(VAR_6);

 if (VAR_8 & (1UL << VAR_0))
  FUNC_1(VAR_6);

 FUNC_4(&VAR_6->slock, VAR_7);
 return VAR_2;
}
