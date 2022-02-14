
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct work_struct {int dummy; } ;
typedef int acpi_status ;
struct TYPE_2__ {int wireless; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_1__* VAR_8 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct work_struct *VAR_11)
{
 u32 VAR_12;
 acpi_status VAR_13;

 if (FUNC_2(VAR_2)) {
  VAR_13 = FUNC_1(&VAR_12, VAR_2);
  if (FUNC_0(VAR_13)) {
   if (VAR_8->wireless == 3)
    FUNC_3(VAR_10, !VAR_12);
   else
    FUNC_4(VAR_10, !VAR_12);
  }
 }

 if (FUNC_2(VAR_0)) {
  VAR_13 = FUNC_1(&VAR_12, VAR_0);
  if (FUNC_0(VAR_13))
   FUNC_4(VAR_7, !VAR_12);
 }

 if (FUNC_2(VAR_1) && FUNC_7(VAR_5)) {
  VAR_13 = FUNC_1(&VAR_12, VAR_3);
  if (FUNC_0(VAR_13))
   FUNC_4(VAR_9, !VAR_12);
 }

 FUNC_6(&VAR_6, FUNC_5(VAR_4));
}
