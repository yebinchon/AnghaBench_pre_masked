
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_2__ {int dar; int dsisr; int pe; } ;
struct spa {int reg_tfc; TYPE_1__ xsl_fault; int spa_mem; } ;
typedef enum xsl_response { ____Placeholder_xsl_response } xsl_response ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int,char*,int) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,int ,int ,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct spa *VAR_2, enum xsl_response VAR_3)
{
 u64 VAR_4 = 0;


 if (VAR_3 == VAR_1)
  VAR_4 = FUNC_0(31);
 else if (VAR_3 == VAR_0)
  VAR_4 = FUNC_0(30);
 else
  FUNC_1(1, "Invalid irq response %d\n", VAR_3);

 if (VAR_4) {
  FUNC_3(VAR_2->spa_mem, VAR_2->xsl_fault.pe,
    VAR_2->xsl_fault.dsisr, VAR_2->xsl_fault.dar, VAR_4);
  FUNC_2(VAR_2->reg_tfc, VAR_4);
 }
}
