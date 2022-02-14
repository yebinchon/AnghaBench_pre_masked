
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nents; int sgl; } ;
struct scsi_data_buffer {TYPE_1__ table; } ;
struct iscsi_task {TYPE_2__* sc; int data; int hdr_len; int hdr; struct iscsi_conn* conn; } ;
struct iscsi_conn {int dummy; } ;
struct TYPE_4__ {struct scsi_data_buffer sdb; } ;


 int VAR_0 ;
 int FUNC_0 (struct iscsi_conn*,int ,int ,unsigned int,unsigned int) ;
 int FUNC_1 (struct iscsi_conn*,int ,int ) ;
 int FUNC_2 (struct iscsi_conn*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct iscsi_task *VAR_1,
     unsigned int VAR_2, unsigned int VAR_3)
{
 struct iscsi_conn *VAR_4 = VAR_1->conn;
 int VAR_5 = 0;

 FUNC_1(VAR_4, VAR_1->hdr, VAR_1->hdr_len);

 if (!VAR_3)
  return 0;

 if (!VAR_1->sc)
  FUNC_2(VAR_4, VAR_1->data, VAR_3);
 else {
  struct scsi_data_buffer *VAR_6 = &VAR_1->sc->sdb;

  VAR_5 = FUNC_0(VAR_4, VAR_6->table.sgl,
        VAR_6->table.nents, VAR_2,
        VAR_3);
 }

 if (VAR_5) {

  return -VAR_0;
 }
 return 0;
}
