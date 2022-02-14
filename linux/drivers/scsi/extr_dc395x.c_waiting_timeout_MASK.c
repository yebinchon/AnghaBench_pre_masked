
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct AdapterCtlBlk {int scsi_host; } ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned long) ;
 int FUNC_1 (int ,unsigned long) ;
 struct AdapterCtlBlk* VAR_1 ;
 int FUNC_2 (int ,char*,struct AdapterCtlBlk*) ;
 struct AdapterCtlBlk* FUNC_3 (int ,struct timer_list*,int ) ;
 int FUNC_4 (struct AdapterCtlBlk*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_5(struct timer_list *VAR_3)
{
 unsigned long VAR_4;
 struct AdapterCtlBlk *VAR_5 = FUNC_3(VAR_5, VAR_3, VAR_2);
 FUNC_2(VAR_0,
  "waiting_timeout: Queue woken up by timer. acb=%p\n", VAR_5);
 FUNC_0(VAR_5->scsi_host, VAR_4);
 FUNC_4(VAR_5);
 FUNC_1(VAR_5->scsi_host, VAR_4);
}
