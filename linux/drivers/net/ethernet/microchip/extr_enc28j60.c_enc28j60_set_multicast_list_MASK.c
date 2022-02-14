
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int flags; } ;
struct enc28j60_net {int rxfilter; int setrx_work; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct net_device*,char*,...) ;
 int FUNC_1 (struct net_device*) ;
 struct enc28j60_net* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct enc28j60_net*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_5)
{
 struct enc28j60_net *VAR_6 = FUNC_2(VAR_5);
 int VAR_7 = VAR_6->rxfilter;

 if (VAR_5->flags & VAR_1) {
  if (FUNC_3(VAR_6))
   FUNC_0(VAR_5, "promiscuous mode\n");
  VAR_6->rxfilter = VAR_4;
 } else if ((VAR_5->flags & VAR_0) || !FUNC_1(VAR_5)) {
  if (FUNC_3(VAR_6))
   FUNC_0(VAR_5, "%smulticast mode\n",
        (VAR_5->flags & VAR_0) ? "all-" : "");
  VAR_6->rxfilter = VAR_2;
 } else {
  if (FUNC_3(VAR_6))
   FUNC_0(VAR_5, "normal mode\n");
  VAR_6->rxfilter = VAR_3;
 }

 if (VAR_7 != VAR_6->rxfilter)
  FUNC_4(&VAR_6->setrx_work);
}
