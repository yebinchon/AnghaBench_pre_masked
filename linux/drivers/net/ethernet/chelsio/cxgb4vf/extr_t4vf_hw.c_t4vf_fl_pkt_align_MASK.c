
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int sge_control2; int sge_control; } ;
struct TYPE_3__ {TYPE_2__ sge; int chip; } ;
struct adapter {TYPE_1__ params; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_1 (int ) ;
 unsigned int VAR_2 ;
 unsigned int FUNC_2 (int ) ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_3 (int ) ;
 unsigned int FUNC_4 (unsigned int,unsigned int) ;

int FUNC_5(struct adapter *VAR_5)
{
 u32 VAR_6, VAR_7;
 unsigned int VAR_8, VAR_9, VAR_10, VAR_11;

 VAR_6 = VAR_5->params.sge.sge_control;
 if (FUNC_0(VAR_5->params.chip) <= VAR_0)
  VAR_11 = VAR_3;
 else
  VAR_11 = VAR_4;

 VAR_8 = 1 << (FUNC_2(VAR_6) + VAR_11);

 VAR_10 = VAR_8;
 if (!FUNC_3(VAR_5->params.chip)) {



  VAR_7 = VAR_5->params.sge.sge_control2;
  VAR_9 = FUNC_1(VAR_7);
  if (VAR_9 == VAR_1)
   VAR_9 = 16;
  else
   VAR_9 = 1 << (VAR_9 +
      VAR_2);

  VAR_10 = FUNC_4(VAR_8, VAR_9);
 }
 return VAR_10;
}
