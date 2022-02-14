
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ loopback; int clock_speed; } ;
struct mgsl_struct {TYPE_1__ params; } ;


 int FUNC_0 (struct mgsl_struct*,int ) ;
 int FUNC_1 (struct mgsl_struct*,int) ;
 int FUNC_2 (struct mgsl_struct*) ;
 int FUNC_3 (struct mgsl_struct*) ;

__attribute__((used)) static void FUNC_4( struct mgsl_struct *VAR_0 )
{
 FUNC_2( VAR_0 );
 FUNC_3( VAR_0 );

 FUNC_0(VAR_0, VAR_0->params.clock_speed);

 if (VAR_0->params.loopback)
  FUNC_1(VAR_0,1);

}
