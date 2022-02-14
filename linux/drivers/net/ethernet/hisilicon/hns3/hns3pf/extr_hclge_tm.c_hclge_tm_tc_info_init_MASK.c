
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_6__ {size_t num_tc; size_t* prio_tc; scalar_t__ pfc_en; TYPE_2__* pg_info; TYPE_1__* tc_info; } ;
struct hclge_dev {int flag; TYPE_3__ tm_info; } ;
struct TYPE_5__ {int bw_limit; } ;
struct TYPE_4__ {size_t tc_id; int bw_limit; scalar_t__ pgid; int tc_sch_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;

__attribute__((used)) static void FUNC_0(struct hclge_dev *VAR_3)
{
 u8 VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3->tm_info.num_tc; VAR_4++) {
  VAR_3->tm_info.tc_info[VAR_4].tc_id = VAR_4;
  VAR_3->tm_info.tc_info[VAR_4].tc_sch_mode = VAR_1;
  VAR_3->tm_info.tc_info[VAR_4].pgid = 0;
  VAR_3->tm_info.tc_info[VAR_4].bw_limit =
   VAR_3->tm_info.pg_info[0].bw_limit;
 }

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  VAR_3->tm_info.prio_tc[VAR_4] =
   (VAR_4 >= VAR_3->tm_info.num_tc) ? 0 : VAR_4;




 if (VAR_3->tm_info.num_tc > 1 || VAR_3->tm_info.pfc_en)
  VAR_3->flag |= VAR_0;
 else
  VAR_3->flag &= ~VAR_0;
}
