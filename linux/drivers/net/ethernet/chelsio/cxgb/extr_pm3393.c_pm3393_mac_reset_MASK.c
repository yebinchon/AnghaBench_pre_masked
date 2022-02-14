
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {TYPE_1__* pdev; } ;
typedef TYPE_2__ adapter_t ;
struct TYPE_7__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,char*,int,int,int,int,int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int ,int*) ;
 int FUNC_5 (TYPE_2__*,int ,int) ;

__attribute__((used)) static int FUNC_6(adapter_t * VAR_8)
{
 u32 VAR_9;
 u32 VAR_10;
 u32 VAR_11;
 u32 VAR_12;
 u32 VAR_13;
 u32 VAR_14;
 int VAR_15;
 VAR_14 = 0;
 for (VAR_15 = 0; VAR_15 < 3 && !VAR_14; VAR_15++) {

  FUNC_4(VAR_8, VAR_0, &VAR_9);
  VAR_9 &= ~1;
  FUNC_5(VAR_8, VAR_0, VAR_9);


  FUNC_2(1);


  FUNC_2(1);


  FUNC_2(2 );


  VAR_9 |= 1;
  FUNC_5(VAR_8, VAR_0, VAR_9);


  FUNC_2(15 );


  FUNC_2(1);




  FUNC_4(VAR_8, FUNC_0(VAR_7), &VAR_9);
  VAR_11 = (VAR_9 & VAR_1);





  VAR_10 = (VAR_2
                                                   |
       VAR_3 |
       VAR_4 |
       VAR_5);
  VAR_12 = (VAR_9 & VAR_10);




  VAR_13 =
      (VAR_9 & VAR_6);

  VAR_14 = (VAR_11 && !VAR_12
        && VAR_13);

  if (FUNC_3(VAR_8))
   FUNC_1(&VAR_8->pdev->dev,
    "PM3393 HW reset %d: pl4_reset 0x%x, val 0x%x, "
    "is_pl4_outof_lock 0x%x, xaui_locked 0x%x\n",
    VAR_15, VAR_11, VAR_9,
    VAR_12, VAR_13);
 }
 return VAR_14 ? 0 : 1;
}
