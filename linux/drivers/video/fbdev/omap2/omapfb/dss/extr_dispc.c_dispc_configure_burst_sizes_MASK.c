
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* feat; } ;
struct TYPE_3__ {scalar_t__ has_writeback; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_0 (int,int const) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(void)
{
 int VAR_3;
 const int VAR_4 = VAR_0;


 for (VAR_3 = 0; VAR_3 < FUNC_1(); ++VAR_3)
  FUNC_0(VAR_3, VAR_4);
 if (VAR_2.feat->has_writeback)
  FUNC_0(VAR_1, VAR_4);
}
