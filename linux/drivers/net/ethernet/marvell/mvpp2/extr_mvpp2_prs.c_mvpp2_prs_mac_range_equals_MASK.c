
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u8 ;
struct mvpp2_prs_entry {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mvpp2_prs_entry*,int,unsigned char*,unsigned char*) ;

__attribute__((used)) static bool FUNC_1(struct mvpp2_prs_entry *VAR_1,
           const u8 *VAR_2, unsigned char *VAR_3)
{
 unsigned char VAR_4, VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  FUNC_0(VAR_1, VAR_6, &VAR_4, &VAR_5);
  if (VAR_5 != VAR_3[VAR_6])
   return 0;

  if ((VAR_5 & VAR_4) != (VAR_2[VAR_6] & VAR_3[VAR_6]))
   return 0;
 }

 return 1;
}
