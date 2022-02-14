
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int status; } ;
struct TYPE_4__ {int work; TYPE_1__ ack; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 TYPE_2__ VAR_2 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static bool FUNC_4(void)
{
 VAR_2.ack.status = FUNC_2(VAR_3 + VAR_0);
 FUNC_3(FUNC_0(2), VAR_1);
 FUNC_1(&VAR_2.work);
 return 0;
}
