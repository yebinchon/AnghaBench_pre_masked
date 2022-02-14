
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct ingenic_pinctrl {int map; } ;


 unsigned int FUNC_0 (unsigned int) ;
 unsigned int VAR_0 ;
 int FUNC_1 (int ,scalar_t__,unsigned int*) ;

__attribute__((used)) static inline bool FUNC_2(struct ingenic_pinctrl *VAR_1,
  unsigned int VAR_2, u8 VAR_3)
{
 unsigned int VAR_4 = VAR_2 % VAR_0;
 unsigned int VAR_5 = VAR_2 / VAR_0;
 unsigned int VAR_6;

 FUNC_1(VAR_1->map, VAR_5 * 0x100 + VAR_3, &VAR_6);

 return VAR_6 & FUNC_0(VAR_4);
}
