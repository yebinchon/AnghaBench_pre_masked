
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct team {int port_list; } ;
struct net_device {char* name; scalar_t__ type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct net_device*,char*,...) ;
 struct team* FUNC_5 (struct net_device*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct net_device*,struct net_device*) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_3,
          struct net_device *VAR_4)
{
 struct team *VAR_5 = FUNC_5(VAR_3);
 char *VAR_6 = VAR_4->name;
 int VAR_7;

 if (VAR_3->type == VAR_4->type)
  return 0;
 if (!FUNC_3(&VAR_5->port_list)) {
  FUNC_4(VAR_3, "Device %s is of different type\n", VAR_6);
  return -VAR_0;
 }
 VAR_7 = FUNC_0(VAR_2, VAR_3);
 VAR_7 = FUNC_6(VAR_7);
 if (VAR_7) {
  FUNC_4(VAR_3, "Refused to change device type\n");
  return VAR_7;
 }
 FUNC_2(VAR_3);
 FUNC_1(VAR_3);
 FUNC_7(VAR_3, VAR_4);
 FUNC_0(VAR_1, VAR_3);
 return 0;
}
