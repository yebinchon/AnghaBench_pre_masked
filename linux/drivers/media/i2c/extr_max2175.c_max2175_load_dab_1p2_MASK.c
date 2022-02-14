
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
 TYPE_1__* VAR_2 ;
 int FUNC_1 (struct max2175*,int ,int,int ) ;
 int FUNC_2 (struct max2175*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct max2175 *VAR_3)
{
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_2); VAR_4++)
  FUNC_2(VAR_3, VAR_2[VAR_4].idx, VAR_2[VAR_4].val);

 VAR_3->decim_ratio = 1;


 FUNC_1(VAR_3, VAR_0, 2, VAR_1);
}
