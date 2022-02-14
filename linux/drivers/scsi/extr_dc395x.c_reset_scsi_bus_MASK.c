
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct AdapterCtlBlk {int acb_flag; } ;


 int VAR_0 ;
 int FUNC_0 (struct AdapterCtlBlk*,int ) ;
 int FUNC_1 (struct AdapterCtlBlk*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,char*,struct AdapterCtlBlk*) ;

__attribute__((used)) static void FUNC_3(struct AdapterCtlBlk *VAR_6)
{
 FUNC_2(VAR_0, "reset_scsi_bus: acb=%p\n", VAR_6);
 VAR_6->acb_flag |= VAR_3;
 FUNC_1(VAR_6, VAR_4, VAR_1);

 while (!(FUNC_0(VAR_6, VAR_5) & VAR_2))
               ;
}
