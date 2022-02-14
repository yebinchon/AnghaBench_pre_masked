
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvpp2_prs_entry {int* tcam; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 size_t FUNC_1 (unsigned int) ;

void FUNC_2(struct mvpp2_prs_entry *VAR_1,
      unsigned int VAR_2, unsigned char *VAR_3,
      unsigned char *VAR_4)
{
 int VAR_5 = FUNC_0(VAR_2) * VAR_0;

 *VAR_3 = (VAR_1->tcam[FUNC_1(VAR_2)] >> VAR_5) & 0xff;
 *VAR_4 = (VAR_1->tcam[FUNC_1(VAR_2)] >> (VAR_5 + 16)) & 0xff;
}
