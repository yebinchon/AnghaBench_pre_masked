
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fuse_open_in {int dummy; } ;
struct fuse_conn {int minor; } ;
struct fuse_args {int opcode; TYPE_2__* in_args; TYPE_1__* out_args; } ;
struct TYPE_4__ {int size; } ;
struct TYPE_3__ {int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;







 int VAR_4 ;


__attribute__((used)) static void FUNC_0(struct fuse_conn *VAR_5, struct fuse_args *VAR_6)
{
 if (VAR_5->minor < 4 && VAR_6->opcode == VAR_4)
  VAR_6->out_args[0].size = VAR_3;

 if (VAR_5->minor < 9) {
  switch (VAR_6->opcode) {
  case 132:
  case 135:
  case 130:
  case 131:
  case 128:
  case 133:
   VAR_6->out_args[0].size = VAR_1;
   break;
  case 134:
  case 129:
   VAR_6->out_args[0].size = VAR_0;
   break;
  }
 }
 if (VAR_5->minor < 12) {
  switch (VAR_6->opcode) {
  case 135:
   VAR_6->in_args[0].size = sizeof(struct fuse_open_in);
   break;
  case 130:
   VAR_6->in_args[0].size = VAR_2;
   break;
  }
 }
}
