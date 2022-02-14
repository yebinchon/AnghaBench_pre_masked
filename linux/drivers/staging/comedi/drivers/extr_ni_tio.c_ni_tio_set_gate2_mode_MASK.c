
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
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (struct ni_gpct*,int ,unsigned int,unsigned int) ;

__attribute__((used)) static inline void FUNC_3(struct ni_gpct *VAR_5,
      unsigned int VAR_6)
{






 unsigned int VAR_7 = VAR_1;

 if (FUNC_0(VAR_6) & VAR_4)




  VAR_7 = VAR_3;
 if (VAR_6 & VAR_0)
  VAR_7 |= VAR_2;

 FUNC_2(VAR_5, FUNC_1(VAR_5->counter_index),
   VAR_2 | VAR_1, VAR_7);
}
