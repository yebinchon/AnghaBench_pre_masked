
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_pointer {int buffers_residual; int buffer; int this_residual; int ptr; } ;


 int FUNC_0 (char*,char const*,int ,int ,int ,int ,char const*) ;

__attribute__((used)) static void FUNC_1(struct scsi_pointer *VAR_0, const char *VAR_1, const char *VAR_2)
{
 FUNC_0("%sptr %p this_residual 0x%x buffer %p buffers_residual 0x%x%s",
  VAR_1, VAR_0->ptr, VAR_0->this_residual, VAR_0->buffer,
  VAR_0->buffers_residual, VAR_2);
}
