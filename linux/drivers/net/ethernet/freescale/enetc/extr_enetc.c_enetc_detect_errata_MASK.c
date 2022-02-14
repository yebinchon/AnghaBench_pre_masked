
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct enetc_si {int errata; TYPE_1__* pdev; } ;
struct TYPE_2__ {scalar_t__ revision; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_0(struct enetc_si *VAR_4)
{
 if (VAR_4->pdev->revision == VAR_3)
  VAR_4->errata = VAR_0 | VAR_2 |
        VAR_1;
}
