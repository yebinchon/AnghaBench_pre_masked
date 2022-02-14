
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int length; int response_code; } ;
struct TYPE_5__ {int length; scalar_t__ flags; int type; } ;
struct TYPE_6__ {int event_id; int blk_cnt; unsigned long asa; int fbn; int dbs; scalar_t__ lbn; scalar_t__ event_status; int asa_size; int data_id; int event_qual; TYPE_1__ hdr; } ;
struct sdias_sccb {TYPE_3__ hdr; int callback; int status; int command; struct sdias_sccb* sccb; TYPE_2__ evbuf; } ;
struct sdias_evbuf {int dummy; } ;
struct sclp_req {TYPE_3__ hdr; int callback; int status; int command; struct sclp_req* sccb; TYPE_2__ evbuf; } ;
typedef int request ;
struct TYPE_8__ {int event_status; int blk_cnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct sdias_sccb*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int) ;
 struct sdias_sccb* VAR_7 ;
 int VAR_8 ;
 TYPE_4__ VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (struct sdias_sccb*) ;

int FUNC_6(void *VAR_11, int VAR_12, int VAR_13)
{
 struct sdias_sccb *VAR_14 = VAR_7;
 struct sclp_req VAR_15;
 int VAR_16;

 FUNC_2(&VAR_10);

 FUNC_1(VAR_14, 0, sizeof(*VAR_14));
 FUNC_1(&VAR_15, 0, sizeof(VAR_15));

 VAR_14->hdr.length = sizeof(*VAR_14);
 VAR_14->evbuf.hdr.length = sizeof(struct sdias_evbuf);
 VAR_14->evbuf.hdr.type = VAR_1;
 VAR_14->evbuf.hdr.flags = 0;
 VAR_14->evbuf.event_qual = VAR_6;
 VAR_14->evbuf.data_id = VAR_5;
 VAR_14->evbuf.event_id = 4712;
 VAR_14->evbuf.asa_size = VAR_4;
 VAR_14->evbuf.event_status = 0;
 VAR_14->evbuf.blk_cnt = VAR_13;
 VAR_14->evbuf.asa = (unsigned long)VAR_11;
 VAR_14->evbuf.fbn = VAR_12;
 VAR_14->evbuf.lbn = 0;
 VAR_14->evbuf.dbs = 1;

 VAR_15.sccb = VAR_14;
 VAR_15.command = VAR_2;
 VAR_15.status = VAR_3;
 VAR_15.callback = VAR_8;

 VAR_16 = FUNC_5(&VAR_15);
 if (VAR_16) {
  FUNC_4("sclp_send failed: %x\n", VAR_16);
  goto out;
 }
 if (VAR_14->hdr.response_code != 0x0020) {
  FUNC_0("copy failed: %x\n", VAR_14->hdr.response_code);
  VAR_16 = -VAR_0;
  goto out;
 }

 switch (VAR_9.event_status) {
 case 130:
  FUNC_0("all stored\n");
  break;
 case 128:
  FUNC_0("part stored: %i\n", VAR_9.blk_cnt);
  break;
 case 129:
  FUNC_0("no data\n");

 default:
  FUNC_4("Error from SCLP while copying hsa. Event status = %x\n",
         VAR_9.event_status);
  VAR_16 = -VAR_0;
 }
out:
 FUNC_3(&VAR_10);
 return VAR_16;
}
