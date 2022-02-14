
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct registry_priv {int wifi_spec; } ;
struct adapter {struct registry_priv registrypriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct adapter*,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct adapter *VAR_3)
{
 struct registry_priv *VAR_4 = &VAR_3->registrypriv;
 u16 VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;

 if (!VAR_4->wifi_spec) {

  VAR_5 = VAR_1;
  VAR_6 = VAR_1;
  VAR_7 = VAR_2;
  VAR_8 = VAR_0;
  VAR_9 = VAR_0;
  VAR_10 = VAR_0;
 } else {

  VAR_5 = VAR_1;
  VAR_6 = VAR_2;
  VAR_7 = VAR_2;
  VAR_8 = VAR_0;
  VAR_9 = VAR_0;
  VAR_10 = VAR_0;
 }
 FUNC_0(VAR_3, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10);
}
