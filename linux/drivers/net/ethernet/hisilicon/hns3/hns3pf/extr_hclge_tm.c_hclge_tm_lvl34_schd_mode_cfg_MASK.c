
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct hclge_vport {scalar_t__ qs_offset; } ;
struct TYPE_2__ {scalar_t__ num_tc; } ;
struct hclge_dev {scalar_t__ tx_sch_mode; scalar_t__ num_alloc_vport; TYPE_1__ tm_info; struct hclge_vport* vport; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hclge_dev*,scalar_t__) ;
 int FUNC_1 (struct hclge_dev*,scalar_t__,int ) ;
 int FUNC_2 (struct hclge_vport*) ;

__attribute__((used)) static int FUNC_3(struct hclge_dev *VAR_2)
{
 struct hclge_vport *VAR_3 = VAR_2->vport;
 int VAR_4;
 u8 VAR_5, VAR_6;

 if (VAR_2->tx_sch_mode == VAR_0) {
  for (VAR_5 = 0; VAR_5 < VAR_2->tm_info.num_tc; VAR_5++) {
   VAR_4 = FUNC_0(VAR_2, VAR_5);
   if (VAR_4)
    return VAR_4;

   for (VAR_6 = 0; VAR_6 < VAR_2->num_alloc_vport; VAR_6++) {
    VAR_4 = FUNC_1(
     VAR_2, VAR_3[VAR_6].qs_offset + VAR_5,
     VAR_1);
    if (VAR_4)
     return VAR_4;
   }
  }
 } else {
  for (VAR_5 = 0; VAR_5 < VAR_2->num_alloc_vport; VAR_5++) {
   VAR_4 = FUNC_2(VAR_3);
   if (VAR_4)
    return VAR_4;

   VAR_3++;
  }
 }

 return 0;
}
