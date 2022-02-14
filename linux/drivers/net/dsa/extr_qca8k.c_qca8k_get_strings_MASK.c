
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ u32 ;
struct dsa_switch {int dummy; } ;
struct TYPE_3__ {int name; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct dsa_switch *VAR_3, int VAR_4, u32 VAR_5, uint8_t *VAR_6)
{
 int VAR_7;

 if (VAR_5 != VAR_1)
  return;

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_2); VAR_7++)
  FUNC_1(VAR_6 + VAR_7 * VAR_0, VAR_2[VAR_7].name,
   VAR_0);
}
