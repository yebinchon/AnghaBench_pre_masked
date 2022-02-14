
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct net_device {int * netdev_ops; } ;
struct net {int dummy; } ;
struct gtp_dev {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (struct net*) ;
 struct net_device* FUNC_1 (struct net*,int ) ;
 struct net* FUNC_2 (struct net*) ;
 struct net* FUNC_3 (int ) ;
 int VAR_2 ;
 struct gtp_dev* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct nlattr*) ;
 int FUNC_6 (struct net*) ;

__attribute__((used)) static struct gtp_dev *FUNC_7(struct net *VAR_3, struct nlattr *VAR_4[])
{
 struct gtp_dev *VAR_5 = ((void*)0);
 struct net_device *VAR_6;
 struct net *VAR_7;




 if (VAR_4[VAR_1])
  VAR_7 = FUNC_3(FUNC_5(VAR_4[VAR_1]));
 else
  VAR_7 = FUNC_2(VAR_3);

 if (FUNC_0(VAR_7))
  return ((void*)0);


 VAR_6 = FUNC_1(VAR_7, FUNC_5(VAR_4[VAR_0]));
 if (VAR_6 && VAR_6->netdev_ops == &VAR_2)
  VAR_5 = FUNC_4(VAR_6);

 FUNC_6(VAR_7);
 return VAR_5;
}
