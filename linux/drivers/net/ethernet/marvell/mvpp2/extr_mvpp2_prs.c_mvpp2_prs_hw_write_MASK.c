
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvpp2_prs_entry {int index; int* tcam; int* sram; } ;
struct mvpp2 {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct mvpp2*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct mvpp2 *VAR_8, struct mvpp2_prs_entry *VAR_9)
{
 int VAR_10;

 if (VAR_9->index > VAR_6 - 1)
  return -VAR_0;


 VAR_9->tcam[VAR_5] &= ~VAR_4;


 FUNC_2(VAR_8, VAR_3, VAR_9->index);
 for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++)
  FUNC_2(VAR_8, FUNC_1(VAR_10), VAR_9->tcam[VAR_10]);


 FUNC_2(VAR_8, VAR_1, VAR_9->index);
 for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++)
  FUNC_2(VAR_8, FUNC_0(VAR_10), VAR_9->sram[VAR_10]);

 return 0;
}
