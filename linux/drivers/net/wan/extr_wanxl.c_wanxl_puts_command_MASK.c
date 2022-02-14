
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct card {scalar_t__ plx; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (unsigned long,int) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct card *VAR_3, u32 VAR_4)
{
 unsigned long VAR_5 = VAR_2 + 5 * VAR_0;

 FUNC_3(VAR_4, VAR_3->plx + VAR_1);
 do {
  if (FUNC_0(VAR_3->plx + VAR_1) == 0)
   return 0;

  FUNC_1();
 }while (FUNC_2(VAR_5, VAR_2));

 return -1;
}
