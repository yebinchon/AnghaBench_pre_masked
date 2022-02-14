
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct hclge_vport {int dwrr; scalar_t__ qs_offset; } ;
struct hclge_pg_info {int * tc_dwrr; } ;
struct TYPE_4__ {size_t num_tc; TYPE_1__* tc_info; struct hclge_pg_info* pg_info; } ;
struct hclge_dev {size_t num_alloc_vport; TYPE_2__ tm_info; struct hclge_vport* vport; } ;
struct TYPE_3__ {size_t pgid; } ;


 int FUNC_0 (struct hclge_dev*,size_t,int ) ;
 int FUNC_1 (struct hclge_dev*,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_2(struct hclge_dev *VAR_0)
{
 struct hclge_vport *VAR_1 = VAR_0->vport;
 struct hclge_pg_info *VAR_2;
 u8 VAR_3;
 int VAR_4;
 u32 VAR_5, VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_0->tm_info.num_tc; VAR_5++) {
  VAR_2 =
   &VAR_0->tm_info.pg_info[VAR_0->tm_info.tc_info[VAR_5].pgid];
  VAR_3 = VAR_2->tc_dwrr[VAR_5];

  VAR_4 = FUNC_0(VAR_0, VAR_5, VAR_3);
  if (VAR_4)
   return VAR_4;

  for (VAR_6 = 0; VAR_6 < VAR_0->num_alloc_vport; VAR_6++) {
   VAR_4 = FUNC_1(
    VAR_0, VAR_1[VAR_6].qs_offset + VAR_5,
    VAR_1[VAR_6].dwrr);
   if (VAR_4)
    return VAR_4;
  }
 }

 return 0;
}
