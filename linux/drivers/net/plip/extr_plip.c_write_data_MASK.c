
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct parport {TYPE_2__* ops; } ;
struct net_local {TYPE_1__* pardev; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int (* write_data ) (struct parport*,unsigned char) ;} ;
struct TYPE_3__ {struct parport* port; } ;


 scalar_t__ FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct parport*,unsigned char) ;

__attribute__((used)) static inline void FUNC_2 (struct net_device *VAR_0, unsigned char VAR_1)
{
 struct parport *VAR_2 =
    ((struct net_local *)FUNC_0(VAR_0))->pardev->port;

 VAR_2->ops->write_data (VAR_2, VAR_1);
}
