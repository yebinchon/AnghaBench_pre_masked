
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct ispstat {scalar_t__ state; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* enable ) (struct ispstat*,scalar_t__) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct ispstat*,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct ispstat *VAR_4, u8 VAR_5)
{
 if ((VAR_4->state != VAR_3 &&
      VAR_4->state != VAR_2) && VAR_5)

  return;

 VAR_4->ops->enable(VAR_4, VAR_5);
 if (VAR_4->state == VAR_1 && !VAR_5)
  VAR_4->state = VAR_0;
 else if (VAR_4->state == VAR_3 && VAR_5)
  VAR_4->state = VAR_2;
}
