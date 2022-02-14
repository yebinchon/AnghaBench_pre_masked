
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct nozomi {TYPE_1__* pdev; int reg_fcr; } ;
typedef enum port_type { ____Placeholder_port_type } port_type ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,int) ;
 scalar_t__ FUNC_1 (int,struct nozomi*) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct nozomi *VAR_0, enum port_type VAR_1, u8 *VAR_2,
   u16 VAR_3, u16 VAR_4, u16 VAR_5)
{
 if (*VAR_2 == 0 && VAR_3 & VAR_4) {
  if (FUNC_1(VAR_1, VAR_0)) {
   FUNC_2(VAR_4, VAR_0->reg_fcr);
   *VAR_2 = !(*VAR_2);
  }

  if (VAR_3 & VAR_5) {
   if (FUNC_1(VAR_1, VAR_0)) {
    FUNC_2(VAR_5, VAR_0->reg_fcr);
    *VAR_2 = !(*VAR_2);
   }
  }
 } else if (*VAR_2 == 1 && VAR_3 & VAR_5) {
  if (FUNC_1(VAR_1, VAR_0)) {
   FUNC_2(VAR_5, VAR_0->reg_fcr);
   *VAR_2 = !(*VAR_2);
  }

  if (VAR_3 & VAR_4) {
   if (FUNC_1(VAR_1, VAR_0)) {
    FUNC_2(VAR_4, VAR_0->reg_fcr);
    *VAR_2 = !(*VAR_2);
   }
  }
 } else {
  FUNC_0(&VAR_0->pdev->dev, "port out of sync!, toggle:%d\n",
   *VAR_2);
  return 0;
 }
 return 1;
}
