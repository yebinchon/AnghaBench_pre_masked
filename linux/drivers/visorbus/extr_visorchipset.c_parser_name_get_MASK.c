
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct visor_controlvm_parameters_header {int name_offset; scalar_t__ name_length; } ;
struct parser_context {unsigned long param_bytes; char* curr; scalar_t__ bytes_remaining; struct visor_controlvm_parameters_header data; } ;


 void* FUNC_0 (char*,scalar_t__) ;

__attribute__((used)) static void *FUNC_1(struct parser_context *VAR_0)
{
 struct visor_controlvm_parameters_header *VAR_1;

 VAR_1 = &VAR_0->data;
 if ((unsigned long)VAR_1->name_offset +
     (unsigned long)VAR_1->name_length > VAR_0->param_bytes)
  return ((void*)0);
 VAR_0->curr = (char *)&VAR_1 + VAR_1->name_offset;
 VAR_0->bytes_remaining = VAR_1->name_length;
 return FUNC_0(VAR_0->curr, VAR_1->name_length);
}
