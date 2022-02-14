
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int flags; int type; } ;
struct TYPE_4__ {int type; } ;
struct ifreq {TYPE_1__ ifr_settings; } ;
struct TYPE_5__ {int (* attach ) (struct net_device*,int ,int ) ;int * proto; } ;
typedef TYPE_2__ hdlc_device ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;


 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct net_device*,int *,int ) ;
 int FUNC_1 (int ,struct net_device*) ;
 int FUNC_2 (int ) ;
 TYPE_2__* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int VAR_9 ;
 int FUNC_5 (struct net_device*,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_10, struct ifreq *VAR_11)
{
 hdlc_device *VAR_12 = FUNC_3(VAR_10);
 int VAR_13;

 switch (VAR_11->ifr_settings.type) {
 case 129:
  if (FUNC_3(VAR_10)->proto != &VAR_9)
   return -VAR_3;
  VAR_11->ifr_settings.type = 128;
  return 0;

 case 128:
  if (!FUNC_2(VAR_1))
   return -VAR_5;

  if (VAR_10->flags & VAR_6)
   return -VAR_2;

  VAR_13=VAR_12->attach(VAR_10, VAR_4,VAR_8);
  if (VAR_13)
   return VAR_13;

  if ((VAR_13 = FUNC_0(VAR_10, &VAR_9, 0)))
   return VAR_13;
  VAR_10->type = VAR_0;
  FUNC_1(VAR_7, VAR_10);
  FUNC_4(VAR_10);
  return 0;
 }

 return -VAR_3;
}
