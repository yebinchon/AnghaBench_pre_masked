
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_dev_channel {int linked; int ch_id; } ;
struct net_dev_context {int dev; int list; struct net_dev_channel tx; struct net_dev_channel rx; } ;
struct most_interface {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct net_dev_context* FUNC_1 (struct most_interface*) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct most_interface *VAR_3,
       int VAR_4)
{
 struct net_dev_context *VAR_5;
 struct net_dev_channel *VAR_6;
 unsigned long VAR_7;
 int VAR_8 = 0;

 FUNC_3(&VAR_2);
 VAR_5 = FUNC_1(VAR_3);
 if (!VAR_5) {
  VAR_8 = -VAR_0;
  goto unlock;
 }

 if (VAR_5->rx.linked && VAR_4 == VAR_5->rx.ch_id) {
  VAR_6 = &VAR_5->rx;
 } else if (VAR_5->tx.linked && VAR_4 == VAR_5->tx.ch_id) {
  VAR_6 = &VAR_5->tx;
 } else {
  VAR_8 = -VAR_0;
  goto unlock;
 }

 if (VAR_5->rx.linked && VAR_5->tx.linked) {
  FUNC_5(&VAR_1, VAR_7);
  VAR_6->linked = 0;
  FUNC_6(&VAR_1, VAR_7);





  FUNC_7(VAR_5->dev);
 } else {
  FUNC_5(&VAR_1, VAR_7);
  FUNC_2(&VAR_5->list);
  FUNC_6(&VAR_1, VAR_7);

  FUNC_0(VAR_5->dev);
 }

unlock:
 FUNC_4(&VAR_2);
 return VAR_8;
}
