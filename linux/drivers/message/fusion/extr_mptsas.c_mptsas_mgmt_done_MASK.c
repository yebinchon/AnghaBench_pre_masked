
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int status; int done; int reply; } ;
struct TYPE_14__ {TYPE_3__ sas_mgmt; int reply_sz; } ;
struct TYPE_10__ {int MsgLength; } ;
struct TYPE_11__ {TYPE_1__ reply; } ;
struct TYPE_13__ {TYPE_2__ u; } ;
typedef TYPE_4__ MPT_FRAME_HDR ;
typedef TYPE_5__ MPT_ADAPTER ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,TYPE_4__*,int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int FUNC_3(MPT_ADAPTER *VAR_3, MPT_FRAME_HDR *VAR_4,
  MPT_FRAME_HDR *VAR_5)
{
 VAR_3->sas_mgmt.status |= VAR_0;
 if (VAR_5 != ((void*)0)) {
  VAR_3->sas_mgmt.status |= VAR_2;
  FUNC_1(VAR_3->sas_mgmt.reply, VAR_5,
      FUNC_2(VAR_3->reply_sz, 4 * VAR_5->u.reply.MsgLength));
 }

 if (VAR_3->sas_mgmt.status & VAR_1) {
  VAR_3->sas_mgmt.status &= ~VAR_1;
  FUNC_0(&VAR_3->sas_mgmt.done);
  return 1;
 }
 return 0;
}
