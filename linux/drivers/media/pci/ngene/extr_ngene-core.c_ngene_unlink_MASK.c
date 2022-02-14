
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int address; int data; } ;
struct TYPE_4__ {int Length; int Opcode; } ;
struct TYPE_5__ {TYPE_3__ MemoryWrite; TYPE_1__ hdr; } ;
struct ngene_command {int in_len; int out_len; TYPE_2__ cmd; } ;
struct ngene {int cmd_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ngene*,struct ngene_command*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct ngene *VAR_2)
{
 struct ngene_command VAR_3;

 VAR_3.cmd.hdr.Opcode = VAR_0;
 VAR_3.cmd.hdr.Length = 3;
 VAR_3.cmd.MemoryWrite.address = 0x910c;
 VAR_3.cmd.MemoryWrite.data = 0xff;
 VAR_3.in_len = 3;
 VAR_3.out_len = 1;

 FUNC_0(&VAR_2->cmd_mutex);
 FUNC_3(0, VAR_1);
 FUNC_2(VAR_2, &VAR_3);
 FUNC_1(&VAR_2->cmd_mutex);
}
