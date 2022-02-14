
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* callback_data; int callback; int status; int command; } ;
struct sclp_vt220_request {TYPE_1__ sclp_req; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_1(struct sclp_vt220_request *VAR_3)
{
 VAR_3->sclp_req.command = VAR_0;
 VAR_3->sclp_req.status = VAR_1;
 VAR_3->sclp_req.callback = VAR_2;
 VAR_3->sclp_req.callback_data = (void *) VAR_3;

 return FUNC_0(&VAR_3->sclp_req);
}
