
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_gpct {int counter_index; } ;


 int FUNC_0 (unsigned int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_1 (int ) ;
 int VAR_7 ;
 int FUNC_2 (struct ni_gpct*,int ,unsigned int,unsigned int) ;

__attribute__((used)) static inline void FUNC_3(struct ni_gpct *VAR_8,
     unsigned int VAR_9)
{
 unsigned int VAR_10 = 0;

 if (FUNC_0(VAR_9) & VAR_7) {




  VAR_10 = VAR_3;
 } else {
  if (VAR_9 & VAR_1)
   VAR_10 |= VAR_2;
  if (VAR_9 & VAR_0)
   VAR_10 |= VAR_6;
  else
   VAR_10 |= VAR_5;
 }
 FUNC_2(VAR_8, FUNC_1(VAR_8->counter_index),
   VAR_2 | VAR_4,
   VAR_10);
}
