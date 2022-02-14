
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mux_control {int cached_state; TYPE_2__* chip; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* set ) (struct mux_control*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct mux_control*,int) ;

__attribute__((used)) static int FUNC_1(struct mux_control *VAR_1, int VAR_2)
{
 int VAR_3 = VAR_1->chip->ops->set(VAR_1, VAR_2);

 VAR_1->cached_state = VAR_3 < 0 ? VAR_0 : VAR_2;

 return VAR_3;
}
