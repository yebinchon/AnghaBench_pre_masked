
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_data; } ;
struct net_device {int addr_len; int dev_addr; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct bnx2x*) ;
 scalar_t__ FUNC_2 (struct bnx2x*) ;
 scalar_t__ FUNC_3 (struct bnx2x*,int ) ;
 int FUNC_4 (struct bnx2x*,int ,int ) ;
 int FUNC_5 (struct bnx2x*,int) ;
 int VAR_2 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int ) ;
 struct bnx2x* FUNC_8 (struct net_device*) ;
 scalar_t__ FUNC_9 (struct net_device*) ;

int FUNC_10(struct net_device *VAR_3, void *VAR_4)
{
 struct sockaddr *VAR_5 = VAR_4;
 struct bnx2x *VAR_6 = FUNC_8(VAR_3);
 int VAR_7 = 0;

 if (!FUNC_6(VAR_5->sa_data)) {
  FUNC_0("Requested MAC address is not valid\n");
  return -VAR_1;
 }

 if (FUNC_1(VAR_6)) {
  FUNC_0("Can't change address on STORAGE ONLY function\n");
  return -VAR_1;
 }

 if (FUNC_9(VAR_3)) {
  VAR_7 = FUNC_5(VAR_6, 0);
  if (VAR_7)
   return VAR_7;
 }

 FUNC_7(VAR_3->dev_addr, VAR_5->sa_data, VAR_3->addr_len);

 if (FUNC_9(VAR_3))
  VAR_7 = FUNC_5(VAR_6, 1);

 if (FUNC_2(VAR_6) && FUNC_3(VAR_6, VAR_2))
  FUNC_4(VAR_6, VAR_2, VAR_0);

 return VAR_7;
}
