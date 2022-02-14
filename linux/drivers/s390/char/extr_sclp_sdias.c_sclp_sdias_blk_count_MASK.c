
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int length; int response_code; } ;
struct TYPE_5__ {int length; int type; } ;
struct TYPE_6__ {int event_id; int dbs; int data_id; int event_qual; TYPE_1__ hdr; } ;
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
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct sdias_sccb*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,...) ;
 struct sdias_sccb* VAR_6 ;
 int VAR_7 ;
 TYPE_4__ VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (struct sdias_sccb*) ;

int FUNC_6(void)
{
 struct sdias_sccb *VAR_10 = VAR_6;
 struct sclp_req VAR_11;
 int VAR_12;

 FUNC_2(&VAR_9);

 FUNC_1(VAR_10, 0, sizeof(*VAR_10));
 FUNC_1(&VAR_11, 0, sizeof(VAR_11));

 VAR_10->hdr.length = sizeof(*VAR_10);
 VAR_10->evbuf.hdr.length = sizeof(struct sdias_evbuf);
 VAR_10->evbuf.hdr.type = VAR_1;
 VAR_10->evbuf.event_qual = VAR_5;
 VAR_10->evbuf.data_id = VAR_4;
 VAR_10->evbuf.event_id = 4712;
 VAR_10->evbuf.dbs = 1;

 VAR_11.sccb = VAR_10;
 VAR_11.command = VAR_2;
 VAR_11.status = VAR_3;
 VAR_11.callback = VAR_7;

 VAR_12 = FUNC_5(&VAR_11);
 if (VAR_12) {
  FUNC_4("sclp_send failed for get_nr_blocks\n");
  goto out;
 }
 if (VAR_10->hdr.response_code != 0x0020) {
  FUNC_0("send failed: %x\n", VAR_10->hdr.response_code);
  VAR_12 = -VAR_0;
  goto out;
 }

 switch (VAR_8.event_status) {
  case 0:
   VAR_12 = VAR_8.blk_cnt;
   break;
  default:
   FUNC_4("SCLP error: %x\n", VAR_8.event_status);
   VAR_12 = -VAR_0;
   goto out;
 }
 FUNC_0("%i blocks\n", VAR_12);
out:
 FUNC_3(&VAR_9);
 return VAR_12;
}
