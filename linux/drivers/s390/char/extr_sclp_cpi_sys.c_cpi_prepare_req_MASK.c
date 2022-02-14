
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sclp_req {int callback; int status; struct cpi_sccb* sccb; int command; } ;
struct TYPE_4__ {int length; int type; } ;
struct cpi_evbuf {int sysplex_name; int system_level; int system_name; int system_type; TYPE_2__ header; } ;
struct TYPE_3__ {int length; } ;
struct cpi_sccb {struct cpi_evbuf cpi_evbuf; TYPE_1__ header; } ;


 int VAR_0 ;
 struct sclp_req* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct sclp_req*) ;
 struct sclp_req* FUNC_3 (int,int) ;
 int FUNC_4 (int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static struct sclp_req *FUNC_5(void)
{
 struct sclp_req *VAR_11;
 struct cpi_sccb *VAR_12;
 struct cpi_evbuf *VAR_13;

 VAR_11 = FUNC_3(sizeof(struct sclp_req), VAR_3);
 if (!VAR_11)
  return FUNC_0(-VAR_0);
 VAR_12 = (struct cpi_sccb *) FUNC_1(VAR_3 | VAR_2);
 if (!VAR_12) {
  FUNC_2(VAR_11);
  return FUNC_0(-VAR_0);
 }


 VAR_12->header.length = sizeof(struct cpi_sccb);
 VAR_12->cpi_evbuf.header.length = sizeof(struct cpi_evbuf);
 VAR_12->cpi_evbuf.header.type = VAR_1;
 VAR_13 = &VAR_12->cpi_evbuf;


 FUNC_4(VAR_13->system_type, VAR_10);


 FUNC_4(VAR_13->system_name, VAR_9);


 VAR_13->system_level = VAR_8;


 FUNC_4(VAR_13->sysplex_name, VAR_7);


 VAR_11->command = VAR_4;
 VAR_11->sccb = VAR_12;
 VAR_11->status = VAR_5;
 VAR_11->callback = VAR_6;
 return VAR_11;
}
