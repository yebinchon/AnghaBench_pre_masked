
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct rcar_canfd_global {int base; scalar_t__ fdmode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (scalar_t__,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int) ;
 scalar_t__ VAR_6 ;
 int FUNC_9 (int ,int ,int) ;
 scalar_t__ FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ,int) ;
 int FUNC_12 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_13(struct rcar_canfd_global *VAR_7,
        u32 VAR_8)
{
 u32 VAR_9;
 int VAR_10, VAR_11, VAR_12, VAR_13 = VAR_0;
 u32 VAR_14 = VAR_8 + VAR_6;

 if (VAR_8 == 0) {
  VAR_11 = 0;
 } else {

  VAR_9 = FUNC_10(VAR_7->base, VAR_3);
  VAR_11 = FUNC_0(0, VAR_9);
 }


 VAR_12 = FUNC_8(VAR_11);
 FUNC_11(VAR_7->base, VAR_4,
      (FUNC_2(VAR_12) |
       VAR_5));


 FUNC_11(VAR_7->base, VAR_3,
      FUNC_1(VAR_8, VAR_13));
 if (VAR_7->fdmode)
  VAR_10 = VAR_2;
 else
  VAR_10 = VAR_1;


 FUNC_12(VAR_7->base, FUNC_3(VAR_10, VAR_11), 0);

 FUNC_12(VAR_7->base, FUNC_4(VAR_10, VAR_11), 0);

 FUNC_12(VAR_7->base, FUNC_5(VAR_10, VAR_11), 0);

 FUNC_12(VAR_7->base, FUNC_6(VAR_10, VAR_11),
    FUNC_7(VAR_14));


 FUNC_9(VAR_7->base,
        VAR_4, VAR_5);
}
