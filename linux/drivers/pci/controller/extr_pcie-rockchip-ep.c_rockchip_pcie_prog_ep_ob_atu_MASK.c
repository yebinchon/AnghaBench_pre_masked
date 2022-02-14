
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef unsigned long long u64 ;
typedef int u32 ;
struct rockchip_pcie {TYPE_1__* mem_res; } ;
struct TYPE_2__ {scalar_t__ start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 unsigned long long FUNC_7 (size_t) ;
 int FUNC_8 (unsigned long long) ;
 int FUNC_9 (unsigned long long) ;
 int FUNC_10 (struct rockchip_pcie*,int,int ) ;
 int FUNC_11 (unsigned long long) ;

__attribute__((used)) static void FUNC_12(struct rockchip_pcie *VAR_3, u8 VAR_4,
      u32 VAR_5, u32 VAR_6, u64 VAR_7,
      u64 VAR_8, size_t VAR_9)
{
 u64 VAR_10 = 1ULL << FUNC_7(VAR_9 - 1);
 int VAR_11 = FUNC_8(VAR_10);
 u32 VAR_12, VAR_13, VAR_14, VAR_15;
 bool VAR_16 = (VAR_6 == VAR_0);


 if (VAR_11 < 8)
  VAR_11 = 8;

 VAR_7 -= VAR_3->mem_res->start;
 VAR_12 = ((VAR_16 ? 0x10 : (VAR_11 - 1)) &
  VAR_2) |
  (FUNC_9(VAR_7) & VAR_1);
 VAR_13 = FUNC_11(VAR_16 ? VAR_7 : VAR_8);
 VAR_14 = FUNC_3(VAR_4) | VAR_6;
 VAR_15 = 0;

 if (VAR_16) {
  FUNC_10(VAR_3, 0,
        FUNC_5(VAR_5));
  FUNC_10(VAR_3, 0,
        FUNC_6(VAR_5));
  FUNC_10(VAR_3, VAR_14,
        FUNC_2(VAR_5));
  FUNC_10(VAR_3, VAR_15,
        FUNC_4(VAR_5));
 } else {

  FUNC_10(VAR_3, VAR_12,
        FUNC_5(VAR_5));
  FUNC_10(VAR_3, VAR_13,
        FUNC_6(VAR_5));
  FUNC_10(VAR_3, VAR_14,
        FUNC_2(VAR_5));
  FUNC_10(VAR_3, VAR_15,
        FUNC_4(VAR_5));

  VAR_12 =
      ((VAR_11 - 1) & VAR_2) |
      (FUNC_9(VAR_7) &
       VAR_1);
  VAR_13 = FUNC_11(VAR_7);
 }


 FUNC_10(VAR_3, VAR_12,
       FUNC_0(VAR_5));
 FUNC_10(VAR_3, VAR_13,
       FUNC_1(VAR_5));
}
