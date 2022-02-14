
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ingenic_ecc_params {int strength; int size; int bytes; } ;
struct ingenic_ecc {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct ingenic_ecc*,int) ;
 int FUNC_1 (struct ingenic_ecc*,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct ingenic_ecc *VAR_11,
        struct ingenic_ecc_params *VAR_12, bool VAR_13)
{
 u32 VAR_14, VAR_15;


 FUNC_3(FUNC_2(VAR_11->base + VAR_9), VAR_11->base + VAR_9);


 FUNC_0(VAR_11, 0x1f);
 FUNC_1(VAR_11, VAR_5);

 if (VAR_12->strength == 8)
  FUNC_1(VAR_11, VAR_6);
 else
  FUNC_0(VAR_11, VAR_6);

 if (VAR_13)
  FUNC_1(VAR_11, VAR_7);
 else
  FUNC_0(VAR_11, VAR_7);

 FUNC_1(VAR_11, VAR_8);

 VAR_15 = VAR_3 >> VAR_4;
 if (VAR_12->size > VAR_15)
  return -VAR_10;

 VAR_15 = VAR_1 >> VAR_2;
 if (VAR_12->size + VAR_12->bytes > VAR_15)
  return -VAR_10;


 VAR_14 = VAR_12->size << VAR_4;
 VAR_14 |= (VAR_12->size + VAR_12->bytes) << VAR_2;
 FUNC_3(VAR_14, VAR_11->base + VAR_0);

 return 0;
}
