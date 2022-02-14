
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcnet32_private {int lock; int mii_if; scalar_t__ mii; } ;
struct net_device {int dummy; } ;
struct ifreq {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int,int *) ;
 int FUNC_1 (struct ifreq*) ;
 struct pcnet32_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_1, struct ifreq *VAR_2, int VAR_3)
{
 struct pcnet32_private *VAR_4 = FUNC_2(VAR_1);
 int VAR_5;
 unsigned long VAR_6;


 if (VAR_4->mii) {
  FUNC_3(&VAR_4->lock, VAR_6);
  VAR_5 = FUNC_0(&VAR_4->mii_if, FUNC_1(VAR_2), VAR_3, ((void*)0));
  FUNC_4(&VAR_4->lock, VAR_6);
 } else {
  VAR_5 = -VAR_0;
 }

 return VAR_5;
}
