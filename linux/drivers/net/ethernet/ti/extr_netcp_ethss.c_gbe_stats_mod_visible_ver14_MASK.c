
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gbe_priv {int dummy; } ;


 int FUNC_0 (struct gbe_priv*,int ,int ) ;




 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static inline void FUNC_3(struct gbe_priv *VAR_3,
            int VAR_4)
{
 u32 VAR_5;

 VAR_5 = FUNC_1(FUNC_0(VAR_3, VAR_2, VAR_1));

 switch (VAR_4) {
 case 131:
 case 130:
  VAR_5 &= ~VAR_0;
  break;
 case 129:
 case 128:
  VAR_5 |= VAR_0;
  break;
 default:
  return;
 }


 FUNC_2(VAR_5, FUNC_0(VAR_3, VAR_2, VAR_1));
}
