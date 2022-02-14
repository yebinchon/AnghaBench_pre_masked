
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hinic_eq {int type; int q_len; int hwif; int q_id; } ;
typedef enum hinic_eq_type { ____Placeholder_hinic_eq_type } hinic_eq_type ;


 int VAR_0 ;
 int FUNC_0 (struct hinic_eq*) ;
 int FUNC_1 (struct hinic_eq*) ;
 int VAR_1 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int ) ;
 int VAR_2 ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ,int,int) ;

__attribute__((used)) static void FUNC_10(struct hinic_eq *VAR_5)
{
 enum hinic_eq_type VAR_6 = VAR_5->type;
 u32 VAR_7, VAR_8;
 u32 VAR_9, VAR_10, VAR_11;

 if (VAR_6 == VAR_1) {

  VAR_9 = FUNC_6(VAR_5->q_id);

  VAR_7 = FUNC_1(VAR_5);
  VAR_8 = FUNC_0(VAR_5);

  VAR_10 = FUNC_8(VAR_5->hwif, VAR_9);

  VAR_10 = FUNC_2(VAR_10, VAR_3) &
        FUNC_2(VAR_10, VAR_0) &
        FUNC_2(VAR_10, VAR_4);

  VAR_11 = FUNC_3(VAR_5->q_len, VAR_3) |
   FUNC_3(VAR_8, VAR_0) |
   FUNC_3(VAR_7, VAR_4);

  VAR_10 |= VAR_11;

  FUNC_9(VAR_5->hwif, VAR_9, VAR_10);
 } else if (VAR_6 == VAR_2) {

  VAR_9 = FUNC_7(VAR_5->q_id);

  VAR_7 = FUNC_1(VAR_5);

  VAR_10 = FUNC_8(VAR_5->hwif, VAR_9);

  VAR_10 = FUNC_4(VAR_10, VAR_3) &
        FUNC_4(VAR_10, VAR_4);

  VAR_11 = FUNC_5(VAR_5->q_len, VAR_3) |
   FUNC_5(VAR_7, VAR_4);

  VAR_10 |= VAR_11;

  FUNC_9(VAR_5->hwif, VAR_9, VAR_10);
 }
}
