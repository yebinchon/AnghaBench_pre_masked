
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_task {int dummy; } ;
struct iscsi_nopout {int opcode; void* ttt; void* itt; int lun; int flags; } ;
struct iscsi_nopin {void* ttt; int lun; } ;
struct iscsi_hdr {int dummy; } ;
struct iscsi_conn {int last_ping; struct iscsi_task* ping_task; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 struct iscsi_task* FUNC_0 (struct iscsi_conn*,struct iscsi_hdr*,int *,int ) ;
 int FUNC_1 (int ,struct iscsi_conn*,char*) ;
 int VAR_7 ;
 int FUNC_2 (struct iscsi_nopout*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct iscsi_conn *VAR_8, struct iscsi_nopin *VAR_9)
{
        struct iscsi_nopout VAR_10;
 struct iscsi_task *VAR_11;

 if (!VAR_9 && VAR_8->ping_task)
  return -VAR_0;

 FUNC_2(&VAR_10, 0, sizeof(struct iscsi_nopout));
 VAR_10.opcode = VAR_4 | VAR_3;
 VAR_10.flags = VAR_2;

 if (VAR_9) {
  VAR_10.lun = VAR_9->lun;
  VAR_10.ttt = VAR_9->ttt;
  VAR_10.itt = VAR_6;
 } else
  VAR_10.ttt = VAR_6;

 VAR_11 = FUNC_0(VAR_8, (struct iscsi_hdr *)&VAR_10, ((void*)0), 0);
 if (!VAR_11) {
  FUNC_1(VAR_5, VAR_8, "Could not send nopout\n");
  return -VAR_1;
 } else if (!VAR_9) {

  VAR_8->ping_task = VAR_11;
  VAR_8->last_ping = VAR_7;
 }

 return 0;
}
