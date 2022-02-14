
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_6__ {int timeout; int bootstatus; } ;
struct esb_dev {TYPE_4__ wdd; TYPE_1__* pdev; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct esb_dev*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 (struct esb_dev*) ;
 int FUNC_4 (TYPE_1__*,int ,int*) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;
 int FUNC_6 (TYPE_1__*,int ,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int,int ) ;

__attribute__((used)) static void FUNC_9(struct esb_dev *VAR_6)
{
 u8 VAR_7;
 u16 VAR_8;
 FUNC_6(VAR_6->pdev, VAR_0, 0x0003);


 FUNC_4(VAR_6->pdev, VAR_1, &VAR_7);
 if (VAR_7 & VAR_2)
  FUNC_1(&VAR_6->pdev->dev, "nowayout already set\n");


 FUNC_5(VAR_6->pdev, VAR_1, 0x00);


 FUNC_3(VAR_6);
 VAR_8 = FUNC_7(FUNC_0(VAR_6));
 if (VAR_8 & VAR_4)
  VAR_6->wdd.bootstatus = VAR_5;


 FUNC_3(VAR_6);
 FUNC_8((VAR_4 | VAR_3), FUNC_0(VAR_6));


 FUNC_2(&VAR_6->wdd, VAR_6->wdd.timeout);
}
