
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mtu; } ;
struct team_port {TYPE_1__ orig; int list; } ;
struct team {struct net_device* dev; } ;
struct net_device {char* name; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct team*) ;
 int FUNC_1 (struct team*,struct team_port*) ;
 int FUNC_2 (struct team*,struct team_port*) ;
 int FUNC_3 (struct team*) ;
 int FUNC_4 (struct team_port*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*,struct net_device*) ;
 int FUNC_7 (struct net_device*,int) ;
 int FUNC_8 (struct net_device*,int ) ;
 int FUNC_9 (struct net_device*,int) ;
 int FUNC_10 (struct net_device*,struct net_device*) ;
 int FUNC_11 (struct team_port*,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct net_device*,char*,char*) ;
 int FUNC_14 (struct net_device*,char*,char*) ;
 int FUNC_15 (struct net_device*) ;
 int VAR_3 ;
 int FUNC_16 (struct team*,struct team_port*) ;
 int FUNC_17 (struct team_port*) ;
 int FUNC_18 (struct team*,struct team_port*) ;
 struct team_port* FUNC_19 (struct net_device*) ;
 int FUNC_20 (struct team*,struct team_port*) ;
 int FUNC_21 (struct team_port*) ;
 int FUNC_22 (struct team*,struct team_port*) ;
 int FUNC_23 (struct net_device*,struct net_device*) ;

__attribute__((used)) static int FUNC_24(struct team *VAR_4, struct net_device *VAR_5)
{
 struct net_device *VAR_6 = VAR_4->dev;
 struct team_port *VAR_7;
 char *VAR_8 = VAR_5->name;

 VAR_7 = FUNC_19(VAR_5);
 if (!VAR_7 || !FUNC_18(VAR_4, VAR_7)) {
  FUNC_13(VAR_6, "Device %s does not act as a port of this team\n",
      VAR_8);
  return -VAR_0;
 }

 FUNC_16(VAR_4, VAR_7);
 FUNC_12(&VAR_7->list);

 if (VAR_6->flags & VAR_2)
  FUNC_9(VAR_5, -1);
 if (VAR_6->flags & VAR_1)
  FUNC_7(VAR_5, -1);

 FUNC_22(VAR_4, VAR_7);
 FUNC_15(VAR_5);
 FUNC_17(VAR_7);
 FUNC_23(VAR_5, VAR_6);
 FUNC_10(VAR_5, VAR_6);
 FUNC_6(VAR_5, VAR_6);
 FUNC_5(VAR_5);
 FUNC_20(VAR_4, VAR_7);

 FUNC_2(VAR_4, VAR_7);
 FUNC_3(VAR_4);
 FUNC_1(VAR_4, VAR_7);
 FUNC_4(VAR_7);

 FUNC_21(VAR_7);
 FUNC_8(VAR_5, VAR_7->orig.mtu);
 FUNC_11(VAR_7, VAR_3);
 FUNC_14(VAR_6, "Port device %s removed\n", VAR_8);
 FUNC_0(VAR_4);

 return 0;
}
