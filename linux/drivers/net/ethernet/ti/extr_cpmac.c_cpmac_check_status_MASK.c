
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct cpmac_priv {int regs; int reset_pending; int reset_work; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int) ;
 scalar_t__ FUNC_5 () ;
 struct cpmac_priv* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*,char*,int,int,int) ;
 scalar_t__ FUNC_8 (struct cpmac_priv*) ;
 int FUNC_9 (struct cpmac_priv*) ;
 int FUNC_10 (struct net_device*) ;
 scalar_t__ FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int ) ;

__attribute__((used)) static void FUNC_13(struct net_device *VAR_2)
{
 struct cpmac_priv *VAR_3 = FUNC_6(VAR_2);

 u32 VAR_4 = FUNC_3(VAR_3->regs, VAR_1);
 int VAR_5 = (VAR_4 >> 8) & 7;
 int VAR_6 = (VAR_4 >> 12) & 15;
 int VAR_7 = (VAR_4 >> 16) & 7;
 int VAR_8 = (VAR_4 >> 20) & 15;

 if (VAR_6 || VAR_8) {
  if (FUNC_8(VAR_3) && FUNC_5()) {



   if (VAR_6)
    FUNC_7(VAR_2, "host error %d on rx "
     "channel %d (macstatus %08x), resetting\n",
     VAR_6, VAR_5, VAR_4);
   if (VAR_8)
    FUNC_7(VAR_2, "host error %d on tx "
     "channel %d (macstatus %08x), resetting\n",
     VAR_8, VAR_7, VAR_4);
  }

  FUNC_10(VAR_2);
  FUNC_2(VAR_2);
  if (FUNC_11(&VAR_3->reset_work))
   FUNC_0(&VAR_3->reset_pending);
  if (FUNC_12(FUNC_9(VAR_3)))
   FUNC_1(VAR_2);
 }
 FUNC_4(VAR_3->regs, VAR_0, 0xff);
}
