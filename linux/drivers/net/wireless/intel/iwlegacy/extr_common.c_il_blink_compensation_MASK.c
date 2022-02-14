
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct il_priv {int dummy; } ;


 int FUNC_0 (char*) ;

__attribute__((used)) static inline u8
FUNC_1(struct il_priv *VAR_0, u8 VAR_1, u16 VAR_2)
{
 if (!VAR_2) {
  FUNC_0("undefined blink compensation: "
         "use pre-defined blinking time\n");
  return VAR_1;
 }

 return (u8) ((VAR_1 * VAR_2) >> 6);
}
