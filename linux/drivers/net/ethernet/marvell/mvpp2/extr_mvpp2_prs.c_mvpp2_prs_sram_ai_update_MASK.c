
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvpp2_prs_entry {int dummy; } ;


 unsigned int FUNC_0 (unsigned int) ;
 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct mvpp2_prs_entry*,scalar_t__,int) ;
 int FUNC_2 (struct mvpp2_prs_entry*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_3(struct mvpp2_prs_entry *VAR_3,
         unsigned int VAR_4, unsigned int VAR_5)
{
 unsigned int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  if (!(VAR_5 & FUNC_0(VAR_6)))
   continue;

  if (VAR_4 & FUNC_0(VAR_6))
   FUNC_2(VAR_3, VAR_2 + VAR_6,
      1);
  else
   FUNC_1(VAR_3,
        VAR_2 + VAR_6,
        1);

  FUNC_2(VAR_3, VAR_1 + VAR_6, 1);
 }
}
