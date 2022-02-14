
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int wireless_mode; } ;
struct adapter {TYPE_1__ registrypriv; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;

bool FUNC_2(struct adapter *VAR_0, u32 VAR_1)
{
 bool VAR_2 = 1;

 if ((VAR_1 <= 14) && (VAR_1 >= 1)) {
  if (FUNC_1(VAR_0->registrypriv.wireless_mode) == 0) {
   VAR_2 = 0;
   FUNC_0("(Channel <= 14) && (Channel >= 1) but wireless_mode do not support 2.4G\n");
  }
 } else {
  VAR_2 = 0;
  FUNC_0("Channel is Invalid !!!\n");
 }

 return VAR_2;
}
