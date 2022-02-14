
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct r8a66597_pipe {int pipectr; } ;
struct r8a66597 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct r8a66597*,int ,int,int ) ;
 int FUNC_1 (struct r8a66597*,int ) ;
 int FUNC_2 (struct r8a66597*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct r8a66597 *VAR_5, struct r8a66597_pipe *VAR_6)
{
 u16 VAR_7;

 VAR_7 = FUNC_1(VAR_5, VAR_6->pipectr) & VAR_1;
 if ((VAR_7 & VAR_4) != VAR_4)
  FUNC_0(VAR_5, VAR_3, VAR_1, VAR_6->pipectr);
 FUNC_0(VAR_5, VAR_2, VAR_1, VAR_6->pipectr);
 FUNC_2(VAR_5, VAR_6->pipectr, VAR_0, 0);
}
