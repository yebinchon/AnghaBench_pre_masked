
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef void* u64 ;
struct ieee_pfc {size_t pfc_en; void** indications; void** requests; int pfc_cap; } ;
struct hnae3_handle {int dummy; } ;
struct hclge_vport {struct hclge_dev* back; } ;
struct TYPE_2__ {size_t* prio_tc; size_t hw_pfc_map; size_t num_tc; } ;
struct hclge_dev {TYPE_1__ tm_info; int pfc_max; } ;


 size_t FUNC_0 (size_t) ;
 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 struct hclge_vport* FUNC_1 (struct hnae3_handle*) ;
 int FUNC_2 (struct hclge_dev*,void**) ;
 int FUNC_3 (struct hclge_dev*,void**) ;
 int FUNC_4 (struct ieee_pfc*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct hnae3_handle *VAR_3, struct ieee_pfc *VAR_4)
{
 u64 VAR_5[VAR_1], VAR_6[VAR_1];
 struct hclge_vport *VAR_7 = FUNC_1(VAR_3);
 struct hclge_dev *VAR_8 = VAR_7->back;
 u8 VAR_9, VAR_10, VAR_11, *VAR_12;
 int VAR_13;

 FUNC_4(VAR_4, 0, sizeof(*VAR_4));
 VAR_4->pfc_cap = VAR_8->pfc_max;
 VAR_12 = VAR_8->tm_info.prio_tc;
 VAR_11 = VAR_8->tm_info.hw_pfc_map;


 for (VAR_9 = 0; VAR_9 < VAR_8->tm_info.num_tc; VAR_9++) {
  for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++) {
   if ((VAR_12[VAR_10] == VAR_9) && (VAR_11 & FUNC_0(VAR_9)))
    VAR_4->pfc_en |= FUNC_0(VAR_10);
  }
 }

 VAR_13 = FUNC_3(VAR_8, VAR_5);
 if (VAR_13)
  return VAR_13;

 VAR_13 = FUNC_2(VAR_8, VAR_6);
 if (VAR_13)
  return VAR_13;

 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  VAR_4->requests[VAR_9] = VAR_5[VAR_9];
  VAR_4->indications[VAR_9] = VAR_6[VAR_9];
 }
 return 0;
}
