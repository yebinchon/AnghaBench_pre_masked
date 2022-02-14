
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct stmfx_pinctrl {TYPE_1__* stmfx; } ;
struct TYPE_2__ {int map; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int ,int,int*) ;

__attribute__((used)) static int FUNC_3(struct stmfx_pinctrl *VAR_1,
      unsigned int VAR_2)
{
 u32 VAR_3 = VAR_0 + FUNC_1(VAR_2);
 u32 VAR_4, VAR_5 = FUNC_0(VAR_2);
 int VAR_6;

 VAR_6 = FUNC_2(VAR_1->stmfx->map, VAR_3, &VAR_4);
 if (VAR_6)
  return VAR_6;

 return !!(VAR_4 & VAR_5);
}
