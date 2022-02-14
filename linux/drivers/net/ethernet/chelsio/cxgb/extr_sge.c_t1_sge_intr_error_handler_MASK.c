
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int pkt_mismatch; int pkt_too_big; int freelistQ_empty; int respQ_overflow; int respQ_empty; } ;
struct sge {TYPE_3__ stats; struct adapter* adapter; } ;
struct adapter {scalar_t__ regs; int name; TYPE_2__* port; } ;
struct TYPE_5__ {TYPE_1__* dev; } ;
struct TYPE_4__ {int hw_features; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct sge*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct adapter*) ;
 int FUNC_4 (int,scalar_t__) ;

int FUNC_5(struct sge *VAR_8)
{
 struct adapter *VAR_9 = VAR_8->adapter;
 u32 VAR_10 = FUNC_2(VAR_9->regs + VAR_0);

 if (VAR_9->port[0].dev->hw_features & VAR_6)
  VAR_10 &= ~VAR_3;
 if (VAR_10 & VAR_4)
  VAR_8->stats.respQ_empty++;
 if (VAR_10 & VAR_5) {
  VAR_8->stats.respQ_overflow++;
  FUNC_1("%s: SGE response queue overflow\n",
    VAR_9->name);
 }
 if (VAR_10 & VAR_1) {
  VAR_8->stats.freelistQ_empty++;
  FUNC_0(VAR_8);
 }
 if (VAR_10 & VAR_3) {
  VAR_8->stats.pkt_too_big++;
  FUNC_1("%s: SGE max packet size exceeded\n",
    VAR_9->name);
 }
 if (VAR_10 & VAR_2) {
  VAR_8->stats.pkt_mismatch++;
  FUNC_1("%s: SGE packet mismatch\n", VAR_9->name);
 }
 if (VAR_10 & VAR_7)
  FUNC_3(VAR_9);

 FUNC_4(VAR_10, VAR_9->regs + VAR_0);
 return 0;
}
