
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct goldfish_pipe {TYPE_2__* command_buffer; TYPE_1__* dev; int id; } ;
typedef enum PipeCmdCode { ____Placeholder_PipeCmdCode } PipeCmdCode ;
struct TYPE_4__ {int cmd; int status; } ;
struct TYPE_3__ {scalar_t__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct goldfish_pipe *VAR_2,
        enum PipeCmdCode VAR_3)
{
 VAR_2->command_buffer->cmd = VAR_3;

 VAR_2->command_buffer->status = VAR_0;
 FUNC_0(VAR_2->id, VAR_2->dev->base + VAR_1);
 return VAR_2->command_buffer->status;
}
