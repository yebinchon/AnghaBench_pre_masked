
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ingenic_ecc_params {int size; int bytes; int strength; } ;
struct ingenic_ecc {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct ingenic_ecc *VAR_9,
        struct ingenic_ecc_params *VAR_10, bool VAR_11)
{
 u32 VAR_12;


 FUNC_1(FUNC_0(VAR_9->base + VAR_8), VAR_9->base + VAR_8);


 VAR_12 = VAR_10->size << VAR_1;
 VAR_12 |= VAR_10->bytes << VAR_2;
 FUNC_1(VAR_12, VAR_9->base + VAR_0);


 VAR_12 = VAR_4 | VAR_7;
 VAR_12 |= VAR_10->strength << VAR_5;
 if (VAR_11)
  VAR_12 |= VAR_6;
 FUNC_1(VAR_12, VAR_9->base + VAR_3);
}
