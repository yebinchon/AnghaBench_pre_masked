
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ir_raw_event {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,unsigned int) ;

__attribute__((used)) static inline int FUNC_1(struct ir_raw_event **VAR_1,
      unsigned int *VAR_2,
      unsigned int VAR_3,
      unsigned int VAR_4)
{
 if (!*VAR_2)
  return -VAR_0;
 FUNC_0((*VAR_1)++, 1, VAR_3);
 if (!--*VAR_2)
  return -VAR_0;
 FUNC_0((*VAR_1)++, 0, VAR_4);
 --*VAR_2;
 return 0;
}
