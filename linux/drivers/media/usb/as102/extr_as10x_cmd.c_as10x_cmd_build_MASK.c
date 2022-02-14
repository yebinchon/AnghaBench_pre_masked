
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_2__ {void* data_len; void* version; void* prog; void* req_id; } ;
struct as10x_cmd_t {TYPE_1__ header; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;

void FUNC_1(struct as10x_cmd_t *VAR_2,
       uint16_t VAR_3, uint16_t VAR_4)
{
 VAR_2->header.req_id = FUNC_0(VAR_3);
 VAR_2->header.prog = FUNC_0(VAR_0);
 VAR_2->header.version = FUNC_0(VAR_1);
 VAR_2->header.data_len = FUNC_0(VAR_4);
}
