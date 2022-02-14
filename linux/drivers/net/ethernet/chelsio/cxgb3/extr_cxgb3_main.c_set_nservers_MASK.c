
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct port_info {struct adapter* adapter; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {unsigned int nfilters; unsigned int nservers; } ;
struct TYPE_4__ {TYPE_1__ mc5; } ;
struct adapter {int flags; TYPE_2__ params; int mc5; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 struct port_info* FUNC_0 (struct net_device*) ;
 unsigned int FUNC_1 (int *) ;

__attribute__((used)) static ssize_t FUNC_2(struct net_device *VAR_4, unsigned int VAR_5)
{
 struct port_info *VAR_6 = FUNC_0(VAR_4);
 struct adapter *VAR_7 = VAR_6->adapter;

 if (VAR_7->flags & VAR_2)
  return -VAR_0;
 if (VAR_5 > FUNC_1(&VAR_7->mc5) - VAR_7->params.mc5.nfilters -
     VAR_3)
  return -VAR_1;
 VAR_7->params.mc5.nservers = VAR_5;
 return 0;
}
