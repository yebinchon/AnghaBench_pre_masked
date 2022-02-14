
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct orc_host {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct orc_host*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct orc_host * VAR_2)
{
 int VAR_3;
 u8 *VAR_4, *VAR_5, VAR_6 = 0;


 VAR_4 = (u8 *) VAR_0;
 for (VAR_3 = 0; VAR_3 < 63; VAR_3++)
  VAR_6 += *VAR_4++;
 *VAR_4 = VAR_6;

 VAR_4 = (u8 *) VAR_0;
 VAR_5 = (u8 *) VAR_1;
 for (VAR_3 = 0; VAR_3 < 64; VAR_3++, VAR_4++, VAR_5++) {
  if (*VAR_4 != *VAR_5)
   FUNC_0(VAR_2, (u8) VAR_3, *VAR_4);
 }
}
