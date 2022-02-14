
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ch_id; } ;
struct net_dev_context {int dev; TYPE_1__ tx; } ;
struct most_interface {int dummy; } ;


 int FUNC_0 (int ) ;
 struct net_dev_context* FUNC_1 (struct most_interface*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct most_interface *VAR_0,
      int VAR_1)
{
 struct net_dev_context *VAR_2;

 VAR_2 = FUNC_1(VAR_0);
 if (!VAR_2)
  return 0;

 if (VAR_2->tx.ch_id != VAR_1)
  goto put_nd;

 FUNC_2(VAR_2->dev);

put_nd:
 FUNC_0(VAR_2->dev);
 return 0;
}
