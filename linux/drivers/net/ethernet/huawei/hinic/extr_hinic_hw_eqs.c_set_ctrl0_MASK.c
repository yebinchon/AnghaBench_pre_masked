
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct msix_entry {int entry; } ;
struct hinic_eq {int type; int hwif; int q_id; struct msix_entry msix_entry; } ;
typedef enum hinic_eq_type { ____Placeholder_hinic_eq_type } hinic_eq_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_5 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int,int) ;

__attribute__((used)) static void FUNC_9(struct hinic_eq *VAR_13)
{
 struct msix_entry *VAR_14 = &VAR_13->msix_entry;
 enum hinic_eq_type VAR_15 = VAR_13->type;
 u32 VAR_16, VAR_17, VAR_18;

 if (VAR_15 == VAR_4) {

  VAR_16 = FUNC_4(VAR_13->q_id);

  VAR_17 = FUNC_7(VAR_13->hwif, VAR_16);

  VAR_17 = FUNC_0(VAR_17, VAR_8) &
        FUNC_0(VAR_17, VAR_0) &
        FUNC_0(VAR_17, VAR_11) &
        FUNC_0(VAR_17, VAR_9);

  VAR_18 = FUNC_1(VAR_14->entry, VAR_8) |
   FUNC_1(VAR_1, VAR_0) |
   FUNC_1(FUNC_6(VAR_13->hwif),
          VAR_11) |
   FUNC_1(VAR_3, VAR_9);

  VAR_17 |= VAR_18;

  FUNC_8(VAR_13->hwif, VAR_16, VAR_17);
 } else if (VAR_15 == VAR_5) {

  VAR_16 = FUNC_5(VAR_13->q_id);

  VAR_17 = FUNC_7(VAR_13->hwif, VAR_16);

  VAR_17 = FUNC_2(VAR_17, VAR_6) &
        FUNC_2(VAR_17, VAR_0) &
        FUNC_2(VAR_17, VAR_10) &
        FUNC_2(VAR_17, VAR_11) &
        FUNC_2(VAR_17, VAR_7);

  VAR_18 = FUNC_3(VAR_14->entry, VAR_6) |
   FUNC_3(VAR_2, VAR_0) |
   FUNC_3(VAR_12, VAR_10) |
   FUNC_3(FUNC_6(VAR_13->hwif),
          VAR_11) |
   FUNC_3(VAR_3, VAR_7);

  VAR_17 |= VAR_18;

  FUNC_8(VAR_13->hwif, VAR_16, VAR_17);
 }
}
