
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {scalar_t__ pipenum; } ;
struct r8a66597_pipe {int pipectr; TYPE_1__ info; } ;
struct r8a66597 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct r8a66597*,int ,int,int ) ;
 int FUNC_1 (struct r8a66597*,int ) ;

__attribute__((used)) static void FUNC_2(struct r8a66597 *VAR_4, struct r8a66597_pipe *VAR_5)
{
 u16 VAR_6;

 VAR_6 = FUNC_1(VAR_4, VAR_5->pipectr) & VAR_0;
 if ((VAR_5->info.pipenum != 0) & ((VAR_6 & VAR_3) != 0))
  FUNC_0(VAR_4, VAR_2, VAR_0, VAR_5->pipectr);
 FUNC_0(VAR_4, VAR_1, VAR_0, VAR_5->pipectr);
}
