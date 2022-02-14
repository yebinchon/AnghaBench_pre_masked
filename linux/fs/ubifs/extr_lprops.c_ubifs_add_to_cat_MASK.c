
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_lprops {int flags; int list; } ;
struct ubifs_info {int freeable_cnt; scalar_t__ in_a_category_cnt; scalar_t__ main_lebs; int frdi_idx_list; int freeable_list; int empty_list; int uncat_list; } ;


 int VAR_0 ;







 int FUNC_0 (struct ubifs_info*,struct ubifs_lprops*,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct ubifs_info*,int) ;

void FUNC_3(struct ubifs_info *VAR_1, struct ubifs_lprops *VAR_2,
        int VAR_3)
{
 switch (VAR_3) {
 case 134:
 case 133:
 case 130:
  if (FUNC_0(VAR_1, VAR_2, VAR_3))
   break;

  VAR_3 = 128;

 case 128:
  FUNC_1(&VAR_2->list, &VAR_1->uncat_list);
  break;
 case 132:
  FUNC_1(&VAR_2->list, &VAR_1->empty_list);
  break;
 case 129:
  FUNC_1(&VAR_2->list, &VAR_1->freeable_list);
  VAR_1->freeable_cnt += 1;
  break;
 case 131:
  FUNC_1(&VAR_2->list, &VAR_1->frdi_idx_list);
  break;
 default:
  FUNC_2(VAR_1, 0);
 }

 VAR_2->flags &= ~VAR_0;
 VAR_2->flags |= VAR_3;
 VAR_1->in_a_category_cnt += 1;
 FUNC_2(VAR_1, VAR_1->in_a_category_cnt <= VAR_1->main_lebs);
}
