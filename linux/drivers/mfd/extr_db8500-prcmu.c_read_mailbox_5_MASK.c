
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* value; void* status; } ;
struct TYPE_4__ {int work; TYPE_1__ ack; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 TYPE_2__ VAR_3 ;
 void* FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static bool FUNC_4(void)
{
 VAR_3.ack.status = FUNC_2(VAR_4 + VAR_0);
 VAR_3.ack.value = FUNC_2(VAR_4 + VAR_1);
 FUNC_3(FUNC_0(5), VAR_2);
 FUNC_1(&VAR_3.work);
 return 0;
}
