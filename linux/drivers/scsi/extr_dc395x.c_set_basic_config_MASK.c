
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct AdapterCtlBlk {int sel_timeout; int config; TYPE_1__* scsi_host; } ;
struct TYPE_2__ {int this_id; } ;


 int VAR_0 ;
 int FUNC_0 (struct AdapterCtlBlk*,int ) ;
 int FUNC_1 (struct AdapterCtlBlk*,int ) ;
 int FUNC_2 (struct AdapterCtlBlk*,int ,int) ;
 int FUNC_3 (struct AdapterCtlBlk*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;

__attribute__((used)) static void FUNC_4(struct AdapterCtlBlk *VAR_20)
{
 u8 VAR_21;
 u16 VAR_22;
 FUNC_3(VAR_20, VAR_19, VAR_20->sel_timeout);
 if (VAR_20->config & VAR_6)
  VAR_21 = VAR_9 | VAR_7 | VAR_0 | VAR_8;
 else
  VAR_21 = VAR_9 | VAR_7 | VAR_0;

 FUNC_3(VAR_20, VAR_13, VAR_21);


 FUNC_3(VAR_20, VAR_14, 0x03);

 FUNC_3(VAR_20, VAR_15, VAR_20->scsi_host->this_id);

 FUNC_3(VAR_20, VAR_18, 0x00);

 VAR_22 = FUNC_0(VAR_20, VAR_12) & 0x7F;
 FUNC_2(VAR_20, VAR_12, VAR_22);

 VAR_22 = FUNC_0(VAR_20, VAR_10) & ~VAR_2;
 VAR_22 |=
     VAR_3 | VAR_1 ;
 FUNC_2(VAR_20, VAR_10, VAR_22);

 FUNC_1(VAR_20, VAR_17);

 FUNC_3(VAR_20, VAR_16, 0x7F);
 FUNC_3(VAR_20, VAR_11, VAR_5 | VAR_4

        );
}
