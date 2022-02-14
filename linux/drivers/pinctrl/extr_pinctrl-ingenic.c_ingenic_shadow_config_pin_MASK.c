
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ingenic_pinctrl {int map; } ;


 int FUNC_0 (unsigned int) ;
 unsigned int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int ,scalar_t__,int ) ;

__attribute__((used)) static inline void FUNC_4(struct ingenic_pinctrl *VAR_2,
  unsigned int VAR_3, u8 VAR_4, bool VAR_5)
{
 unsigned int VAR_6 = VAR_3 % VAR_0;

 FUNC_3(VAR_2->map, VAR_1 +
   (VAR_5 ? FUNC_2(VAR_4) : FUNC_1(VAR_4)), FUNC_0(VAR_6));
}
