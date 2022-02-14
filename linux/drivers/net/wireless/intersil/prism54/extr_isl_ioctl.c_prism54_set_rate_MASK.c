
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union oid_res_t {char* ptr; } ;
typedef char u32 ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_param {int value; scalar_t__ fixed; } ;
typedef int islpci_private ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ,int ,int *,union oid_res_t*) ;
 int FUNC_2 (int *,int ,int ,char*) ;
 int * FUNC_3 (struct net_device*) ;

__attribute__((used)) static int
FUNC_4(struct net_device *VAR_5,
   struct iw_request_info *VAR_6,
   struct iw_param *VAR_7, char *VAR_8)
{

 islpci_private *VAR_9 = FUNC_3(VAR_5);
 u32 VAR_10, VAR_11;
 char *VAR_12;
 int VAR_13, VAR_14;
 union oid_res_t VAR_15;

 if (VAR_7->value == -1) {

  VAR_11 = 1;
  return FUNC_2(VAR_9, VAR_1, 0, &VAR_11);
 }

 VAR_13 = FUNC_1(VAR_9, VAR_3, 0, ((void*)0), &VAR_15);
 if (VAR_13) {
  FUNC_0(VAR_15.ptr);
  return VAR_13;
 }

 VAR_10 = (u32) (VAR_7->value / 500000);
 VAR_12 = VAR_15.ptr;
 VAR_14 = 0;

 while (VAR_12[VAR_14]) {
  if (VAR_10 && (VAR_12[VAR_14] == VAR_10)) {
   break;
  }
  if (VAR_7->value == VAR_14) {
   break;
  }
  VAR_12[VAR_14] |= 0x80;
  VAR_14++;
 }

 if (!VAR_12[VAR_14]) {
  FUNC_0(VAR_15.ptr);
  return -VAR_4;
 }

 VAR_12[VAR_14] |= 0x80;
 VAR_12[VAR_14 + 1] = 0;


 if (VAR_7->fixed) {
  VAR_12[0] = VAR_12[VAR_14];
  VAR_12[1] = 0;
 }
 VAR_11 = -1;
 VAR_13 = FUNC_2(VAR_9, VAR_1, 0, &VAR_11);
 VAR_13 |= FUNC_2(VAR_9, VAR_0, 0, VAR_12);
 VAR_13 |= FUNC_2(VAR_9, VAR_2, 0, VAR_12);

 FUNC_0(VAR_15.ptr);

 return VAR_13;
}
