
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union oid_res_t {int ptr; } ;
struct sockaddr {int sa_family; int sa_data; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
typedef int islpci_private ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int *,int ,int ,int *,union oid_res_t*) ;
 int * FUNC_3 (struct net_device*) ;

__attribute__((used)) static int
FUNC_4(struct net_device *VAR_3, struct iw_request_info *VAR_4,
  struct sockaddr *VAR_5, char *VAR_6)
{
 islpci_private *VAR_7 = FUNC_3(VAR_3);
 union oid_res_t VAR_8;
 int VAR_9;

 VAR_9 = FUNC_2(VAR_7, VAR_1, 0, ((void*)0), &VAR_8);
 FUNC_1(VAR_5->sa_data, VAR_8.ptr, VAR_2);
 VAR_5->sa_family = VAR_0;
 FUNC_0(VAR_8.ptr);

 return VAR_9;
}
