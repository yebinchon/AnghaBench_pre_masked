
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct max2175 {int decim_ratio; } ;
struct TYPE_3__ {int val; int idx; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_1 (struct max2175*,int ,int ,int ) ;
 int FUNC_2 (struct max2175*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct max2175 *VAR_5)
{
 unsigned int VAR_6;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_4); VAR_6++)
  FUNC_2(VAR_5, VAR_4[VAR_6].idx, VAR_4[VAR_6].val);

 VAR_5->decim_ratio = 36;


 FUNC_1(VAR_5, VAR_0, 0, VAR_2);
 FUNC_1(VAR_5, VAR_1, 0,
      VAR_3);
}
