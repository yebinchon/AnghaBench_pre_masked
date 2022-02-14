
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sockaddr {int * sa_data; } ;
struct TYPE_2__ {int mac_bits; } ;
struct qeth_card {TYPE_1__ info; } ;
struct net_device {int * dev_addr; struct qeth_card* ml_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct qeth_card*) ;
 scalar_t__ FUNC_1 (struct qeth_card*) ;
 int FUNC_2 (struct qeth_card*,int,int *,int) ;
 int FUNC_3 (struct qeth_card*,int,char*) ;
 int VAR_3 ;
 int FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct qeth_card*,int *) ;
 int FUNC_8 (struct qeth_card*,int *) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_4, void *VAR_5)
{
 struct sockaddr *VAR_6 = VAR_5;
 struct qeth_card *VAR_7 = VAR_4->ml_priv;
 u8 VAR_8[VAR_2];
 int VAR_9 = 0;

 FUNC_3(VAR_7, 3, "setmac");

 if (FUNC_0(VAR_7) || FUNC_1(VAR_7)) {
  FUNC_3(VAR_7, 3, "setmcTYP");
  return -VAR_1;
 }
 FUNC_2(VAR_7, 3, VAR_6->sa_data, VAR_2);
 if (!FUNC_6(VAR_6->sa_data))
  return -VAR_0;


 if (FUNC_5(VAR_4->dev_addr, VAR_6->sa_data) &&
     (VAR_7->info.mac_bits & VAR_3))
  return 0;


 VAR_9 = FUNC_8(VAR_7, VAR_6->sa_data);
 if (VAR_9)
  return VAR_9;
 FUNC_4(VAR_8, VAR_4->dev_addr);
 FUNC_4(VAR_4->dev_addr, VAR_6->sa_data);

 if (VAR_7->info.mac_bits & VAR_3)
  FUNC_7(VAR_7, VAR_8);
 VAR_7->info.mac_bits |= VAR_3;
 return 0;
}
