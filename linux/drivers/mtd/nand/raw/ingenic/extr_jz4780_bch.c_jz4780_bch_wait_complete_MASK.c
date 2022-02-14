
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct ingenic_ecc {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,unsigned int,int,int ,int ) ;
 int FUNC_1 (unsigned int,scalar_t__) ;

__attribute__((used)) static bool FUNC_2(struct ingenic_ecc *VAR_2, unsigned int VAR_3,
         u32 *VAR_4)
{
 u32 VAR_5;
 int VAR_6;







 VAR_6 = FUNC_0(VAR_2->base + VAR_0, VAR_5,
     (VAR_5 & VAR_3) == VAR_3, 0, VAR_1);
 if (VAR_6)
  return 0;

 if (VAR_4)
  *VAR_4 = VAR_5;

 FUNC_1(VAR_5, VAR_2->base + VAR_0);
 return 1;
}
