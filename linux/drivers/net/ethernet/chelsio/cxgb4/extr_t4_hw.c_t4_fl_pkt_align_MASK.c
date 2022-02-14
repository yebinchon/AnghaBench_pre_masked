
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int chip; } ;
struct adapter {TYPE_1__ params; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_1 (int ) ;
 unsigned int VAR_2 ;
 unsigned int FUNC_2 (int ) ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_3 (int ) ;
 unsigned int FUNC_4 (unsigned int,unsigned int) ;
 int FUNC_5 (struct adapter*,int ) ;

int FUNC_6(struct adapter *VAR_7)
{
 u32 VAR_8, VAR_9;
 unsigned int VAR_10, VAR_11, VAR_12, VAR_13;

 VAR_8 = FUNC_5(VAR_7, VAR_5);
 if (FUNC_0(VAR_7->params.chip) <= VAR_0)
  VAR_13 = VAR_3;
 else
  VAR_13 = VAR_6;

 VAR_10 = 1 << (FUNC_2(VAR_8) + VAR_13);

 VAR_12 = VAR_10;
 if (!FUNC_3(VAR_7->params.chip)) {



  VAR_9 = FUNC_5(VAR_7, VAR_4);
  VAR_11 = FUNC_1(VAR_9);
  if (VAR_11 == VAR_1)
   VAR_11 = 16;
  else
   VAR_11 = 1 << (VAR_11 +
      VAR_2);

  VAR_12 = FUNC_4(VAR_10, VAR_11);
 }
 return VAR_12;
}
