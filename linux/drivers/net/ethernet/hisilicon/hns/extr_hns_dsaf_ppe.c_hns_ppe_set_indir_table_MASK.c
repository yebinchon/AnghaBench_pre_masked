
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hns_ppe_cb {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (struct hns_ppe_cb*,scalar_t__) ;
 int FUNC_1 (int,int ,int ,int const) ;
 int FUNC_2 (struct hns_ppe_cb*,scalar_t__,int) ;

void FUNC_3(struct hns_ppe_cb *VAR_10,
        const u32 VAR_11[VAR_0])
{
 int VAR_12;
 int VAR_13;

 for (VAR_12 = 0; VAR_12 < (VAR_0 / 4); VAR_12++) {
  VAR_13 = FUNC_0(VAR_10,
       VAR_9 + VAR_12 * 0x4);

  FUNC_1(VAR_13, VAR_1,
          VAR_2,
          VAR_11[VAR_12 * 4 + 0] & 0x1F);
  FUNC_1(VAR_13, VAR_3,
          VAR_4,
    VAR_11[VAR_12 * 4 + 1] & 0x1F);
  FUNC_1(VAR_13, VAR_5,
          VAR_6,
    VAR_11[VAR_12 * 4 + 2] & 0x1F);
  FUNC_1(VAR_13, VAR_7,
          VAR_8,
    VAR_11[VAR_12 * 4 + 3] & 0x1F);
  FUNC_2(
   VAR_10, VAR_9 + VAR_12 * 0x4, VAR_13);
 }
}
