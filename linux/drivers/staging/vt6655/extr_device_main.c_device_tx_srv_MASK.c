
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int tcr; } ;
struct TYPE_4__ {scalar_t__ owner; unsigned char tsr0; unsigned char tsr1; } ;
struct vnt_tx_desc {TYPE_3__* td_info; TYPE_2__ td1; TYPE_1__ td0; struct vnt_tx_desc* next; } ;
struct vnt_private {scalar_t__* iTDUsed; struct vnt_tx_desc** apTailTD; } ;
struct TYPE_6__ {int flags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned char VAR_4 ;
 int FUNC_0 (struct vnt_private*,struct vnt_tx_desc*) ;
 int FUNC_1 (char*,int,unsigned char,unsigned char) ;
 int FUNC_2 (struct vnt_private*,TYPE_3__*,unsigned char,unsigned char) ;

__attribute__((used)) static int FUNC_3(struct vnt_private *VAR_5, unsigned int VAR_6)
{
 struct vnt_tx_desc *VAR_7;
 int VAR_8 = 0;
 unsigned char VAR_9;
 unsigned char VAR_10;

 for (VAR_7 = VAR_5->apTailTD[VAR_6]; VAR_5->iTDUsed[VAR_6] > 0; VAR_7 = VAR_7->next) {
  if (VAR_7->td0.owner == VAR_0)
   break;
  if (VAR_8++ > 15)
   break;

  VAR_9 = VAR_7->td0.tsr0;
  VAR_10 = VAR_7->td0.tsr1;


  if (VAR_7->td1.tcr & VAR_1) {
   if ((VAR_7->td_info->flags & VAR_2) != 0) {
    if (!(VAR_10 & VAR_4)) {
     if (VAR_9 != 0) {
      FUNC_1(" Tx[%d] OK but has error. tsr1[%02X] tsr0[%02X]\n",
        (int)VAR_6, VAR_10,
        VAR_9);
     }
    } else {
     FUNC_1(" Tx[%d] dropped & tsr1[%02X] tsr0[%02X]\n",
       (int)VAR_6, VAR_10, VAR_9);
    }
   }

   if (VAR_10 & VAR_4) {
    if ((VAR_7->td_info->flags & VAR_3) != 0) {
     FUNC_1(" Tx[%d] fail has error. tsr1[%02X] tsr0[%02X]\n",
       (int)VAR_6, VAR_10, VAR_9);
    }
   }

   FUNC_2(VAR_5, VAR_7->td_info, VAR_9, VAR_10);

   FUNC_0(VAR_5, VAR_7);
   VAR_5->iTDUsed[VAR_6]--;
  }
 }

 VAR_5->apTailTD[VAR_6] = VAR_7;

 return VAR_8;
}
