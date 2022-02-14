
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct stfsm {scalar_t__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct stfsm *VAR_3, uint32_t VAR_4)
{
 int VAR_5, VAR_6 = 10;


 while (--VAR_6) {
  VAR_5 = FUNC_0(VAR_3->base + VAR_2);
  if (VAR_5 & 0x1)
   break;
  FUNC_1(1);
 }

 if (!VAR_6)
  return -VAR_0;

 FUNC_2(VAR_4, VAR_3->base + VAR_1);

 return 0;
}
