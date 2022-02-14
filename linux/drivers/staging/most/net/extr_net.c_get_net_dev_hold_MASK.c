
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ linked; } ;
struct TYPE_3__ {scalar_t__ linked; } ;
struct net_dev_context {int dev; TYPE_2__ tx; TYPE_1__ rx; } ;
struct most_interface {int dummy; } ;


 int FUNC_0 (int ) ;
 struct net_dev_context* FUNC_1 (struct most_interface*) ;
 int VAR_0 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static struct net_dev_context *FUNC_4(struct most_interface *VAR_1)
{
 struct net_dev_context *VAR_2;
 unsigned long VAR_3;

 FUNC_2(&VAR_0, VAR_3);
 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2 && VAR_2->rx.linked && VAR_2->tx.linked)
  FUNC_0(VAR_2->dev);
 else
  VAR_2 = ((void*)0);
 FUNC_3(&VAR_0, VAR_3);
 return VAR_2;
}
