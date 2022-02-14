
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int (* assist_cb ) (struct net_device*,void*) ;int (* data_cb ) (struct sk_buff*) ;} ;
struct qeth_card {TYPE_1__ osn_info; struct net_device* dev; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qeth_card*) ;
 int FUNC_1 (struct qeth_card*,int,char*) ;
 int FUNC_2 (int*,unsigned char*,int) ;
 struct qeth_card* FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,int) ;

int FUNC_5(unsigned char *VAR_2, struct net_device **VAR_3,
    int (*VAR_4)(struct net_device *, void *),
    int (*VAR_5)(struct sk_buff *))
{
 struct qeth_card *VAR_6;
 char VAR_7[16];
 u16 VAR_8;

 FUNC_2(&VAR_8, VAR_2, 2);
 FUNC_4(VAR_7, "0.0.%04x", VAR_8);
 VAR_6 = FUNC_3(VAR_7);
 if (!VAR_6 || !FUNC_0(VAR_6))
  return -VAR_1;
 *VAR_3 = VAR_6->dev;

 FUNC_1(VAR_6, 2, "osnreg");
 if ((VAR_4 == ((void*)0)) || (VAR_5 == ((void*)0)))
  return -VAR_0;
 VAR_6->osn_info.assist_cb = VAR_4;
 VAR_6->osn_info.data_cb = VAR_5;
 return 0;
}
