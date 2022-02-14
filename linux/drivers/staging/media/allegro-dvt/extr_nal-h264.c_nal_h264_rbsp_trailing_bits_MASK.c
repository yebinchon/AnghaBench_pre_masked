
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rbsp {scalar_t__ pos; } ;


 int FUNC_0 (struct rbsp*,unsigned int*) ;
 int FUNC_1 (struct rbsp*,scalar_t__,unsigned int*) ;
 scalar_t__ FUNC_2 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_3(struct rbsp *VAR_0)
{
 unsigned int VAR_1 = 1;
 unsigned int VAR_2 = 0;

 FUNC_0(VAR_0, &VAR_1);
 FUNC_1(VAR_0, FUNC_2(VAR_0->pos, 8) - VAR_0->pos,
    &VAR_2);
}
