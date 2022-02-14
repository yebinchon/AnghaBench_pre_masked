
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct fwtty_port {int dummy; } ;
struct TYPE_4__ {int plug_req; } ;
struct fwtty_peer {scalar_t__ state; int lock; int unit; int work; int workfn; struct fwtty_port* port; TYPE_1__ work_params; } ;
struct TYPE_5__ {int code; int len; } ;
struct fwserial_mgmt_pkt {TYPE_2__ hdr; int plug_rsp; int plug_req; } ;
struct TYPE_6__ {unsigned long long offset; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_3__ VAR_11 ;
 int FUNC_1 (struct fwtty_port*,int) ;
 int FUNC_2 (struct fwtty_peer*,int *) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int *,char*,...) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (struct fwtty_port*) ;
 size_t FUNC_7 (int ) ;
 struct fwtty_port* FUNC_8 (struct fwtty_peer*) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int VAR_12 ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct fwtty_peer *VAR_13,
         struct fwserial_mgmt_pkt *VAR_14,
         unsigned long long VAR_15,
         size_t VAR_16)
{
 struct fwtty_port *VAR_17 = ((void*)0);
 bool VAR_18 = 0;
 int VAR_19;

 if (VAR_15 != VAR_11.offset || VAR_16 < sizeof(VAR_14->hdr))
  return VAR_5;

 if (VAR_16 != FUNC_0(VAR_14->hdr.len) ||
     VAR_16 != FUNC_7(VAR_14->hdr.code))
  return VAR_8;

 FUNC_10(&VAR_13->lock);
 if (VAR_13->state == VAR_0) {






  FUNC_4(&VAR_13->unit, "peer already removed\n");
  FUNC_11(&VAR_13->lock);
  return VAR_5;
 }

 VAR_19 = VAR_6;

 FUNC_3(&VAR_13->unit, "mgmt: hdr.code: %04hx\n", VAR_14->hdr.code);

 switch (FUNC_0(VAR_14->hdr.code) & VAR_3) {
 case 131:
  if (FUNC_12(&VAR_13->work)) {
   FUNC_4(&VAR_13->unit, "plug req: busy\n");
   VAR_19 = VAR_7;

  } else {
   VAR_13->work_params.plug_req = VAR_14->plug_req;
   VAR_13->workfn = VAR_9;
   FUNC_9(VAR_12, &VAR_13->work);
  }
  break;

 case 130:
  if (VAR_13->state != VAR_1) {
   VAR_19 = VAR_7;

  } else if (FUNC_0(VAR_14->hdr.code) & VAR_4) {
   FUNC_5(&VAR_13->unit, "NACK plug rsp\n");
   VAR_17 = FUNC_8(VAR_13);

  } else {
   struct fwtty_port *VAR_20 = VAR_13->port;

   FUNC_2(VAR_13, &VAR_14->plug_rsp);
   FUNC_11(&VAR_13->lock);

   FUNC_6(VAR_20);
   FUNC_10(&VAR_13->lock);
  }
  break;

 case 129:
  if (FUNC_12(&VAR_13->work)) {
   FUNC_4(&VAR_13->unit, "unplug req: busy\n");
   VAR_19 = VAR_7;
  } else {
   VAR_13->workfn = VAR_10;
   FUNC_9(VAR_12, &VAR_13->work);
  }
  break;

 case 128:
  if (VAR_13->state != VAR_2) {
   VAR_19 = VAR_7;
  } else {
   if (FUNC_0(VAR_14->hdr.code) & VAR_4)
    FUNC_5(&VAR_13->unit, "NACK unplug?\n");
   VAR_17 = FUNC_8(VAR_13);
   VAR_18 = 1;
  }
  break;

 default:
  FUNC_4(&VAR_13->unit, "unknown mgmt code %d\n",
     FUNC_0(VAR_14->hdr.code));
  VAR_19 = VAR_8;
 }
 FUNC_11(&VAR_13->lock);

 if (VAR_17)
  FUNC_1(VAR_17, VAR_18);

 return VAR_19;
}
