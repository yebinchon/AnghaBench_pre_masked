
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct rvu_pfvf {int dummy; } ;
struct rvu {int dummy; } ;
struct TYPE_2__ {int pcifunc; } ;
struct hwctx_disable_req {int ctype; TYPE_1__ hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rvu*,struct rvu_pfvf*) ;
 int FUNC_1 (struct rvu*,struct hwctx_disable_req*) ;
 struct rvu_pfvf* FUNC_2 (struct rvu*,int ) ;

void FUNC_3(struct rvu *VAR_2, u16 VAR_3, int VAR_4)
{
 struct rvu_pfvf *VAR_5 = FUNC_2(VAR_2, VAR_3);
 struct hwctx_disable_req VAR_6;


 VAR_6.hdr.pcifunc = VAR_3;
 VAR_6.ctype = VAR_1;
 FUNC_1(VAR_2, &VAR_6);


 VAR_6.ctype = VAR_0;
 FUNC_1(VAR_2, &VAR_6);

 FUNC_0(VAR_2, VAR_5);
}
