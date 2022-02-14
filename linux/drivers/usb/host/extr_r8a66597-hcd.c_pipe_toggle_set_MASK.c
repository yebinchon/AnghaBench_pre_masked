
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int pipe; } ;
struct r8a66597_pipe {int dummy; } ;
struct r8a66597_device {int dummy; } ;
struct r8a66597 {int dummy; } ;


 unsigned short* FUNC_0 (struct r8a66597_device*,int ) ;
 struct r8a66597_device* FUNC_1 (struct r8a66597*,struct urb*) ;
 unsigned char FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct r8a66597 *VAR_0,
       struct r8a66597_pipe *VAR_1,
       struct urb *VAR_2, int VAR_3)
{
 struct r8a66597_device *VAR_4 = FUNC_1(VAR_0, VAR_2);
 unsigned char VAR_5 = FUNC_2(VAR_2->pipe);
 unsigned short *VAR_6 = FUNC_0(VAR_4, VAR_2->pipe);

 if (!VAR_6)
  return;

 if (VAR_3)
  *VAR_6 |= 1 << VAR_5;
 else
  *VAR_6 &= ~(1 << VAR_5);
}
