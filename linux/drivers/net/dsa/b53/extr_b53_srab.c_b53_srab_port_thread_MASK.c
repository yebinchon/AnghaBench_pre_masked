
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b53_srab_port_priv {scalar_t__ mode; int num; struct b53_device* dev; } ;
struct b53_device {int ds; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_1(int VAR_2, void *VAR_3)
{
 struct b53_srab_port_priv *VAR_4 = VAR_3;
 struct b53_device *VAR_5 = VAR_4->dev;

 if (VAR_4->mode == VAR_1)
  FUNC_0(VAR_5->ds, VAR_4->num);

 return VAR_0;
}
