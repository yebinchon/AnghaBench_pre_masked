
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {TYPE_1__* chip; } ;
struct TYPE_5__ {int Doorbell; int IntStatus; } ;
typedef TYPE_2__ MPT_ADAPTER ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_2__*,int,int) ;

__attribute__((used)) static int
FUNC_3(MPT_ADAPTER *VAR_3, u8 VAR_4, int VAR_5)
{
 int VAR_6 = 0;


 if (FUNC_0(&VAR_3->chip->Doorbell)
     & VAR_0)
     return -1;

 FUNC_1(&VAR_3->chip->IntStatus, 0);

 FUNC_1(&VAR_3->chip->Doorbell,
  ((VAR_2
   <<VAR_1) |
   (VAR_4<<12)));


 if ((VAR_6 = FUNC_2(VAR_3, 5, VAR_5)) < 0) {
  return -2;
 }else
  return 0;
}
