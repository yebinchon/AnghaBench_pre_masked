
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct ddr_pmu {scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct ddr_pmu *VAR_4, int VAR_5,
      int VAR_6, bool VAR_7)
{
 u8 VAR_8 = VAR_6 * 4 + VAR_3;
 int VAR_9;

 if (VAR_7) {





  FUNC_1(0, VAR_4->base + VAR_8);
  VAR_9 = VAR_2 | VAR_0;
  VAR_9 |= FUNC_0(VAR_1, VAR_5);
  FUNC_1(VAR_9, VAR_4->base + VAR_8);
 } else {

  FUNC_1(0, VAR_4->base + VAR_8);
 }
}
