
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
 int FUNC_3 (int ,scalar_t__,int ) ;

__attribute__((used)) static inline void FUNC_4(struct ingenic_pinctrl *VAR_1,
  unsigned int VAR_2, u8 VAR_3, bool VAR_4)
{
 unsigned int VAR_5 = VAR_2 % VAR_0;
 unsigned int VAR_6 = VAR_2 / VAR_0;

 FUNC_3(VAR_1->map, VAR_6 * 0x100 +
   (VAR_4 ? FUNC_2(VAR_3) : FUNC_1(VAR_3)), FUNC_0(VAR_5));
}
