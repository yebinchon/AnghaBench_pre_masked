
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_param {int value; } ;
typedef int islpci_private ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int *) ;
 int * FUNC_1 (struct net_device*) ;

__attribute__((used)) static int
FUNC_2(struct net_device *VAR_1, struct iw_request_info *VAR_2,
  struct iw_param *VAR_3, char *VAR_4)
{
 islpci_private *VAR_5 = FUNC_1(VAR_1);

 return FUNC_0(VAR_5, VAR_0, 0, &VAR_3->value);
}
