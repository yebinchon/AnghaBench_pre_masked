
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nb8800_priv {int dummy; } ;


 int FUNC_0 (struct nb8800_priv*,int) ;
 int FUNC_1 (struct nb8800_priv*,int,int) ;

__attribute__((used)) static inline void FUNC_2(struct nb8800_priv *VAR_0, int VAR_1,
    u32 VAR_2, u32 VAR_3)
{
 u32 VAR_4 = FUNC_0(VAR_0, VAR_1);
 u32 VAR_5 = (VAR_4 & ~VAR_2) | (VAR_3 & VAR_2);

 if (VAR_5 != VAR_4)
  FUNC_1(VAR_0, VAR_1, VAR_5);
}
