
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ksz_port {TYPE_1__* linked; } ;
struct dev_priv {scalar_t__ media_state; } ;
struct TYPE_2__ {scalar_t__ state; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,int ) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_1, struct dev_priv *VAR_2,
 struct ksz_port *VAR_3)
{
 if (VAR_2->media_state != VAR_3->linked->state) {
  VAR_2->media_state = VAR_3->linked->state;
  if (FUNC_0(VAR_1))
   FUNC_1(VAR_1, VAR_0);
 }
}
