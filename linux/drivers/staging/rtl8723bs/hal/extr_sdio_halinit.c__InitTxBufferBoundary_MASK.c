
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct registry_priv {int wifi_spec; } ;
struct adapter {struct registry_priv registrypriv; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct adapter*,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1(struct adapter *VAR_7)
{
 struct registry_priv *VAR_8 = &VAR_7->registrypriv;


 u8 VAR_9;

 if (!VAR_8->wifi_spec) {
  VAR_9 = VAR_5;
 } else {

  VAR_9 = VAR_6;
 }

 FUNC_0(VAR_7, VAR_2, VAR_9);
 FUNC_0(VAR_7, VAR_3, VAR_9);
 FUNC_0(VAR_7, VAR_4, VAR_9);
 FUNC_0(VAR_7, VAR_1, VAR_9);
 FUNC_0(VAR_7, VAR_0 + 1, VAR_9);
}
