
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_point {int length; } ;
struct TYPE_3__ {int mib_sem; int nickname; } ;
typedef TYPE_1__ islpci_private ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int ,int ) ;
 TYPE_1__* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(struct net_device *VAR_0, struct iw_request_info *VAR_1,
   struct iw_point *VAR_2, char *VAR_3)
{
 islpci_private *VAR_4 = FUNC_2(VAR_0);

 VAR_2->length = 0;

 FUNC_0(&VAR_4->mib_sem);
 VAR_2->length = FUNC_3(VAR_4->nickname);
 FUNC_1(VAR_3, VAR_4->nickname, VAR_2->length);
 FUNC_4(&VAR_4->mib_sem);

 return 0;
}
