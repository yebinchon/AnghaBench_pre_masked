
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucb1x00_driver {int (* add ) (struct ucb1x00_dev*) ;int devs; } ;
struct ucb1x00_dev {int drv_node; int dev_node; struct ucb1x00_driver* drv; struct ucb1x00* ucb; } ;
struct ucb1x00 {int devs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ucb1x00_dev*) ;
 struct ucb1x00_dev* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct ucb1x00_dev*) ;

__attribute__((used)) static int FUNC_4(struct ucb1x00 *VAR_2, struct ucb1x00_driver *VAR_3)
{
 struct ucb1x00_dev *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_1(sizeof(struct ucb1x00_dev), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_4->ucb = VAR_2;
 VAR_4->drv = VAR_3;

 VAR_5 = VAR_3->add(VAR_4);
 if (VAR_5) {
  FUNC_0(VAR_4);
  return VAR_5;
 }

 FUNC_2(&VAR_4->dev_node, &VAR_2->devs);
 FUNC_2(&VAR_4->drv_node, &VAR_3->devs);

 return VAR_5;
}
