
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct de4x5_private {int timeout; } ;


 int VAR_0 ;
 struct de4x5_private* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int
FUNC_1(struct net_device *VAR_1)
{
    struct de4x5_private *VAR_2 = FUNC_0(VAR_1);

    if (VAR_2->timeout < 0) {
 VAR_2->timeout = 1;
    }

    if (VAR_2->timeout--) {
 return VAR_0;
    } else {
 VAR_2->timeout = -1;
    }

    return 0;
}
