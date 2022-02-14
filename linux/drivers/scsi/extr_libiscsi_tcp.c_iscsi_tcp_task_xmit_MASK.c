
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct iscsi_task {TYPE_2__* hdr; TYPE_1__* sc; struct iscsi_conn* conn; } ;
struct iscsi_session {TYPE_3__* tt; } ;
struct iscsi_r2t_info {scalar_t__ data_count; scalar_t__ sent; scalar_t__ data_offset; scalar_t__ datasn; } ;
struct iscsi_data {int dummy; } ;
struct iscsi_conn {struct iscsi_session* session; } ;
struct TYPE_6__ {int (* xmit_pdu ) (struct iscsi_task*) ;int (* alloc_pdu ) (struct iscsi_task*,int ) ;int (* init_pdu ) (struct iscsi_task*,scalar_t__,scalar_t__) ;} ;
struct TYPE_5__ {scalar_t__ itt; } ;
struct TYPE_4__ {scalar_t__ sc_data_direction; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct iscsi_conn*,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct iscsi_conn*,int ) ;
 int FUNC_2 (struct iscsi_task*,struct iscsi_r2t_info*,struct iscsi_data*) ;
 int FUNC_3 (struct iscsi_task*) ;
 struct iscsi_r2t_info* FUNC_4 (struct iscsi_task*) ;
 int FUNC_5 (struct iscsi_task*) ;
 int FUNC_6 (struct iscsi_task*,int ) ;
 int FUNC_7 (struct iscsi_task*,scalar_t__,scalar_t__) ;

int FUNC_8(struct iscsi_task *VAR_4)
{
 struct iscsi_conn *VAR_5 = VAR_4->conn;
 struct iscsi_session *VAR_6 = VAR_5->session;
 struct iscsi_r2t_info *VAR_7;
 int VAR_8 = 0;

flush:

 VAR_8 = VAR_6->tt->xmit_pdu(VAR_4);
 if (VAR_8 < 0)
  return VAR_8;


 if (!VAR_4->sc) {
  if (VAR_4->hdr->itt == VAR_3)
   FUNC_3(VAR_4);
  return 0;
 }


 if (VAR_4->sc->sc_data_direction != VAR_0)
  return 0;

 VAR_7 = FUNC_4(VAR_4);
 if (VAR_7 == ((void*)0)) {

  FUNC_0(VAR_5, "no R2Ts yet\n");
  return 0;
 }

 VAR_8 = VAR_5->session->tt->alloc_pdu(VAR_4, VAR_2);
 if (VAR_8)
  return VAR_8;
 FUNC_2(VAR_4, VAR_7, (struct iscsi_data *) VAR_4->hdr);

 FUNC_0(VAR_5, "sol dout %p [dsn %d itt 0x%x doff %d dlen %d]\n",
        VAR_7, VAR_7->datasn - 1, VAR_4->hdr->itt,
        VAR_7->data_offset + VAR_7->sent, VAR_7->data_count);

 VAR_8 = VAR_5->session->tt->init_pdu(VAR_4, VAR_7->data_offset + VAR_7->sent,
      VAR_7->data_count);
 if (VAR_8) {
  FUNC_1(VAR_5, VAR_1);
  return VAR_8;
 }

 VAR_7->sent += VAR_7->data_count;
 goto flush;
}
