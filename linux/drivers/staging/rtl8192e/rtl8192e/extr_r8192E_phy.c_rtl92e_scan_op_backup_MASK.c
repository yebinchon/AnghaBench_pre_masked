
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct r8192_priv {TYPE_1__* rtllib; scalar_t__ up; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int (* InitialGainHandler ) (struct net_device*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;


 struct r8192_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,int ) ;
 int FUNC_3 (struct net_device*,int ) ;

void FUNC_4(struct net_device *VAR_3, u8 VAR_4)
{
 struct r8192_priv *VAR_5 = FUNC_1(VAR_3);

 if (VAR_5->up) {
  switch (VAR_4) {
  case 129:
   VAR_5->rtllib->InitialGainHandler(VAR_3, VAR_1);
   break;

  case 128:
   VAR_5->rtllib->InitialGainHandler(VAR_3, VAR_2);
   break;

  default:
   FUNC_0(VAR_0, "Unknown Scan Backup Operation.\n");
   break;
  }
 }
}
