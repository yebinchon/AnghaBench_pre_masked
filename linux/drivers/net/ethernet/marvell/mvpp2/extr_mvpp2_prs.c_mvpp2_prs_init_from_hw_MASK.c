
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvpp2_prs_entry {int index; int* tcam; void** sram; } ;
struct mvpp2 {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct mvpp2_prs_entry*,int ,int) ;
 void* FUNC_3 (struct mvpp2*,int ) ;
 int FUNC_4 (struct mvpp2*,int ,int) ;

int FUNC_5(struct mvpp2 *VAR_9, struct mvpp2_prs_entry *VAR_10,
      int VAR_11)
{
 int VAR_12;

 if (VAR_11 > VAR_7 - 1)
  return -VAR_0;

 FUNC_2(VAR_10, 0, sizeof(*VAR_10));
 VAR_10->index = VAR_11;


 FUNC_4(VAR_9, VAR_4, VAR_10->index);

 VAR_10->tcam[VAR_6] = FUNC_3(VAR_9,
         FUNC_1(VAR_6));
 if (VAR_10->tcam[VAR_6] & VAR_5)
  return VAR_3;

 for (VAR_12 = 0; VAR_12 < VAR_8; VAR_12++)
  VAR_10->tcam[VAR_12] = FUNC_3(VAR_9, FUNC_1(VAR_12));


 FUNC_4(VAR_9, VAR_1, VAR_10->index);
 for (VAR_12 = 0; VAR_12 < VAR_2; VAR_12++)
  VAR_10->sram[VAR_12] = FUNC_3(VAR_9, FUNC_0(VAR_12));

 return 0;
}
