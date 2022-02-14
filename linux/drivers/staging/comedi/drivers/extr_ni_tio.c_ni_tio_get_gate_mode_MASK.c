
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_gpct {int counter_index; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (int ) ;
 unsigned int VAR_6 ;
 unsigned int FUNC_1 (struct ni_gpct*,int ) ;

__attribute__((used)) static inline unsigned int FUNC_2(struct ni_gpct *VAR_7)
{
 unsigned int VAR_8 = FUNC_1(
  VAR_7, FUNC_0(VAR_7->counter_index));
 unsigned int VAR_9 = 0;

 if ((VAR_8 & VAR_4) == VAR_3)
  VAR_9 |= VAR_6;
 if (VAR_8 & VAR_2)
  VAR_9 |= VAR_1;
 if ((VAR_8 & VAR_4) != VAR_5)
  VAR_9 |= VAR_0;

 return VAR_9;
}
