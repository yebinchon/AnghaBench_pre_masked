
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fwtty_port {int dummy; } ;
struct TYPE_2__ {void* code; void* len; } ;
struct fwserial_mgmt_pkt {int plug_rsp; TYPE_1__ hdr; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int *,struct fwtty_port*) ;
 int FUNC_2 (void*) ;

__attribute__((used)) static inline void FUNC_3(struct fwserial_mgmt_pkt *VAR_1,
        struct fwtty_port *VAR_2)
{
 VAR_1->hdr.code = FUNC_0(VAR_0);
 VAR_1->hdr.len = FUNC_0(FUNC_2(VAR_1->hdr.code));
 FUNC_1(&VAR_1->plug_rsp, VAR_2);
}
