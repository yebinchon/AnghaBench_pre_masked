
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int parent; } ;
struct rtc_device {TYPE_1__ dev; } ;
struct TYPE_10__ {TYPE_2__* type; struct rtc_device* rtc; } ;
struct TYPE_9__ {int (* lock ) (TYPE_3__*) ;int (* unlock ) (TYPE_3__*) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 TYPE_3__* VAR_2 ;
 int FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (TYPE_3__*,int ,int) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_8(void)
{
 struct rtc_device *VAR_3 = VAR_2->rtc;
 u32 VAR_4;

 FUNC_3(VAR_3->dev.parent);


 VAR_2->type->unlock(VAR_2);
 VAR_4 = FUNC_4(VAR_2, VAR_1);
 VAR_4 |= VAR_0 | FUNC_1(0) |
   FUNC_0(0);
 FUNC_5(VAR_2, VAR_1, VAR_4);
 VAR_2->type->lock(VAR_2);






 FUNC_2(1500);
}
