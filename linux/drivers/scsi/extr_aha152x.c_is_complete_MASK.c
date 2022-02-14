
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct Scsi_Host {int dummy; } ;
struct TYPE_9__ {scalar_t__ service; scalar_t__ in_intr; int * time; int * count_trans; int * count; } ;
struct TYPE_6__ {int phase; } ;
struct TYPE_8__ {TYPE_1__ SCp; } ;
struct TYPE_7__ {int (* run ) (struct Scsi_Host*) ;int (* init ) (struct Scsi_Host*) ;scalar_t__ spio; int (* end ) (struct Scsi_Host*) ;} ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int ) ;
 TYPE_4__* FUNC_3 (struct Scsi_Host*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 size_t VAR_13 ;
 int VAR_14 ;
 int FUNC_6 (struct Scsi_Host*,char*) ;
 unsigned long VAR_15 ;
 int FUNC_7 (int ,TYPE_3__*,char*,size_t) ;
 int FUNC_8 (struct Scsi_Host*) ;
 int VAR_16 ;
 TYPE_2__* VAR_17 ;
 int FUNC_9 (struct Scsi_Host*) ;
 int FUNC_10 (struct Scsi_Host*) ;
 int FUNC_11 (struct Scsi_Host*) ;
 int FUNC_12 (struct Scsi_Host*) ;

__attribute__((used)) static void FUNC_13(struct Scsi_Host *VAR_18)
{
 int VAR_19;
 unsigned long VAR_20;
 int VAR_21;

 if(!VAR_18)
  return;

 FUNC_0(VAR_20);

 if( FUNC_3(VAR_18)->service==0 ) {
  FUNC_1(VAR_20);
  return;
 }

 FUNC_3(VAR_18)->service = 0;

 if(FUNC_3(VAR_18)->in_intr) {
  FUNC_1(VAR_20);

  FUNC_6(VAR_18, "bottom-half already running!?");
 }
 FUNC_3(VAR_18)->in_intr++;





 do {
  unsigned long VAR_22 = VAR_15;
  FUNC_1(VAR_20);

  VAR_19=FUNC_12(VAR_18);





  if(VAR_6!=VAR_13 && VAR_17[VAR_6].end)
   VAR_17[VAR_6].end(VAR_18);






  if(VAR_17[VAR_6].spio && !VAR_17[VAR_13].spio) {
   FUNC_5(VAR_14, VAR_0);
   FUNC_5(VAR_2, 0);
   if(VAR_1)
    VAR_1->SCp.phase &= ~VAR_16;
  }





  if(VAR_19) {
   FUNC_5(VAR_11, VAR_8);
   FUNC_5(VAR_9, FUNC_2(VAR_9) & VAR_7);
   FUNC_5(VAR_12, VAR_5);
  }






  if(!VAR_17[VAR_6].spio && VAR_17[VAR_13].spio) {
   FUNC_5(VAR_2, 0);
   FUNC_5(VAR_14, VAR_0|VAR_10);
   if(VAR_1)
    VAR_1->SCp.phase |= VAR_16;
  }





  if(VAR_6!=VAR_13 && VAR_17[VAR_13].init)
   VAR_17[VAR_13].init(VAR_18);





  if(VAR_17[VAR_13].run)
   VAR_17[VAR_13].run(VAR_18);
  else
   FUNC_7(VAR_4, VAR_1,
        "unexpected state (%x)\n", VAR_13);







  FUNC_0(VAR_20);
  VAR_21=FUNC_8(VAR_18);







 } while(VAR_21);





 FUNC_3(VAR_18)->in_intr--;
 FUNC_4(VAR_2, VAR_3);
 FUNC_1(VAR_20);
}
