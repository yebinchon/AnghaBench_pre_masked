
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int decimal; int integer; } ;
struct isif_linearize {int corr_shft; int * table; TYPE_1__ scale_fact; int en; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int,int) ;

__attribute__((used)) static void FUNC_2(struct isif_linearize *VAR_5)
{
 u32 VAR_6, VAR_7;

 if (!VAR_5->en) {
  FUNC_0(0, VAR_3);
  return;
 }


 VAR_6 = (VAR_5->corr_shft << VAR_1) | 1;
 FUNC_0(VAR_6, VAR_3);


 VAR_6 = ((!!VAR_5->scale_fact.integer) <<
        VAR_2) |
        VAR_5->scale_fact.decimal;
 FUNC_0(VAR_6, VAR_4);

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  if (VAR_7 % 2)
   FUNC_1(VAR_5->table[VAR_7], ((VAR_7 >> 1) << 2), 1);
  else
   FUNC_1(VAR_5->table[VAR_7], ((VAR_7 >> 1) << 2), 0);
 }
}
