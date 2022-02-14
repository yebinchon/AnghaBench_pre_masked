
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct Scsi_Host {int dummy; } ;
struct TYPE_3__ {int phase; } ;
struct TYPE_4__ {TYPE_1__ SCp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static void FUNC_3(struct Scsi_Host *VAR_14)
{
 while(VAR_6<VAR_5) {
  if (FUNC_2(VAR_9, VAR_8))
   return;

  if (VAR_6==VAR_5-1) {

   FUNC_1(VAR_10, VAR_2);
  }


  if (FUNC_0(VAR_6) & VAR_4)
   VAR_3->SCp.phase |= VAR_12;

  if (FUNC_0(VAR_6)==VAR_0)
   VAR_3->SCp.phase |= VAR_11;

  if (FUNC_0(VAR_6)==VAR_1)
   VAR_3->SCp.phase |= VAR_13;

  FUNC_1(VAR_7, FUNC_0(VAR_6++));
 }
}
