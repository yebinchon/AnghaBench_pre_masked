
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef size_t u32 ;
typedef size_t u16 ;
struct TYPE_2__ {int mac_stats; } ;
struct hclge_dev {int hw; TYPE_1__ hw_stats; } ;
struct hclge_desc {int * data; } ;
typedef int __le64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int *,struct hclge_desc*,size_t) ;
 int FUNC_1 (struct hclge_desc*,int ,int) ;
 struct hclge_desc* FUNC_2 (size_t,int,int ) ;
 int FUNC_3 (struct hclge_desc*) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct hclge_dev *VAR_5, u32 VAR_6)
{
 u64 *VAR_7 = (u64 *)(&VAR_5->hw_stats.mac_stats);
 struct hclge_desc *VAR_8;
 __le64 *VAR_9;
 u16 VAR_10, VAR_11, VAR_12;
 int VAR_13;




 VAR_8 = FUNC_2(VAR_6, sizeof(struct hclge_desc), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 FUNC_1(&VAR_8[0], VAR_2, 1);
 VAR_13 = FUNC_0(&VAR_5->hw, VAR_8, VAR_6);
 if (VAR_13) {
  FUNC_3(VAR_8);
  return VAR_13;
 }

 for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++) {

  if (VAR_10 == 0) {
   VAR_9 = (__le64 *)(&VAR_8[VAR_10].data[0]);
   VAR_12 = VAR_3;
  } else {
   VAR_9 = (__le64 *)(&VAR_8[VAR_10]);
   VAR_12 = VAR_4;
  }

  for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++) {
   *VAR_7 += FUNC_4(*VAR_9);
   VAR_7++;
   VAR_9++;
  }
 }

 FUNC_3(VAR_8);

 return 0;
}
