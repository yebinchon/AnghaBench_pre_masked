
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tool_ctx {int inspad_cnt; int inmsg_cnt; int peer_cnt; int inmw_cnt; int outmw_cnt; int outspad_cnt; int outmsg_cnt; struct tool_ctx* outmsgs; struct tool_ctx* peers; int * dbgfs_dir; struct tool_ctx* outspads; struct tool_ctx* outmws; struct tool_ctx* inmws; struct tool_ctx* inmsgs; struct tool_ctx* inspads; TYPE_1__* ntb; } ;
typedef int buf ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 void* FUNC_0 (char*,int *) ;
 int FUNC_1 (char*,int,int *,struct tool_ctx*,int *) ;
 char* FUNC_2 (int *) ;
 int FUNC_3 (char*,int,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
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
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;

__attribute__((used)) static void FUNC_4(struct tool_ctx *VAR_24)
{
 int VAR_25, VAR_26, VAR_27, VAR_28;
 char VAR_29[VAR_0];


 if (!VAR_5) {
  VAR_24->dbgfs_dir = ((void*)0);
  return;
 }

 VAR_24->dbgfs_dir = FUNC_0(FUNC_2(&VAR_24->ntb->dev),
        VAR_5);
 if (!VAR_24->dbgfs_dir)
  return;

 FUNC_1("port", 0600, VAR_24->dbgfs_dir,
       VAR_24, &VAR_22);

 FUNC_1("link", 0600, VAR_24->dbgfs_dir,
       VAR_24, &VAR_7);

 FUNC_1("db", 0600, VAR_24->dbgfs_dir,
       VAR_24, &VAR_2);

 FUNC_1("db_valid_mask", 0600, VAR_24->dbgfs_dir,
       VAR_24, &VAR_4);

 FUNC_1("db_mask", 0600, VAR_24->dbgfs_dir,
       VAR_24, &VAR_3);

 FUNC_1("db_event", 0600, VAR_24->dbgfs_dir,
       VAR_24, &VAR_1);

 FUNC_1("peer_db", 0600, VAR_24->dbgfs_dir,
       VAR_24, &VAR_15);

 FUNC_1("peer_db_mask", 0600, VAR_24->dbgfs_dir,
       VAR_24, &VAR_16);

 if (VAR_24->inspad_cnt != 0) {
  for (VAR_27 = 0; VAR_27 < VAR_24->inspad_cnt; VAR_27++) {
   FUNC_3(VAR_29, sizeof(VAR_29), "spad%d", VAR_27);

   FUNC_1(VAR_29, 0600, VAR_24->dbgfs_dir,
        &VAR_24->inspads[VAR_27], &VAR_23);
  }
 }

 if (VAR_24->inmsg_cnt != 0) {
  for (VAR_28 = 0; VAR_28 < VAR_24->inmsg_cnt; VAR_28++) {
   FUNC_3(VAR_29, sizeof(VAR_29), "msg%d", VAR_28);
   FUNC_1(VAR_29, 0600, VAR_24->dbgfs_dir,
        &VAR_24->inmsgs[VAR_28], &VAR_6);
  }

  FUNC_1("msg_sts", 0600, VAR_24->dbgfs_dir,
        VAR_24, &VAR_12);

  FUNC_1("msg_inbits", 0600, VAR_24->dbgfs_dir,
        VAR_24, &VAR_9);

  FUNC_1("msg_outbits", 0600, VAR_24->dbgfs_dir,
        VAR_24, &VAR_11);

  FUNC_1("msg_mask", 0600, VAR_24->dbgfs_dir,
        VAR_24, &VAR_10);

  FUNC_1("msg_event", 0600, VAR_24->dbgfs_dir,
        VAR_24, &VAR_8);
 }

 for (VAR_25 = 0; VAR_25 < VAR_24->peer_cnt; VAR_25++) {
  FUNC_3(VAR_29, sizeof(VAR_29), "peer%d", VAR_25);
  VAR_24->peers[VAR_25].dbgfs_dir =
   FUNC_0(VAR_29, VAR_24->dbgfs_dir);

  FUNC_1("port", 0600,
        VAR_24->peers[VAR_25].dbgfs_dir,
        &VAR_24->peers[VAR_25], &VAR_20);

  FUNC_1("link", 0200,
        VAR_24->peers[VAR_25].dbgfs_dir,
        &VAR_24->peers[VAR_25], &VAR_18);

  FUNC_1("link_event", 0200,
      VAR_24->peers[VAR_25].dbgfs_dir,
      &VAR_24->peers[VAR_25], &VAR_17);

  for (VAR_26 = 0; VAR_26 < VAR_24->peers[VAR_25].inmw_cnt; VAR_26++) {
   FUNC_3(VAR_29, sizeof(VAR_29), "mw_trans%d", VAR_26);
   FUNC_1(VAR_29, 0600,
         VAR_24->peers[VAR_25].dbgfs_dir,
         &VAR_24->peers[VAR_25].inmws[VAR_26],
         &VAR_13);
  }

  for (VAR_26 = 0; VAR_26 < VAR_24->peers[VAR_25].outmw_cnt; VAR_26++) {
   FUNC_3(VAR_29, sizeof(VAR_29), "peer_mw_trans%d", VAR_26);
   FUNC_1(VAR_29, 0600,
         VAR_24->peers[VAR_25].dbgfs_dir,
         &VAR_24->peers[VAR_25].outmws[VAR_26],
         &VAR_19);
  }

  for (VAR_27 = 0; VAR_27 < VAR_24->peers[VAR_25].outspad_cnt; VAR_27++) {
   FUNC_3(VAR_29, sizeof(VAR_29), "spad%d", VAR_27);

   FUNC_1(VAR_29, 0600,
         VAR_24->peers[VAR_25].dbgfs_dir,
         &VAR_24->peers[VAR_25].outspads[VAR_27],
         &VAR_21);
  }

  for (VAR_28 = 0; VAR_28 < VAR_24->peers[VAR_25].outmsg_cnt; VAR_28++) {
   FUNC_3(VAR_29, sizeof(VAR_29), "msg%d", VAR_28);
   FUNC_1(VAR_29, 0600,
         VAR_24->peers[VAR_25].dbgfs_dir,
         &VAR_24->peers[VAR_25].outmsgs[VAR_28],
         &VAR_14);
  }
 }
}
