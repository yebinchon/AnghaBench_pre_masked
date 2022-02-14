
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct req_que {int dummy; } ;
struct TYPE_6__ {scalar_t__ status; } ;
struct TYPE_7__ {TYPE_1__ isp2x; } ;
struct nack_to_isp {TYPE_2__ u; } ;
struct TYPE_8__ {int (* done ) (TYPE_3__*,int) ;} ;
typedef TYPE_3__ srb_t ;
typedef int scsi_qla_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (int *,char const*,struct req_que*,struct nack_to_isp*) ;
 int FUNC_2 (TYPE_3__*,int) ;

__attribute__((used)) static void
FUNC_3(scsi_qla_host_t *VAR_2, struct req_que *VAR_3,
    struct nack_to_isp *VAR_4)
{
 const char VAR_5[] = "nack";
 srb_t *VAR_6;
 int VAR_7 = 0;

 VAR_6 = FUNC_1(VAR_2, VAR_5, VAR_3, VAR_4);
 if (!VAR_6)
  return;

 if (VAR_4->u.isp2x.status != FUNC_0(VAR_0))
  VAR_7 = VAR_1;

 VAR_6->done(VAR_6, VAR_7);
}
