
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hinic_eq {int hwif; int wrapped; int cons_idx; } ;


 int VAR_0 ;
 int FUNC_0 (struct hinic_eq*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int,int) ;

__attribute__((used)) static void FUNC_6(struct hinic_eq *VAR_5)
{
 u32 VAR_6, VAR_7 = FUNC_0(VAR_5);


 VAR_6 = FUNC_4(VAR_5->hwif, VAR_7);

 VAR_6 = FUNC_1(VAR_6, VAR_1) &
       FUNC_1(VAR_6, VAR_3) &
       FUNC_1(VAR_6, VAR_2) &
       FUNC_1(VAR_6, VAR_4);

 VAR_6 |= FUNC_2(VAR_5->cons_idx, VAR_1) |
        FUNC_2(VAR_5->wrapped, VAR_3) |
        FUNC_2(VAR_0, VAR_2);

 VAR_6 |= FUNC_2(FUNC_3(VAR_6), VAR_4);

 FUNC_5(VAR_5->hwif, VAR_7, VAR_6);
}
