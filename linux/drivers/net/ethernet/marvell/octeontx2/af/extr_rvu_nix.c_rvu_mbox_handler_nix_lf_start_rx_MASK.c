
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct rvu {int dummy; } ;
struct msg_rsp {int dummy; } ;
struct TYPE_2__ {int pcifunc; } ;
struct msg_req {TYPE_1__ hdr; } ;


 int FUNC_0 (struct rvu*,int ,int*) ;
 int FUNC_1 (struct rvu*,int ,int) ;

int FUNC_2(struct rvu *VAR_0, struct msg_req *VAR_1,
         struct msg_rsp *VAR_2)
{
 u16 VAR_3 = VAR_1->hdr.pcifunc;
 int VAR_4, VAR_5;

 VAR_5 = FUNC_0(VAR_0, VAR_3, &VAR_4);
 if (VAR_5)
  return VAR_5;

 FUNC_1(VAR_0, VAR_3, VAR_4);
 return 0;
}
