
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct c_can_priv {int (* raminit ) (struct c_can_priv const*,int) ;} ;


 int FUNC_0 (struct c_can_priv const*,int) ;

__attribute__((used)) static inline void FUNC_1(const struct c_can_priv *VAR_0, bool VAR_1)
{
 if (VAR_0->raminit)
  VAR_0->raminit(VAR_0, VAR_1);
}
