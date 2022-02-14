
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct qedf_rport {int rport_lock; int flags; int peers; int dev_type; struct fc_rport* rport; struct fc_rport_priv* rdata; struct qedf_ctx* qedf; } ;
struct qedf_ctx {int num_offloads; int hba_lock; int dbg_ctx; int fcports; } ;
struct TYPE_2__ {int roles; int port_id; } ;
struct fc_rport_priv {int flags; TYPE_1__ ids; int kref; int spp_type; struct fc_rport* rport; } ;
struct fc_rport_libfc_priv {int dummy; } ;
struct fc_rport {struct fc_rport_libfc_priv* dd_data; int port_id; } ;
struct fc_lport {int dummy; } ;
typedef enum fc_rport_event { ____Placeholder_fc_rport_event } fc_rport_event ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,int ,char*,...) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int *,char*,...) ;





 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 struct qedf_ctx* FUNC_10 (struct fc_lport*) ;
 int FUNC_11 (struct qedf_ctx*,struct qedf_rport*) ;
 int FUNC_12 (struct qedf_ctx*,struct qedf_rport*) ;
 int FUNC_13 (struct qedf_ctx*,struct qedf_rport*) ;
 int FUNC_14 (int ,int *) ;
 int FUNC_15 (int *,unsigned long) ;
 int FUNC_16 (int *,unsigned long) ;
 int FUNC_17 (int ,int *) ;

__attribute__((used)) static void FUNC_18(struct fc_lport *VAR_11,
    struct fc_rport_priv *VAR_12,
    enum fc_rport_event VAR_13)
{
 struct qedf_ctx *VAR_14 = FUNC_10(VAR_11);
 struct fc_rport *VAR_15 = VAR_12->rport;
 struct fc_rport_libfc_priv *VAR_16;
 struct qedf_rport *VAR_17;
 u32 VAR_18;
 int VAR_19;
 unsigned long VAR_20;

 FUNC_1(&(VAR_14->dbg_ctx), VAR_5, "event = %d, "
     "port_id = 0x%x\n", VAR_13, VAR_12->ids.port_id);

 switch (VAR_13) {
 case 129:
  if (!VAR_15) {
   FUNC_2(&(VAR_14->dbg_ctx), "rport is NULL.\n");
   break;
  }

  VAR_16 = VAR_15->dd_data;
  VAR_17 = (struct qedf_rport *)&VAR_16[1];
  VAR_17->qedf = VAR_14;

  if (FUNC_5(&VAR_14->num_offloads) >= VAR_6) {
   FUNC_0(&(VAR_14->dbg_ctx), "Not offloading "
       "portid=0x%x as max number of offloaded sessions "
       "reached.\n", VAR_12->ids.port_id);
   return;
  }





  if (FUNC_17(VAR_7, &VAR_17->flags)) {
   FUNC_2(&(VAR_14->dbg_ctx), "Session already "
       "offloaded, portid=0x%x.\n",
       VAR_12->ids.port_id);
   return;
  }

  if (VAR_15->port_id == VAR_0) {






   FUNC_2(&(VAR_14->dbg_ctx), "rport struct does not "
       "exist for dir server port_id=%x\n",
       VAR_12->ids.port_id);
   break;
  }

  if (VAR_12->spp_type != VAR_4) {
   FUNC_1(&(VAR_14->dbg_ctx), VAR_5,
       "Not offloading since spp type isn't FCP\n");
   break;
  }
  if (!(VAR_12->ids.roles & VAR_2)) {
   FUNC_1(&(VAR_14->dbg_ctx), VAR_5,
       "Not FCP target so not offloading\n");
   break;
  }


  FUNC_7(&VAR_12->kref);
  VAR_17->rdata = VAR_12;
  VAR_17->rport = VAR_15;

  VAR_19 = FUNC_11(VAR_14, VAR_17);
  if (VAR_19) {
   FUNC_12(VAR_14, VAR_17);
   break;
  }


  if (VAR_12->flags & VAR_3 &&
      VAR_12->ids.roles & VAR_2 &&
      !(VAR_12->ids.roles & VAR_1)) {
   VAR_17->dev_type = VAR_9;
   FUNC_1(&(VAR_14->dbg_ctx), VAR_5,
       "portid=%06x is a TAPE device.\n",
       VAR_12->ids.port_id);
  } else {
   VAR_17->dev_type = VAR_8;
  }

  VAR_19 = FUNC_13(VAR_14, VAR_17);
  if (VAR_19) {
   FUNC_12(VAR_14, VAR_17);
   break;
  }


  FUNC_15(&VAR_14->hba_lock, VAR_20);
  FUNC_8(&VAR_17->peers, &VAR_14->fcports);
  FUNC_16(&VAR_14->hba_lock, VAR_20);





  FUNC_14(VAR_7, &VAR_17->flags);
  FUNC_4(&VAR_14->num_offloads);

  break;
 case 131:
 case 132:
 case 128:
  VAR_18 = VAR_12->ids.port_id;
  if (VAR_18 == VAR_0)
   break;

  if (!VAR_15) {
   FUNC_1(&(VAR_14->dbg_ctx), VAR_5,
       "port_id=%x - rport notcreated Yet!!\n", VAR_18);
   break;
  }
  VAR_16 = VAR_15->dd_data;




  VAR_17 = (struct qedf_rport *)&VAR_16[1];

  FUNC_15(&VAR_17->rport_lock, VAR_20);

  if (FUNC_17(VAR_7, &VAR_17->flags) &&
      !FUNC_17(VAR_10,
      &VAR_17->flags)) {
   FUNC_14(VAR_10,
    &VAR_17->flags);
   FUNC_16(&VAR_17->rport_lock, VAR_20);
   FUNC_12(VAR_14, VAR_17);




   FUNC_15(&VAR_14->hba_lock, VAR_20);
   FUNC_9(&VAR_17->peers);
   FUNC_16(&VAR_14->hba_lock, VAR_20);

   FUNC_6(VAR_10,
       &VAR_17->flags);
   FUNC_3(&VAR_14->num_offloads);
  } else {
   FUNC_16(&VAR_17->rport_lock, VAR_20);
  }
  break;

 case 130:
  break;
 }
}
