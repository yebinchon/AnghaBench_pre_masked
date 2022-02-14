
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sky2_port {unsigned int port; scalar_t__ duplex; size_t flow_status; int speed; int netdev; struct sky2_hw* hw; } ;
struct sky2_hw {int watchdog_timer; } ;


 scalar_t__ VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (struct sky2_hw*,unsigned int,int ,int ) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sky2_port*,int ,int ,char*,int ,char*,char const*) ;
 int FUNC_5 (struct sky2_port*) ;
 int FUNC_6 (struct sky2_port*) ;
 int FUNC_7 (struct sky2_hw*,int ,int) ;

__attribute__((used)) static void FUNC_8(struct sky2_port *VAR_9)
{
 struct sky2_hw *VAR_10 = VAR_9->hw;
 unsigned VAR_11 = VAR_9->port;
 static const char *VAR_12[] = {
  [130] = "none",
  [128] = "tx",
  [129] = "rx",
  [131] = "both",
 };

 FUNC_6(VAR_9);

 FUNC_5(VAR_9);

 FUNC_1(VAR_10, VAR_11, VAR_5, VAR_6);

 FUNC_3(VAR_9->netdev);

 FUNC_2(&VAR_10->watchdog_timer, VAR_7 + 1);


 FUNC_7(VAR_10, FUNC_0(VAR_11, VAR_4),
      VAR_3 | VAR_1 | VAR_2);

 FUNC_4(VAR_9, VAR_8, VAR_9->netdev,
     "Link is up at %d Mbps, %s duplex, flow control %s\n",
     VAR_9->speed,
     VAR_9->duplex == VAR_0 ? "full" : "half",
     VAR_12[VAR_9->flow_status]);
}
