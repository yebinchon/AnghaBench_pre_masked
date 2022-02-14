
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int features; int hw_features; } ;
struct bnxt {int flags; struct net_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct bnxt*) ;
 scalar_t__ FUNC_1 (struct bnxt*) ;

__attribute__((used)) static void FUNC_2(struct bnxt *VAR_2)
{
 struct net_device *VAR_3 = VAR_2->dev;

 VAR_3->hw_features &= ~VAR_1;
 VAR_3->features &= ~VAR_1;
 VAR_2->flags &= ~VAR_0;
 if (FUNC_1(VAR_2)) {
  VAR_3->hw_features |= VAR_1;
  if (FUNC_0(VAR_2)) {
   VAR_2->flags |= VAR_0;
   VAR_3->features |= VAR_1;
  }
 }
}
