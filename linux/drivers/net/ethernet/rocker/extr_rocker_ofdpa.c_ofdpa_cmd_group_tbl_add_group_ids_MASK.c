
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rocker_tlv {int dummy; } ;
struct rocker_desc_info {int dummy; } ;
struct ofdpa_group_tbl_entry {int group_count; int * group_ids; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rocker_desc_info*,struct rocker_tlv*) ;
 struct rocker_tlv* FUNC_1 (struct rocker_desc_info*,int ) ;
 scalar_t__ FUNC_2 (struct rocker_desc_info*,int ,int) ;
 scalar_t__ FUNC_3 (struct rocker_desc_info*,int,int ) ;

__attribute__((used)) static int
FUNC_4(struct rocker_desc_info *VAR_3,
      const struct ofdpa_group_tbl_entry *VAR_4)
{
 int VAR_5;
 struct rocker_tlv *VAR_6;

 if (FUNC_2(VAR_3, VAR_1,
          VAR_4->group_count))
  return -VAR_0;

 VAR_6 = FUNC_1(VAR_3,
       VAR_2);
 if (!VAR_6)
  return -VAR_0;

 for (VAR_5 = 0; VAR_5 < VAR_4->group_count; VAR_5++)

  if (FUNC_3(VAR_3, VAR_5 + 1, VAR_4->group_ids[VAR_5]))
   return -VAR_0;

 FUNC_0(VAR_3, VAR_6);

 return 0;
}
