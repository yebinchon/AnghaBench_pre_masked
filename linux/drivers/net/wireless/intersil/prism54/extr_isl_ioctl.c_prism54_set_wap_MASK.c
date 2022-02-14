
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {scalar_t__ sa_family; int sa_data; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
typedef int islpci_private ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int *,int ,int ,char**) ;
 int * FUNC_2 (struct net_device*) ;

__attribute__((used)) static int
FUNC_3(struct net_device *VAR_5, struct iw_request_info *VAR_6,
  struct sockaddr *VAR_7, char *VAR_8)
{
 islpci_private *VAR_9 = FUNC_2(VAR_5);
 char VAR_10[6];
 int VAR_11;

 if (VAR_7->sa_family != VAR_0)
  return -VAR_3;


 FUNC_0(&VAR_10[0], VAR_7->sa_data, VAR_4);


 VAR_11 = FUNC_1(VAR_9, VAR_1, 0, &VAR_10);

 return (VAR_11 ? VAR_11 : -VAR_2);
}
