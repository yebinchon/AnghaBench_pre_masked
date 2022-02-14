
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
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
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (struct cdns_pcie*,int ,int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;

void FUNC_13(struct cdns_pcie *VAR_2, u8 VAR_3,
        u32 VAR_4, u64 VAR_5)
{
 u32 VAR_6, VAR_7, VAR_8, VAR_9;

 VAR_8 = VAR_1;
 VAR_9 = 0;


 if (VAR_2->is_rc) {
  VAR_8 |= VAR_0 |
    FUNC_4(0);
  VAR_9 |= FUNC_6(VAR_2->bus);
 } else {
  VAR_8 |= FUNC_4(VAR_3);
 }


 VAR_5 -= VAR_2->mem_res->start;
 VAR_6 = FUNC_1(17) |
  (FUNC_11(VAR_5) & FUNC_9(31, 8));
 VAR_7 = FUNC_12(VAR_5);

 FUNC_10(VAR_2, FUNC_7(VAR_4), 0);
 FUNC_10(VAR_2, FUNC_8(VAR_4), 0);
 FUNC_10(VAR_2, FUNC_3(VAR_4), VAR_8);
 FUNC_10(VAR_2, FUNC_5(VAR_4), VAR_9);
 FUNC_10(VAR_2, FUNC_0(VAR_4), VAR_6);
 FUNC_10(VAR_2, FUNC_2(VAR_4), VAR_7);
}
