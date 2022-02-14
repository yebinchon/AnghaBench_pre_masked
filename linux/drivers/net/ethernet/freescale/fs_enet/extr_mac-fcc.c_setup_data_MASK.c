
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct fs_enet_private {int ev_err; int ev; int ev_napi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct fs_enet_private*) ;
 struct fs_enet_private* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_4)
{
 struct fs_enet_private *VAR_5 = FUNC_1(VAR_4);

 if (FUNC_0(VAR_5) != 0)
  return -VAR_0;

 VAR_5->ev_napi = VAR_3;
 VAR_5->ev = VAR_2;
 VAR_5->ev_err = VAR_1;

 return 0;
}
