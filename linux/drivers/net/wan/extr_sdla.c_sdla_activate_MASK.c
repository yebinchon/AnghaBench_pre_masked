
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ station; } ;
struct frad_local {int * dlci; TYPE_1__ config; struct net_device** master; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 struct frad_local* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,int ,int ,int ,int *,int,int *,int *) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_4, struct net_device *VAR_5)
{
 struct frad_local *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_1(VAR_4);

 for(VAR_7=0;VAR_7<VAR_0;VAR_7++)
  if (VAR_6->master[VAR_7] == VAR_5)
   break;

 if (VAR_7 == VAR_0)
  return -VAR_1;

 VAR_6->dlci[VAR_7] = FUNC_0(VAR_6->dlci[VAR_7]);

 if (FUNC_2(VAR_4) && (VAR_6->config.station == VAR_2))
  FUNC_3(VAR_4, VAR_3, 0, 0, &VAR_6->dlci[VAR_7], sizeof(short), ((void*)0), ((void*)0));

 return 0;
}
