
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int priv_flags; } ;
struct ksz_switch {int member; } ;
struct ksz_hw {int promiscuous; int features; struct ksz_switch* ksz_switch; } ;
struct TYPE_2__ {int first_port; } ;
struct dev_priv {int promiscuous; TYPE_1__ port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ksz_hw*) ;
 int FUNC_1 (struct ksz_hw*,int) ;
 int FUNC_2 (struct ksz_hw*,int,int ) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_3, struct dev_priv *VAR_4,
 struct ksz_hw *VAR_5, int VAR_6)
{
 if (VAR_6 != VAR_4->promiscuous) {
  u8 VAR_7 = VAR_5->promiscuous;

  if (VAR_6)
   ++VAR_5->promiscuous;
  else
   --VAR_5->promiscuous;
  VAR_4->promiscuous = VAR_6;


  if (VAR_5->promiscuous <= 1 && VAR_7 <= 1)
   FUNC_1(VAR_5, VAR_5->promiscuous);





  if ((VAR_5->features & VAR_2) && !VAR_6 &&
      (VAR_3->priv_flags & VAR_0)) {
   struct ksz_switch *VAR_8 = VAR_5->ksz_switch;
   int VAR_9 = VAR_4->port.first_port;

   FUNC_2(VAR_5, VAR_9, VAR_1);
   VAR_9 = 1 << VAR_9;
   if (VAR_8->member & VAR_9) {
    VAR_8->member &= ~VAR_9;
    FUNC_0(VAR_5);
   }
  }
 }
}
