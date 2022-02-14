
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct enc28j60_net {int lock; TYPE_1__* spi; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct device*,char*,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct enc28j60_net*) ;
 int FUNC_4 (struct enc28j60_net*,int ,int ) ;
 int FUNC_5 (struct enc28j60_net*,int ,int ) ;
 int FUNC_6 (struct enc28j60_net*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_7(struct enc28j60_net *VAR_8, bool VAR_9)
{
 struct device *VAR_10 = &VAR_8->spi->dev;

 if (FUNC_3(VAR_8))
  FUNC_0(VAR_10, "%s power...\n", VAR_9 ? "low" : "high");

 FUNC_1(&VAR_8->lock);
 if (VAR_9) {
  FUNC_4(VAR_8, VAR_0, VAR_1);
  FUNC_6(VAR_8, VAR_5, VAR_7, 0);
  FUNC_6(VAR_8, VAR_0, VAR_2, 0);

  FUNC_5(VAR_8, VAR_3, VAR_4);
 } else {
  FUNC_4(VAR_8, VAR_3, VAR_4);
  FUNC_6(VAR_8, VAR_5, VAR_6, VAR_6);

 }
 FUNC_2(&VAR_8->lock);
}
