
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hns_ppe_cb {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct hns_ppe_cb*,scalar_t__,int const) ;

void FUNC_1(struct hns_ppe_cb *VAR_2,
    const u32 VAR_3[VAR_0])
{
 u32 VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  FUNC_0(VAR_2, VAR_1 + VAR_4 * 0x4,
          VAR_3[VAR_4]);
}
