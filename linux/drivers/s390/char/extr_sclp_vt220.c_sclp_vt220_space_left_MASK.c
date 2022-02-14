
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int length; } ;
struct sclp_vt220_sccb {TYPE_2__ header; } ;
struct TYPE_3__ {scalar_t__ sccb; } ;
struct sclp_vt220_request {TYPE_1__ sclp_req; } ;


 int VAR_0 ;

__attribute__((used)) static inline unsigned int
FUNC_0(struct sclp_vt220_request *VAR_1)
{
 struct sclp_vt220_sccb *VAR_2;
 VAR_2 = (struct sclp_vt220_sccb *) VAR_1->sclp_req.sccb;
 return VAR_0 - sizeof(struct sclp_vt220_request) -
        VAR_2->header.length;
}
