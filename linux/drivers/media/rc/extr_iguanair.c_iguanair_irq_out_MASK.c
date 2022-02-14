
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct urb {int status; struct iguanair* context; } ;
struct iguanair {int completion; TYPE_2__* packet; int dev; } ;
struct TYPE_3__ {scalar_t__ cmd; } ;
struct TYPE_4__ {TYPE_1__ header; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_2(struct urb *VAR_1)
{
 struct iguanair *VAR_2 = VAR_1->context;

 if (VAR_1->status)
  FUNC_1(VAR_2->dev, "Error: out urb status = %d\n", VAR_1->status);


 if (VAR_1->status == 0 && VAR_2->packet->header.cmd == VAR_0)
  FUNC_0(&VAR_2->completion);
}
