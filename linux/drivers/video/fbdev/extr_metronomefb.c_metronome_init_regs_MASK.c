
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct metronomefb_par {TYPE_1__* board; } ;
struct TYPE_2__ {int (* setup_io ) (struct metronomefb_par*) ;} ;


 int FUNC_0 (struct metronomefb_par*) ;
 int FUNC_1 (struct metronomefb_par*) ;
 int FUNC_2 (struct metronomefb_par*) ;
 int FUNC_3 (struct metronomefb_par*) ;

__attribute__((used)) static int FUNC_4(struct metronomefb_par *VAR_0)
{
 int VAR_1;

 VAR_1 = VAR_0->board->setup_io(VAR_0);
 if (VAR_1)
  return VAR_1;

 VAR_1 = FUNC_2(VAR_0);
 if (VAR_1)
  return VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1)
  return VAR_1;

 VAR_1 = FUNC_1(VAR_0);

 return VAR_1;
}
