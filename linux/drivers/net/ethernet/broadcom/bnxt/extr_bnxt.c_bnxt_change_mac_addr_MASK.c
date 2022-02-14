
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_data; } ;
struct net_device {int addr_len; int dev_addr; } ;
struct bnxt {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bnxt*,int ,int) ;
 int FUNC_1 (struct bnxt*,int,int) ;
 int FUNC_2 (struct bnxt*,int,int) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ) ;
 struct bnxt* FUNC_6 (struct net_device*) ;
 scalar_t__ FUNC_7 (struct net_device*) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_1, void *VAR_2)
{
 struct sockaddr *VAR_3 = VAR_2;
 struct bnxt *VAR_4 = FUNC_6(VAR_1);
 int VAR_5 = 0;

 if (!FUNC_4(VAR_3->sa_data))
  return -VAR_0;

 if (FUNC_3(VAR_3->sa_data, VAR_1->dev_addr))
  return 0;

 VAR_5 = FUNC_0(VAR_4, VAR_3->sa_data, 1);
 if (VAR_5)
  return VAR_5;

 FUNC_5(VAR_1->dev_addr, VAR_3->sa_data, VAR_1->addr_len);
 if (FUNC_7(VAR_1)) {
  FUNC_1(VAR_4, 0, 0);
  VAR_5 = FUNC_2(VAR_4, 0, 0);
 }

 return VAR_5;
}
