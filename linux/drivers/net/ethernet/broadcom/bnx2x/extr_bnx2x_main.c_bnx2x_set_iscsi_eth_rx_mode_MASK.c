
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct bnx2x {int sp_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,unsigned long*) ;
 int FUNC_1 (struct bnx2x*,int ) ;
 int FUNC_2 (struct bnx2x*,int ,int ,unsigned long,int ,unsigned long) ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (int,int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(struct bnx2x *VAR_9, bool VAR_10)
{
 unsigned long VAR_11 = 0, VAR_12 = 0;
 u8 VAR_13 = FUNC_1(VAR_9, VAR_7);
 int VAR_14 = VAR_5;

 if (VAR_10) {






  FUNC_0(VAR_3, &VAR_11);
  FUNC_0(VAR_0, &VAR_11);
  FUNC_0(VAR_2, &VAR_11);
  FUNC_0(VAR_1, &VAR_11);


  FUNC_3(VAR_5, &VAR_9->sp_state);

  VAR_14 = VAR_4;
 } else

  FUNC_3(VAR_4, &VAR_9->sp_state);

 if (FUNC_5(VAR_6, &VAR_9->sp_state))
  FUNC_4(VAR_14, &VAR_9->sp_state);
 else {
  FUNC_0(VAR_8, &VAR_12);
  FUNC_2(VAR_9, VAR_13, 0, VAR_11, 0,
        VAR_12);
 }
}
