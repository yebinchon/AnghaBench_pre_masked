
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct geni_se {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (struct geni_se*) ;
 scalar_t__ FUNC_1 (struct geni_se*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct geni_se *VAR_10)
{
 u32 VAR_11 = FUNC_1(VAR_10);
 u32 VAR_12;

 FUNC_0(VAR_10);

 VAR_12 = FUNC_2(VAR_10->base + VAR_7);
 if (VAR_11 != VAR_1) {
  VAR_12 |= VAR_2 | VAR_5;
  VAR_12 |= VAR_4 | VAR_3;
 }
 FUNC_3(VAR_12, VAR_10->base + VAR_7);

 VAR_12 = FUNC_2(VAR_10->base + VAR_8);
 if (VAR_11 != VAR_1)
  VAR_12 |= VAR_9;
 FUNC_3(VAR_12, VAR_10->base + VAR_8);

 VAR_12 = FUNC_2(VAR_10->base + VAR_6);
 VAR_12 &= ~VAR_0;
 FUNC_3(VAR_12, VAR_10->base + VAR_6);
}
