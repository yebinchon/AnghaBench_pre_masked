
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct parser_context {scalar_t__ param_bytes; } ;
struct TYPE_2__ {int controlvm_payload_bytes_buffered; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct parser_context*) ;

__attribute__((used)) static void FUNC_1(struct parser_context *VAR_1)
{
 VAR_0->controlvm_payload_bytes_buffered -= VAR_1->param_bytes;
 FUNC_0(VAR_1);
}
