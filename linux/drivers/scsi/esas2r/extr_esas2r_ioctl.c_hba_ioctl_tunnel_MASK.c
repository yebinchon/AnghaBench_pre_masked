
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct esas2r_sg_context {int length; } ;
struct esas2r_request {TYPE_2__* vrq; } ;
struct esas2r_adapter {int dummy; } ;
struct atto_ioctl {int status; } ;
struct TYPE_3__ {int sge; } ;
struct TYPE_4__ {TYPE_1__ ioctl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct esas2r_adapter*,struct esas2r_request*,int ,int ) ;
 int FUNC_1 (struct esas2r_adapter*,struct esas2r_request*,struct esas2r_sg_context*) ;
 int FUNC_2 (struct esas2r_sg_context*,struct esas2r_adapter*,struct esas2r_request*,int ) ;
 int FUNC_3 (struct esas2r_adapter*,struct esas2r_request*) ;

__attribute__((used)) static bool FUNC_4(struct esas2r_adapter *VAR_2,
        struct atto_ioctl *VAR_3,
        struct esas2r_request *VAR_4,
        struct esas2r_sg_context *VAR_5)
{
 FUNC_2(VAR_5, VAR_2, VAR_4, VAR_4->vrq->ioctl.sge);

 FUNC_0(VAR_2, VAR_4, VAR_5->length, VAR_1);

 if (!FUNC_1(VAR_2, VAR_4, VAR_5)) {
  VAR_3->status = VAR_0;

  return 0;
 }

 FUNC_3(VAR_2, VAR_4);

 return 1;
}
