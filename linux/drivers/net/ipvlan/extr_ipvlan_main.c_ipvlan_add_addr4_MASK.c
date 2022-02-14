
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipvl_dev {int addrs_lock; TYPE_1__* dev; int port; } ;
struct in_addr {int dummy; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ipvl_dev*,struct in_addr*,int) ;
 scalar_t__ FUNC_1 (int ,struct in_addr*,int) ;
 int FUNC_2 (struct ipvl_dev*,int ,TYPE_1__*,char*,struct in_addr*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct ipvl_dev *VAR_2, struct in_addr *VAR_3)
{
 int VAR_4 = -VAR_0;

 FUNC_3(&VAR_2->addrs_lock);
 if (FUNC_1(VAR_2->port, VAR_3, 0))
  FUNC_2(VAR_2, VAR_1, VAR_2->dev,
     "Failed to add IPv4=%pI4 on %s intf.\n",
     VAR_3, VAR_2->dev->name);
 else
  VAR_4 = FUNC_0(VAR_2, VAR_3, 0);
 FUNC_4(&VAR_2->addrs_lock);
 return VAR_4;
}
