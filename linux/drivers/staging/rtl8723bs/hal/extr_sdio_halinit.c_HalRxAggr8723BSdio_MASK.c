
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct registry_priv {scalar_t__ wifi_spec; } ;
struct adapter {struct registry_priv registrypriv; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct adapter*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_1(struct adapter *VAR_1)
{
 struct registry_priv *VAR_2;
 u8 VAR_3;
 u8 VAR_4;


 VAR_2 = &VAR_1->registrypriv;

 if (VAR_2->wifi_spec) {



  VAR_3 = 0x06;
  VAR_4 = 0x06;
 } else {


  VAR_3 = 0x06;
  VAR_4 = 0x06;
 }

 FUNC_0(VAR_1, VAR_0 + 1, VAR_3);
 FUNC_0(VAR_1, VAR_0, VAR_4);
}
