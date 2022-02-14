
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sg; } ;
struct nvmet_tcp_cmd {TYPE_1__ req; int iov; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct nvmet_tcp_cmd*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct nvmet_tcp_cmd *VAR_0)
{
 FUNC_1(&VAR_0->req);
 FUNC_2(VAR_0);
 FUNC_0(VAR_0->iov);
 FUNC_3(VAR_0->req.sg);
}
