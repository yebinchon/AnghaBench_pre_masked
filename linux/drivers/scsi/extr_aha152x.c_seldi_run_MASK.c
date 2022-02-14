
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct Scsi_Host {int this_id; } ;
struct TYPE_8__ {int * syncrate; } ;
struct TYPE_6__ {int phase; } ;
struct TYPE_7__ {TYPE_1__ SCp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int ) ;
 TYPE_4__* FUNC_3 (struct Scsi_Host*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_6 (int *,TYPE_2__*) ;
 int VAR_16 ;
 int FUNC_7 (int ,TYPE_2__*,char*) ;
 int FUNC_8 (int ,struct Scsi_Host*,char*,int) ;

__attribute__((used)) static void FUNC_9(struct Scsi_Host *VAR_17)
{
 int VAR_18;
 int VAR_19;
 unsigned long VAR_20;

 FUNC_4(VAR_12, 0);
 FUNC_4(VAR_14, VAR_2);
 FUNC_4(VAR_15, VAR_0);
 FUNC_4(VAR_15, VAR_1);

 if(VAR_3) {
  if(!(VAR_3->SCp.phase & VAR_16))
   FUNC_7(VAR_6, VAR_3,
        "command should not have been issued yet\n");

  FUNC_0(VAR_20);
  FUNC_6(&VAR_5, VAR_3);
  FUNC_1(VAR_20);

  VAR_3 = ((void*)0);
 }

 if (!VAR_4)
  return;

 VAR_9=-1;

 VAR_18 = FUNC_2(VAR_13) & ~(1 << VAR_17->this_id);

 if (VAR_18==0) {
  FUNC_8(VAR_7, VAR_17,
        "target id unknown (%02x)\n", VAR_18);
  return;
 }

 for(VAR_19=7; !(VAR_18 & (1 << VAR_19)); VAR_19--)
  ;

 if(VAR_18 & ~(1 << VAR_19)) {
  FUNC_8(VAR_7, VAR_17,
        "multiple targets reconnected (%02x)\n", VAR_18);
 }


 FUNC_4(VAR_10, (VAR_17->this_id << VAR_8) | VAR_19);
 FUNC_4(VAR_11, 0);

 FUNC_5(FUNC_3(VAR_17)->syncrate[VAR_19]);

 VAR_9=VAR_19;
}
