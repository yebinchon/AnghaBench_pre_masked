
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_5__ {unsigned short Length; scalar_t__ Address; } ;
struct TYPE_4__ {int Length; int Opcode; } ;
struct TYPE_6__ {TYPE_2__ FWLoadFinish; TYPE_1__ hdr; } ;
struct ngene_command {int in_len; scalar_t__ out_len; TYPE_3__ cmd; } ;
struct ngene {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct ngene_command*,int ,int) ;
 int FUNC_1 (scalar_t__,int *,int) ;
 int FUNC_2 (struct ngene*,struct ngene_command*) ;

__attribute__((used)) static int FUNC_3(struct ngene *VAR_5,
           u8 *VAR_6, u32 VAR_7)
{

 u32 VAR_8;
 struct ngene_command VAR_9;

 VAR_9.cmd.hdr.Opcode = VAR_1;
 VAR_9.cmd.hdr.Length = 0;
 VAR_9.in_len = 0;
 VAR_9.out_len = 0;

 FUNC_2(VAR_5, &VAR_9);

 VAR_8 = (VAR_7 + 3) & ~3;
 if (VAR_8 > (1024)) {
  FUNC_1(VAR_4 + (1024), VAR_6 + (1024),
   VAR_8 - (1024));
  VAR_8 = (1024);
 }
 FUNC_1(VAR_2, VAR_6, VAR_8);

 FUNC_0(&VAR_9, 0, sizeof(struct ngene_command));
 VAR_9.cmd.hdr.Opcode = VAR_0;
 VAR_9.cmd.hdr.Length = 4;
 VAR_9.cmd.FWLoadFinish.Address = VAR_2;
 VAR_9.cmd.FWLoadFinish.Length = (unsigned short)VAR_8;
 VAR_9.in_len = 4;
 VAR_9.out_len = 0;

 return FUNC_2(VAR_5, &VAR_9);
}
