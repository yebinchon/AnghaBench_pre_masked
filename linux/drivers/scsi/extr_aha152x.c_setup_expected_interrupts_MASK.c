
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct Scsi_Host {int dummy; } ;
struct TYPE_4__ {int phase; } ;
struct TYPE_6__ {TYPE_1__ SCp; } ;
struct TYPE_5__ {int in_intr; } ;


 TYPE_3__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_2__* FUNC_0 (struct Scsi_Host*) ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;

__attribute__((used)) static int FUNC_4(struct Scsi_Host *VAR_24)
{
 if(VAR_0) {
  VAR_0->SCp.phase |= 1 << 16;

  if(VAR_0->SCp.phase & VAR_22) {
   FUNC_2(VAR_19, VAR_16);
   FUNC_2(VAR_17, VAR_10 | (VAR_1 ? VAR_9 : 0));
   FUNC_2(VAR_18, VAR_11);
  } else {
   FUNC_2(VAR_17, (VAR_0->SCp.phase & VAR_23) ? VAR_12 : 0);
   FUNC_2(VAR_18, VAR_6 | VAR_8 | VAR_7 | VAR_5);
  }
 } else if(VAR_20==VAR_21) {
  FUNC_2(VAR_17, 0);
  FUNC_2(VAR_18, VAR_6 | VAR_8 | VAR_7 | VAR_5);
 } else {
  FUNC_2(VAR_17, VAR_1 ? VAR_9 : 0);
  FUNC_2(VAR_18, VAR_8 | ( (VAR_15||VAR_4) ? VAR_5 : 0));
 }

 if(!FUNC_0(VAR_24)->in_intr)
  FUNC_1(VAR_2, VAR_13);

 return FUNC_3(VAR_3, VAR_14);
}
