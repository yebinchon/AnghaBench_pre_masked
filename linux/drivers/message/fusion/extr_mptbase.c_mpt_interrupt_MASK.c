
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef int irqreturn_t ;
struct TYPE_6__ {TYPE_1__* chip; } ;
struct TYPE_5__ {int ReplyFifo; } ;
typedef TYPE_2__ MPT_ADAPTER ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*,int) ;

__attribute__((used)) static irqreturn_t
FUNC_3(int VAR_3, void *VAR_4)
{
 MPT_ADAPTER *VAR_5 = VAR_4;
 u32 VAR_6 = FUNC_0(&VAR_5->chip->ReplyFifo);

 if (VAR_6 == 0xFFFFFFFF)
  return VAR_1;




 do {
  if (VAR_6 & VAR_2)
   FUNC_1(VAR_5, VAR_6);
  else
   FUNC_2(VAR_5, VAR_6);
  VAR_6 = FUNC_0(&VAR_5->chip->ReplyFifo);
 } while (VAR_6 != 0xFFFFFFFF);

 return VAR_0;
}
