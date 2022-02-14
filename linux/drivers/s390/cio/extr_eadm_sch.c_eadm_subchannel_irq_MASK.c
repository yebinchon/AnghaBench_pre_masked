
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct eadm_scsw {int stctl; int eswf; int fctl; scalar_t__ aob; } ;
struct TYPE_6__ {struct eadm_scsw eadm; } ;
struct TYPE_7__ {TYPE_1__ scsw; } ;
struct subchannel {TYPE_2__ schib; } ;
struct TYPE_8__ {scalar_t__ r; } ;
struct TYPE_9__ {TYPE_3__ erw; } ;
struct TYPE_10__ {TYPE_4__ eadm; } ;
struct irb {TYPE_5__ esw; } ;
struct eadm_private {scalar_t__ state; scalar_t__ completion; } ;
struct aob {int dummy; } ;
typedef int blk_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,struct irb*,int) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct subchannel*,int ) ;
 int FUNC_4 (struct subchannel*,int ) ;
 struct eadm_private* FUNC_5 (struct subchannel*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct aob*,int ) ;
 struct irb* FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct subchannel *VAR_12)
{
 struct eadm_private *VAR_13 = FUNC_5(VAR_12);
 struct eadm_scsw *VAR_14 = &VAR_12->schib.scsw.eadm;
 struct irb *VAR_15 = FUNC_8(&VAR_11);
 blk_status_t VAR_16 = VAR_1;

 FUNC_0(6, "irq");
 FUNC_1(6, VAR_15, sizeof(*VAR_15));

 FUNC_6(VAR_6);

 if ((VAR_14->stctl & (VAR_9 | VAR_10))
     && VAR_14->eswf == 1 && VAR_15->esw.eadm.erw.r)
  VAR_16 = VAR_0;

 if (VAR_14->fctl & VAR_8)
  VAR_16 = VAR_2;

 FUNC_4(VAR_12, 0);

 if (VAR_13->state != VAR_3) {
  FUNC_0(1, "irq unsol");
  FUNC_1(1, VAR_15, sizeof(*VAR_15));
  VAR_13->state = VAR_5;
  FUNC_3(VAR_12, VAR_7);
  return;
 }
 FUNC_7((struct aob *)(unsigned long)VAR_14->aob, VAR_16);
 VAR_13->state = VAR_4;

 if (VAR_13->completion)
  FUNC_2(VAR_13->completion);
}
