
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int test_message; } ;
struct TYPE_5__ {TYPE_1__ flags; } ;
struct controlvm_message {TYPE_2__ hdr; } ;
struct TYPE_6__ {int controlvm_channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 int FUNC_0 (int ,int ,struct controlvm_message*) ;

__attribute__((used)) static int FUNC_1(struct controlvm_message *VAR_3)
{
 int VAR_4 = FUNC_0(VAR_2->controlvm_channel,
         VAR_0, VAR_3);

 if (VAR_4)
  return VAR_4;

 if (VAR_3->hdr.flags.test_message == 1)
  return -VAR_1;
 return 0;
}
