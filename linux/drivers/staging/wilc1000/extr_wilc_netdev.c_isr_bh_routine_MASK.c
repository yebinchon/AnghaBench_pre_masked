
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wilc_vif {struct wilc* wilc; } ;
struct wilc {scalar_t__ close; } ;
struct net_device {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,char*) ;
 struct wilc_vif* FUNC_1 (void*) ;
 int FUNC_2 (struct wilc*) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_1, void *VAR_2)
{
 struct net_device *VAR_3 = VAR_2;
 struct wilc_vif *VAR_4 = FUNC_1(VAR_2);
 struct wilc *VAR_5 = VAR_4->wilc;

 if (VAR_5->close) {
  FUNC_0(VAR_3, "Can't handle BH interrupt\n");
  return VAR_0;
 }

 FUNC_2(VAR_5);

 return VAR_0;
}
