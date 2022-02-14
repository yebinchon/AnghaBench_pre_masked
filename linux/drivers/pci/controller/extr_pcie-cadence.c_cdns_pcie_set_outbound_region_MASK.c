
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef unsigned long long u64 ;
typedef int u32 ;
struct cdns_pcie {TYPE_1__* mem_res; int bus; scalar_t__ is_rc; } ;
struct TYPE_2__ {scalar_t__ start; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int,int) ;
 int FUNC_11 (struct cdns_pcie*,int ,int) ;
 unsigned long long FUNC_12 (size_t) ;
 int FUNC_13 (unsigned long long) ;
 int FUNC_14 (unsigned long long) ;
 int FUNC_15 (unsigned long long) ;

void FUNC_16(struct cdns_pcie *VAR_3, u8 VAR_4,
       u32 VAR_5, bool VAR_6,
       u64 VAR_7, u64 VAR_8, size_t VAR_9)
{




 u64 VAR_10 = 1ULL << FUNC_12(VAR_9 - 1);
 int VAR_11 = FUNC_13(VAR_10);
 u32 VAR_12, VAR_13, VAR_14, VAR_15;

 if (VAR_11 < 8)
  VAR_11 = 8;


 VAR_12 = FUNC_8(VAR_11) |
  (FUNC_14(VAR_8) & FUNC_10(31, 8));
 VAR_13 = FUNC_15(VAR_8);

 FUNC_11(VAR_3, FUNC_7(VAR_5), VAR_12);
 FUNC_11(VAR_3, FUNC_9(VAR_5), VAR_13);


 if (VAR_6)
  VAR_14 = VAR_1;
 else
  VAR_14 = VAR_2;
 VAR_15 = 0;
 if (VAR_3->is_rc) {

  VAR_14 |= VAR_0 |
    FUNC_4(0);
  VAR_15 |= FUNC_6(VAR_3->bus);
 } else {




  VAR_14 |= FUNC_4(VAR_4);
 }

 FUNC_11(VAR_3, FUNC_3(VAR_5), VAR_14);
 FUNC_11(VAR_3, FUNC_5(VAR_5), VAR_15);


 VAR_7 -= VAR_3->mem_res->start;
 VAR_12 = FUNC_1(VAR_11) |
  (FUNC_14(VAR_7) & FUNC_10(31, 8));
 VAR_13 = FUNC_15(VAR_7);

 FUNC_11(VAR_3, FUNC_0(VAR_5), VAR_12);
 FUNC_11(VAR_3, FUNC_2(VAR_5), VAR_13);
}
