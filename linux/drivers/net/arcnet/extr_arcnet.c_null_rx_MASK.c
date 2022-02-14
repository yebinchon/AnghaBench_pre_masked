
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_6__ {int source; } ;
struct TYPE_4__ {int proto; } ;
struct TYPE_5__ {TYPE_1__ rfc1201; } ;
struct archdr {TYPE_3__ hard; TYPE_2__ soft; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct net_device*,char*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_1, int VAR_2,
      struct archdr *VAR_3, int VAR_4)
{
 FUNC_0(VAR_0, VAR_1,
     "rx: don't know how to deal with proto %02Xh from host %02Xh.\n",
     VAR_3->soft.rfc1201.proto, VAR_3->hard.source);
}
