
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct iscsi_tm {int opcode; int rtt; int lun; } ;
struct iscsi_task {int hdr_itt; int itt; TYPE_2__* sc; struct iscsi_conn* conn; } ;
struct iscsi_conn {scalar_t__ tmf_state; TYPE_3__* session; struct iscsi_tm tmhdr; } ;
struct TYPE_6__ {int fast_abort; } ;
struct TYPE_5__ {TYPE_1__* device; } ;
struct TYPE_4__ {int lun; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,char*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_1 (struct iscsi_tm*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int ,struct iscsi_conn*,char*,int,int ,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct iscsi_task *VAR_6, int VAR_7)
{
 struct iscsi_conn *VAR_8 = VAR_6->conn;
 struct iscsi_tm *VAR_9 = &VAR_8->tmhdr;
 u64 VAR_10;

 if (VAR_8->tmf_state == VAR_5)
  return 0;

 if ((VAR_9->opcode & VAR_1) != VAR_3)
  return 0;

 switch (FUNC_1(VAR_9)) {
 case 129:



  VAR_10 = FUNC_3(&VAR_9->lun);
  if (VAR_10 != VAR_6->sc->device->lun)
   return 0;

 case 128:



  if (VAR_7 != VAR_2) {
   FUNC_2(VAR_4, VAR_8,
       "task [op %x itt "
       "0x%x/0x%x] "
       "rejected.\n",
       VAR_7, VAR_6->itt,
       VAR_6->hdr_itt);
   return -VAR_0;
  }




  if (VAR_8->session->fast_abort) {
   FUNC_2(VAR_4, VAR_8,
       "task [op %x itt "
       "0x%x/0x%x] fast abort.\n",
       VAR_7, VAR_6->itt,
       VAR_6->hdr_itt);
   return -VAR_0;
  }
  break;
 case 130:






  if (VAR_7 == VAR_2 &&
      VAR_6->hdr_itt == VAR_9->rtt) {
   FUNC_0(VAR_8->session,
       "Preventing task %x/%x from sending "
       "data-out due to abort task in "
       "progress\n", VAR_6->itt,
       VAR_6->hdr_itt);
   return -VAR_0;
  }
  break;
 }

 return 0;
}
