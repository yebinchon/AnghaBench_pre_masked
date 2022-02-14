
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* code; void* len; } ;
struct fwserial_mgmt_pkt {TYPE_1__ hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (void*) ;

__attribute__((used)) static inline void FUNC_2(struct fwserial_mgmt_pkt *VAR_2)
{
 VAR_2->hdr.code = FUNC_0(VAR_1 | VAR_0);
 VAR_2->hdr.len = FUNC_0(FUNC_1(VAR_2->hdr.code));
}
