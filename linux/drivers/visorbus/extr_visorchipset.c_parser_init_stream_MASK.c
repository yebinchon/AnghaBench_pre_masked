
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct visor_controlvm_parameters_header {int dummy; } ;
struct parser_context {unsigned long allocbytes; scalar_t__ param_bytes; int byte_stream; int data; } ;
struct TYPE_2__ {scalar_t__ controlvm_payload_bytes_buffered; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (struct parser_context*) ;
 struct parser_context* FUNC_1 (unsigned long,int ) ;
 int FUNC_2 (int *,void*,scalar_t__) ;
 void* FUNC_3 (int ,scalar_t__,int ) ;
 int FUNC_4 (void*) ;

__attribute__((used)) static struct parser_context *FUNC_5(u64 VAR_4, u32 VAR_5,
       bool *VAR_6)
{
 unsigned long VAR_7;
 struct parser_context *VAR_8;
 void *VAR_9;

 *VAR_6 = 0;

 VAR_7 = (unsigned long)VAR_5 + 1 + (sizeof(struct parser_context) -
       sizeof(struct visor_controlvm_parameters_header));
 if ((VAR_3->controlvm_payload_bytes_buffered + VAR_5) >
      VAR_1) {
  *VAR_6 = 1;
  return ((void*)0);
 }
 VAR_8 = FUNC_1(VAR_7, VAR_0);
 if (!VAR_8) {
  *VAR_6 = 1;
  return ((void*)0);
 }
 VAR_8->allocbytes = VAR_7;
 VAR_8->param_bytes = VAR_5;
 VAR_9 = FUNC_3(VAR_4, VAR_5, VAR_2);
 if (!VAR_9)
  goto err_finish_ctx;
 FUNC_2(&VAR_8->data, VAR_9, VAR_5);
 FUNC_4(VAR_9);
 VAR_8->byte_stream = 1;
 VAR_3->controlvm_payload_bytes_buffered += VAR_8->param_bytes;
 return VAR_8;

err_finish_ctx:
 FUNC_0(VAR_8);
 return ((void*)0);
}
