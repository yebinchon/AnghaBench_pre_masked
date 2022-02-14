
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rvu {int dummy; } ;
struct TYPE_2__ {int pcifunc; } ;
struct rsrc_detach {TYPE_1__ hdr; } ;
struct msg_rsp {int dummy; } ;


 int FUNC_0 (struct rvu*,struct rsrc_detach*,int ) ;

__attribute__((used)) static int FUNC_1(struct rvu *VAR_0,
          struct rsrc_detach *VAR_1,
          struct msg_rsp *VAR_2)
{
 return FUNC_0(VAR_0, VAR_1, VAR_1->hdr.pcifunc);
}
