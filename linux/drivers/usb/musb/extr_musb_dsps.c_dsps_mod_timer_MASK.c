
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct musb {int dev_timer; } ;
struct dsps_glue {TYPE_1__* wrp; int musb; } ;
struct TYPE_2__ {int poll_timeout; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int) ;
 struct musb* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct dsps_glue *VAR_1, int VAR_2)
{
 struct musb *VAR_3 = FUNC_2(VAR_1->musb);
 int VAR_4;

 if (VAR_2 < 0)
  VAR_4 = FUNC_1(VAR_1->wrp->poll_timeout);
 else
  VAR_4 = FUNC_1(VAR_2);

 FUNC_0(&VAR_3->dev_timer, VAR_0 + VAR_4);
}
