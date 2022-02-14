
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union oid_res_t {int u; char* ptr; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_param {int value; int fixed; } ;
typedef int islpci_private ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ,int ,int *,union oid_res_t*) ;
 int * FUNC_2 (struct net_device*) ;

__attribute__((used)) static int
FUNC_3(struct net_device *VAR_2,
   struct iw_request_info *VAR_3,
   struct iw_param *VAR_4, char *VAR_5)
{
 islpci_private *VAR_6 = FUNC_2(VAR_2);
 int VAR_7;
 char *VAR_8;
 union oid_res_t VAR_9;


 if ((VAR_7 = FUNC_1(VAR_6, VAR_1, 0, ((void*)0), &VAR_9)))
  return VAR_7;
 VAR_4->value = VAR_9.u * 500000;


 VAR_7 = FUNC_1(VAR_6, VAR_0, 0, ((void*)0), &VAR_9);
 if (VAR_7) {
  FUNC_0(VAR_9.ptr);
  return VAR_7;
 }
 VAR_8 = VAR_9.ptr;
 VAR_4->fixed = (VAR_8[0] != 0) && (VAR_8[1] == 0);
 FUNC_0(VAR_9.ptr);

 return 0;
}
