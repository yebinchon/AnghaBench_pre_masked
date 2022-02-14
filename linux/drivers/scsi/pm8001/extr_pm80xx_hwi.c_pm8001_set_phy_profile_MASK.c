
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct pm8001_hba_info {TYPE_1__* chip; } ;
struct TYPE_2__ {scalar_t__ n_phy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct pm8001_hba_info*,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct pm8001_hba_info*,int ,scalar_t__,scalar_t__,scalar_t__*) ;
 int FUNC_2 (char*) ;

void FUNC_3(struct pm8001_hba_info *VAR_2,
 u32 VAR_3, u8 *VAR_4)
{
 u32 VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2->chip->n_phy; VAR_5++) {
  FUNC_1(VAR_2,
   VAR_1, VAR_5, VAR_3, (u32 *)VAR_4);
  VAR_3 = VAR_3 + VAR_0;
 }
 FUNC_0(VAR_2, FUNC_2("phy settings completed\n"));
}
