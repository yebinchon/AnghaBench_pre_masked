
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_4__ {scalar_t__ qlen; } ;
struct TYPE_3__ {int (* flowctrl ) (int ,int ) ;} ;
struct ser_device {TYPE_2__ head; int dev; TYPE_1__ common; int state; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct ser_device*) ;
 struct ser_device* FUNC_2 (struct net_device*) ;
 int FUNC_3 (TYPE_2__*,struct sk_buff*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_3, struct net_device *VAR_4)
{
 struct ser_device *VAR_5;

 FUNC_0(VAR_4 == ((void*)0));
 VAR_5 = FUNC_2(VAR_4);


 if (VAR_5->head.qlen > VAR_2 &&
  !FUNC_5(VAR_0, &VAR_5->state) &&
  VAR_5->common.flowctrl != ((void*)0))

  VAR_5->common.flowctrl(VAR_5->dev, VAR_1);

 FUNC_3(&VAR_5->head, VAR_3);
 return FUNC_1(VAR_5);
}
