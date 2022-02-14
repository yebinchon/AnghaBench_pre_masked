
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct zfcp_fsf_req {TYPE_3__* qtcb; } ;
struct scatterlist {int dummy; } ;
struct TYPE_4__ {unsigned int timeout; int service_class; } ;
struct TYPE_5__ {TYPE_1__ support; } ;
struct TYPE_6__ {TYPE_2__ bottom; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct zfcp_fsf_req*,struct scatterlist*,struct scatterlist*) ;
 int FUNC_1 (struct zfcp_fsf_req*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct zfcp_fsf_req *VAR_2,
     struct scatterlist *VAR_3,
     struct scatterlist *VAR_4,
     unsigned int VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_4);
 if (VAR_6)
  return VAR_6;


 if (VAR_5 > 255)
  VAR_5 = 255;
 VAR_2->qtcb->bottom.support.service_class = VAR_0;
 VAR_2->qtcb->bottom.support.timeout = VAR_5;
 FUNC_1(VAR_2, (VAR_5 + 10) * VAR_1);

 return 0;
}
