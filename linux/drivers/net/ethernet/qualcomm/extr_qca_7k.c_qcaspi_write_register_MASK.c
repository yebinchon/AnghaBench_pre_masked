
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_2__ {int write_verify_failed; } ;
struct qcaspi {TYPE_1__ stats; } ;


 int FUNC_0 (struct qcaspi*,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct qcaspi*,scalar_t__,scalar_t__*) ;

int
FUNC_2(struct qcaspi *VAR_0, u16 VAR_1, u16 VAR_2, int VAR_3)
{
 int VAR_4, VAR_5 = 0;
 u16 VAR_6;

 do {
  VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2);
  if (VAR_4)
   return VAR_4;

  if (!VAR_3)
   return 0;

  VAR_4 = FUNC_1(VAR_0, VAR_1, &VAR_6);
  if (VAR_4)
   return VAR_4;

  VAR_4 = VAR_6 != VAR_2;
  if (!VAR_4)
   return 0;

  VAR_5++;
  VAR_0->stats.write_verify_failed++;

 } while (VAR_5 <= VAR_3);

 return VAR_4;
}
