
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct urb {int pipe; int dev; } ;
struct r8a66597_td {scalar_t__ pipenum; TYPE_1__* pipe; struct urb* urb; } ;
struct r8a66597_pipe_info {int dummy; } ;
struct r8a66597 {int dummy; } ;
struct TYPE_5__ {struct r8a66597_pipe_info info; } ;


 int FUNC_0 (struct r8a66597*,int ) ;
 int FUNC_1 (struct r8a66597*,TYPE_1__*) ;
 int FUNC_2 (struct r8a66597*,struct r8a66597_pipe_info*) ;
 int FUNC_3 (struct r8a66597*,TYPE_1__*,struct urb*) ;
 int FUNC_4 (struct r8a66597*,TYPE_1__*,struct urb*,int ) ;
 int FUNC_5 (struct r8a66597*,TYPE_1__*,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_11(struct r8a66597 *VAR_0, struct r8a66597_td *VAR_1)
{
 struct r8a66597_pipe_info *VAR_2;
 struct urb *VAR_3 = VAR_1->urb;

 if (VAR_1->pipenum > 0) {
  VAR_2 = &VAR_1->pipe->info;
  FUNC_0(VAR_0, 0);
  FUNC_2(VAR_0, VAR_2);

  if (!FUNC_6(VAR_3->dev, FUNC_8(VAR_3->pipe),
       FUNC_9(VAR_3->pipe)) &&
      !FUNC_7(VAR_3->pipe)) {
   FUNC_5(VAR_0, VAR_1->pipe, 0);
   FUNC_4(VAR_0, VAR_1->pipe, VAR_3, 0);
   FUNC_1(VAR_0, VAR_1->pipe);
   FUNC_10(VAR_3->dev, FUNC_8(VAR_3->pipe),
          FUNC_9(VAR_3->pipe), 1);
  }
  FUNC_3(VAR_0, VAR_1->pipe, VAR_3);
 }
}
