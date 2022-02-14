
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct solo_dev {scalar_t__ reg_base; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline u32 FUNC_1(struct solo_dev *VAR_0, int VAR_1)
{
 return FUNC_0(VAR_0->reg_base + VAR_1);
}
