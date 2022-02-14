
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union oid_res_t {int u; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_freq {int e; int m; int i; } ;
typedef int islpci_private ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,int *,union oid_res_t*) ;
 int * FUNC_1 (struct net_device*) ;

__attribute__((used)) static int
FUNC_2(struct net_device *VAR_2, struct iw_request_info *VAR_3,
   struct iw_freq *VAR_4, char *VAR_5)
{
 islpci_private *VAR_6 = FUNC_1(VAR_2);
 union oid_res_t VAR_7;
 int VAR_8;

 VAR_8 = FUNC_0(VAR_6, VAR_0, 0, ((void*)0), &VAR_7);
 VAR_4->i = VAR_7.u;
 VAR_8 |= FUNC_0(VAR_6, VAR_1, 0, ((void*)0), &VAR_7);
 VAR_4->m = VAR_7.u;
 VAR_4->e = 3;

 return VAR_8;
}
