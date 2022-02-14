
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct s1d13xxxfb_par {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct s1d13xxxfb_par*,int ) ;
 int FUNC_1 (struct s1d13xxxfb_par*,int ,int) ;

__attribute__((used)) static inline void
FUNC_2(struct s1d13xxxfb_par *VAR_1, int VAR_2)
{
 u8 VAR_3 = FUNC_0(VAR_1, VAR_0);

 if (VAR_2)
  VAR_3 |= 0x02;
 else
  VAR_3 &= ~0x02;

 FUNC_1(VAR_1, VAR_0, VAR_3);
}
