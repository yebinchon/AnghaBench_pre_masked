
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int irqreturn_t ;
struct TYPE_2__ {int wait_for_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 void* VAR_5 ;
 void* VAR_6 ;
 TYPE_1__* VAR_7 ;
 int FUNC_2 (int *,int ) ;
 void* VAR_8 ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_9, void *VAR_10)
{
 if (VAR_10 == VAR_5)
  VAR_3 = VAR_2;
 else if (VAR_10 == VAR_6)
  VAR_8 = VAR_2;
 else
  return VAR_1;





 FUNC_0(&VAR_4);
 FUNC_2(&VAR_4,
         FUNC_1(VAR_7->wait_for_status));

 return VAR_0;
}
