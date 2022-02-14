
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {void* o_tei; void* i_tei; } ;
struct TYPE_8__ {int flow; int tid; } ;
struct TYPE_10__ {TYPE_4__ v1; TYPE_3__ v0; } ;
struct TYPE_7__ {void* s_addr; } ;
struct TYPE_6__ {void* s_addr; } ;
struct pdp_ctx {int gtp_version; TYPE_5__ u; TYPE_2__ ms_addr_ip4; TYPE_1__ peer_addr_ip4; int af; } ;
struct genl_info {int * attrs; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct pdp_ctx *VAR_8, struct genl_info *VAR_9)
{
 VAR_8->gtp_version = FUNC_2(VAR_9->attrs[VAR_7]);
 VAR_8->af = VAR_0;
 VAR_8->peer_addr_ip4.s_addr =
  FUNC_0(VAR_9->attrs[VAR_5]);
 VAR_8->ms_addr_ip4.s_addr =
  FUNC_0(VAR_9->attrs[VAR_3]);

 switch (VAR_8->gtp_version) {
 case 129:




  VAR_8->u.v0.tid = FUNC_3(VAR_9->attrs[VAR_6]);
  VAR_8->u.v0.flow = FUNC_1(VAR_9->attrs[VAR_1]);
  break;
 case 128:
  VAR_8->u.v1.i_tei = FUNC_2(VAR_9->attrs[VAR_2]);
  VAR_8->u.v1.o_tei = FUNC_2(VAR_9->attrs[VAR_4]);
  break;
 default:
  break;
 }
}
