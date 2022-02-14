
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct atyfb_par {scalar_t__ ati_regbase; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static inline u32 FUNC_2(int VAR_0, const struct atyfb_par *VAR_1)
{

 if (VAR_0 >= 0x400)
  VAR_0 -= 0x800;




 return FUNC_1(VAR_1->ati_regbase + VAR_0);

}
