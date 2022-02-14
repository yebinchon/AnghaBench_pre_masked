
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ms_info {int segment_cnt; TYPE_1__* segment; } ;
struct rtsx_chip {struct ms_info ms_card; } ;
struct TYPE_2__ {struct TYPE_2__* free_table; struct TYPE_2__* l2p_table; } ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(struct rtsx_chip *VAR_0)
{
 struct ms_info *VAR_1 = &VAR_0->ms_card;
 int VAR_2 = 0;

 if (VAR_1->segment) {
  for (VAR_2 = 0; VAR_2 < VAR_1->segment_cnt; VAR_2++) {
   FUNC_0(VAR_1->segment[VAR_2].l2p_table);
   VAR_1->segment[VAR_2].l2p_table = ((void*)0);
   FUNC_0(VAR_1->segment[VAR_2].free_table);
   VAR_1->segment[VAR_2].free_table = ((void*)0);
  }
  FUNC_0(VAR_1->segment);
  VAR_1->segment = ((void*)0);
 }
}
