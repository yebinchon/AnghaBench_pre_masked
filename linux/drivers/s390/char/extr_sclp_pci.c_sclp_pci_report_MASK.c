
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef void* u32 ;
struct zpci_report_error_header {scalar_t__ length; int data; int action; } ;
struct sclp_req {scalar_t__ status; struct err_notify_sccb* sccb; int command; int callback; int * callback_data; } ;
struct TYPE_9__ {int response_code; scalar_t__ length; } ;
struct TYPE_7__ {scalar_t__ length; int type; } ;
struct TYPE_8__ {int data; void* fid; void* fh; int atype; int action; TYPE_1__ header; } ;
struct err_notify_sccb {TYPE_3__ header; TYPE_2__ evbuf; } ;
typedef int req ;
struct TYPE_10__ {int sclp_receive_mask; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (unsigned long) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,int ,scalar_t__) ;
 int FUNC_4 (struct sclp_req*,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,scalar_t__) ;
 int FUNC_8 (struct sclp_req*) ;
 int VAR_12 ;
 int FUNC_9 (struct zpci_report_error_header*) ;
 TYPE_4__ VAR_13 ;
 int VAR_14 ;
 int FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (TYPE_4__*) ;
 int FUNC_12 (int *) ;

int FUNC_13(struct zpci_report_error_header *VAR_15, u32 VAR_16, u32 VAR_17)
{
 FUNC_0(VAR_11);
 struct err_notify_sccb *VAR_18;
 struct sclp_req VAR_19;
 int VAR_20;

 VAR_20 = FUNC_9(VAR_15);
 if (VAR_20)
  return VAR_20;

 FUNC_5(&VAR_14);
 VAR_20 = FUNC_10(&VAR_13);
 if (VAR_20)
  goto out_unlock;

 if (!(VAR_13.sclp_receive_mask & VAR_4)) {
  VAR_20 = -VAR_2;
  goto out_unregister;
 }

 VAR_18 = (void *) FUNC_2(VAR_6 | VAR_5);
 if (!VAR_18) {
  VAR_20 = -VAR_1;
  goto out_unregister;
 }

 FUNC_4(&VAR_19, 0, sizeof(VAR_19));
 VAR_19.callback_data = &VAR_11;
 VAR_19.callback = VAR_12;
 VAR_19.command = VAR_8;
 VAR_19.status = VAR_10;
 VAR_19.sccb = VAR_18;

 VAR_18->evbuf.header.length = sizeof(VAR_18->evbuf) + VAR_15->length;
 VAR_18->evbuf.header.type = VAR_3;
 VAR_18->header.length = sizeof(VAR_18->header) + VAR_18->evbuf.header.length;

 VAR_18->evbuf.action = VAR_15->action;
 VAR_18->evbuf.atype = VAR_7;
 VAR_18->evbuf.fh = VAR_16;
 VAR_18->evbuf.fid = VAR_17;

 FUNC_3(VAR_18->evbuf.data, VAR_15->data, VAR_15->length);

 VAR_20 = FUNC_8(&VAR_19);
 if (VAR_20)
  goto out_free_req;

 FUNC_12(&VAR_11);
 if (VAR_19.status != VAR_9) {
  FUNC_7("request failed (status=0x%02x)\n",
   VAR_19.status);
  VAR_20 = -VAR_0;
  goto out_free_req;
 }

 if (VAR_18->header.response_code != 0x0020) {
  FUNC_7("request failed with response code 0x%x\n",
   VAR_18->header.response_code);
  VAR_20 = -VAR_0;
 }

out_free_req:
 FUNC_1((unsigned long) VAR_18);
out_unregister:
 FUNC_11(&VAR_13);
out_unlock:
 FUNC_6(&VAR_14);
 return VAR_20;
}
