
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcnet_dev {scalar_t__ stale; } ;
struct net_device {int dummy; } ;
typedef scalar_t__ irqreturn_t ;


 scalar_t__ VAR_0 ;
 struct pcnet_dev* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (int,void*) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_1, void *VAR_2)
{
    struct net_device *VAR_3 = VAR_2;
    struct pcnet_dev *VAR_4;
    irqreturn_t VAR_5 = FUNC_1(VAR_1, VAR_2);

    if (VAR_5 == VAR_0) {
     VAR_4 = FUNC_0(VAR_3);
     VAR_4->stale = 0;
    }
    return VAR_5;
}
