
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wilc_vif {struct wilc* wilc; } ;
struct wilc {scalar_t__ close; } ;
struct net_device {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,char*) ;
 struct wilc_vif* FUNC_1 (struct net_device*) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_2, void *VAR_3)
{
 struct net_device *VAR_4 = VAR_3;
 struct wilc_vif *VAR_5 = FUNC_1(VAR_4);
 struct wilc *VAR_6 = VAR_5->wilc;

 if (VAR_6->close) {
  FUNC_0(VAR_4, "Can't handle UH interrupt\n");
  return VAR_0;
 }
 return VAR_1;
}
