
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_gpct {int counter_index; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ) ;
 unsigned int VAR_3 ;
 unsigned int FUNC_1 (struct ni_gpct*,int ) ;

__attribute__((used)) static inline unsigned int FUNC_2(struct ni_gpct *VAR_4)
{
 unsigned int VAR_5 = FUNC_1(
  VAR_4, FUNC_0(VAR_4->counter_index));
 unsigned int VAR_6 = 0;

 if (!(VAR_5 & VAR_1))
  VAR_6 |= VAR_3;
 if (VAR_5 & VAR_2)
  VAR_6 |= VAR_0;

 return VAR_6;
}
