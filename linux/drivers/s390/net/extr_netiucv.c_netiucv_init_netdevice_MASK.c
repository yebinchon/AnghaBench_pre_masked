
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netiucv_priv {int fsm; int conn; } ;
struct net_device {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct net_device* FUNC_1 (int,char*,int ,int ) ;
 scalar_t__ FUNC_2 (struct net_device*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (char*,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_6 (int ) ;
 struct netiucv_priv* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*,char*,char*) ;
 int VAR_9 ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int VAR_10 ;

__attribute__((used)) static struct net_device *FUNC_11(char *VAR_11, char *VAR_12)
{
 struct netiucv_priv *VAR_13;
 struct net_device *VAR_14;

 VAR_14 = FUNC_1(sizeof(struct netiucv_priv), "iucv%d",
      VAR_3, VAR_9);
 if (!VAR_14)
  return ((void*)0);
 FUNC_9();
 if (FUNC_2(VAR_14, VAR_14->name) < 0)
  goto out_netdev;

 VAR_13 = FUNC_7(VAR_14);
 VAR_13->fsm = FUNC_5("netiucvdev", VAR_8,
    VAR_6, VAR_5, VAR_4,
    VAR_7, VAR_0, VAR_2);
 if (!VAR_13->fsm)
  goto out_netdev;

 VAR_13->conn = FUNC_8(VAR_14, VAR_11, VAR_12);
 if (!VAR_13->conn) {
  FUNC_0(VAR_10, 2, "NULL from netiucv_new_connection\n");
  goto out_fsm;
 }
 FUNC_4(VAR_13->fsm, VAR_1);
 return VAR_14;

out_fsm:
 FUNC_6(VAR_13->fsm);
out_netdev:
 FUNC_10();
 FUNC_3(VAR_14);
 return ((void*)0);
}
