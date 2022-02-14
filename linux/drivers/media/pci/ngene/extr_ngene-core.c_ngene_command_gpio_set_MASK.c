
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {int select; } ;
struct TYPE_4__ {int Length; int Opcode; } ;
struct TYPE_6__ {TYPE_2__ SetGpioPin; TYPE_1__ hdr; } ;
struct ngene_command {int in_len; scalar_t__ out_len; TYPE_3__ cmd; } ;
struct ngene {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ngene*,struct ngene_command*) ;

int FUNC_1(struct ngene *VAR_1, u8 VAR_2, u8 VAR_3)
{
 struct ngene_command VAR_4;

 VAR_4.cmd.hdr.Opcode = VAR_0;
 VAR_4.cmd.hdr.Length = 1;
 VAR_4.cmd.SetGpioPin.select = VAR_2 | (VAR_3 << 7);
 VAR_4.in_len = 1;
 VAR_4.out_len = 0;

 return FUNC_0(VAR_1, &VAR_4);
}
