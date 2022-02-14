
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ch_thermal {int trip_temp; int * tzdev; int trip_type; } ;
struct adapter {int pdev_dev; int pf; int mbox; struct ch_thermal ch_thermal; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (struct adapter*,int ,int ,int ,int,int*,int*) ;
 int * FUNC_7 (char*,int,int ,struct adapter*,int *,int *,int ,int ) ;

int FUNC_8(struct adapter *VAR_6)
{
 struct ch_thermal *VAR_7 = &VAR_6->ch_thermal;
 int VAR_8 = VAR_0;
 u32 VAR_9, VAR_10;
 int VAR_11;




 VAR_9 = (FUNC_0(VAR_1) |
   FUNC_1(VAR_2) |
   FUNC_2(VAR_3));

 VAR_11 = FUNC_6(VAR_6, VAR_6->mbox, VAR_6->pf, 0, 1,
         &VAR_9, &VAR_10);
 if (VAR_11 < 0) {
  VAR_8 = 0;
 } else {
  VAR_7->trip_temp = VAR_10 * 1000;
  VAR_7->trip_type = VAR_4;
 }

 VAR_7->tzdev = FUNC_7("cxgb4", VAR_8,
        0, VAR_6,
        &VAR_5,
        ((void*)0), 0, 0);
 if (FUNC_3(VAR_7->tzdev)) {
  VAR_11 = FUNC_4(VAR_7->tzdev);
  FUNC_5(VAR_6->pdev_dev, "Failed to register thermal zone\n");
  VAR_7->tzdev = ((void*)0);
  return VAR_11;
 }
 return 0;
}
