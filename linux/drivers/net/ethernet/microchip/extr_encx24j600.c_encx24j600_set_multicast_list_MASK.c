
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int flags; } ;
struct encx24j600_priv {int rxfilter; int setrx_work; int kworker; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int *) ;
 int VAR_5 ;
 int FUNC_1 (struct net_device*) ;
 struct encx24j600_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct encx24j600_priv*,int ,struct net_device*,char*,...) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_6)
{
 struct encx24j600_priv *VAR_7 = FUNC_2(VAR_6);
 int VAR_8 = VAR_7->rxfilter;

 if (VAR_6->flags & VAR_1) {
  FUNC_3(VAR_7, VAR_5, VAR_6, "promiscuous mode\n");
  VAR_7->rxfilter = VAR_4;
 } else if ((VAR_6->flags & VAR_0) || !FUNC_1(VAR_6)) {
  FUNC_3(VAR_7, VAR_5, VAR_6, "%smulticast mode\n",
     (VAR_6->flags & VAR_0) ? "all-" : "");
  VAR_7->rxfilter = VAR_2;
 } else {
  FUNC_3(VAR_7, VAR_5, VAR_6, "normal mode\n");
  VAR_7->rxfilter = VAR_3;
 }

 if (VAR_8 != VAR_7->rxfilter)
  FUNC_0(&VAR_7->kworker, &VAR_7->setrx_work);
}
