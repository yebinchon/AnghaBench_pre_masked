
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hnae3_knic_private_info {int num_tqps; } ;
struct hclge_dev {int num_msi_used; int hw; } ;


 int FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 scalar_t__* VAR_5 ;
 scalar_t__* VAR_6 ;
 void* FUNC_1 (int *,scalar_t__) ;
 scalar_t__* VAR_7 ;
 scalar_t__* VAR_8 ;

__attribute__((used)) static int FUNC_2(struct hclge_dev *VAR_9, void *VAR_10,
         struct hnae3_knic_private_info *VAR_11)
{



 int VAR_12, VAR_13, VAR_14, VAR_15;
 int VAR_16;
 u32 *VAR_17 = VAR_10;


 VAR_14 = FUNC_0(VAR_5);
 VAR_15 = VAR_2 - (VAR_14 & VAR_3);
 for (VAR_12 = 0; VAR_12 < VAR_14; VAR_12++)
  *VAR_17++ = FUNC_1(&VAR_9->hw, VAR_5[VAR_12]);
 for (VAR_12 = 0; VAR_12 < VAR_15; VAR_12++)
  *VAR_17++ = VAR_4;
 VAR_16 = VAR_14 + VAR_15;

 VAR_14 = FUNC_0(VAR_6);
 VAR_15 = VAR_2 - (VAR_14 & VAR_3);
 for (VAR_12 = 0; VAR_12 < VAR_14; VAR_12++)
  *VAR_17++ = FUNC_1(&VAR_9->hw, VAR_6[VAR_12]);
 for (VAR_12 = 0; VAR_12 < VAR_15; VAR_12++)
  *VAR_17++ = VAR_4;
 VAR_16 += VAR_14 + VAR_15;

 VAR_14 = FUNC_0(VAR_7);
 VAR_15 = VAR_2 - (VAR_14 & VAR_3);
 for (VAR_13 = 0; VAR_13 < VAR_11->num_tqps; VAR_13++) {
  for (VAR_12 = 0; VAR_12 < VAR_14; VAR_12++)
   *VAR_17++ = FUNC_1(&VAR_9->hw,
      VAR_7[VAR_12] +
      0x200 * VAR_13);
  for (VAR_12 = 0; VAR_12 < VAR_15; VAR_12++)
   *VAR_17++ = VAR_4;
 }
 VAR_16 += (VAR_14 + VAR_15) * VAR_11->num_tqps;

 VAR_14 = FUNC_0(VAR_8);
 VAR_15 = VAR_2 - (VAR_14 & VAR_3);
 for (VAR_13 = 0; VAR_13 < VAR_9->num_msi_used - 1; VAR_13++) {
  for (VAR_12 = 0; VAR_12 < VAR_14; VAR_12++)
   *VAR_17++ = FUNC_1(&VAR_9->hw,
      VAR_8[VAR_12] +
      0x4 * VAR_13);
  for (VAR_12 = 0; VAR_12 < VAR_15; VAR_12++)
   *VAR_17++ = VAR_4;
 }
 VAR_16 += (VAR_14 + VAR_15) * (VAR_9->num_msi_used - 1);

 return VAR_16;
}
