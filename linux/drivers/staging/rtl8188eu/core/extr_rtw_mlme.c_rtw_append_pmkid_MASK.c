
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint ;
typedef int u8 ;
struct security_priv {TYPE_1__* PMKIDList; } ;
struct adapter {struct security_priv securitypriv; } ;
struct TYPE_2__ {int PMKID; } ;


 int FUNC_0 (int*,int *,int) ;

__attribute__((used)) static int FUNC_1(struct adapter *VAR_0, int VAR_1, u8 *VAR_2, uint VAR_3)
{
 struct security_priv *VAR_4 = &VAR_0->securitypriv;

 if (VAR_2[13] <= 20) {

  VAR_2[VAR_3] = 1;
  VAR_3++;
  VAR_2[VAR_3] = 0;
  VAR_3++;
  FUNC_0(&VAR_2[VAR_3], &VAR_4->PMKIDList[VAR_1].PMKID, 16);

  VAR_3 += 16;
  VAR_2[13] += 18;
 }
 return VAR_3;
}
