
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct registry_priv {scalar_t__ wifi_spec; } ;
struct adapter {struct registry_priv registrypriv; } ;


 int FUNC_0 (struct adapter*) ;
 int FUNC_1 (struct adapter*,int) ;
 int FUNC_2 (struct adapter*,int) ;

bool FUNC_3(struct adapter *VAR_0, u8 VAR_1)
{
 struct registry_priv *VAR_2 = &VAR_0->registrypriv;

 bool VAR_3 = (VAR_2->wifi_spec) ? 1 : 0;

 bool VAR_4 = 1;

 switch (VAR_1) {
 case 2:
  FUNC_2(VAR_0, VAR_3);
  break;
 case 3:
 case 4:
  FUNC_1(VAR_0, VAR_3);
  break;
 case 1:
  FUNC_0(VAR_0);
  break;
 default:
  VAR_4 = 0;
  break;
 }

 return VAR_4;

}
