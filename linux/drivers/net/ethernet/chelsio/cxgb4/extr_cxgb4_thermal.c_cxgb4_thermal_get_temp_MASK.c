
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct thermal_zone_device {struct adapter* devdata; } ;
struct adapter {int pf; int mbox; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (struct adapter*,int ,int ,int ,int,int*,int*) ;

__attribute__((used)) static int FUNC_4(struct thermal_zone_device *VAR_3,
      int *VAR_4)
{
 struct adapter *VAR_5 = VAR_3->devdata;
 u32 VAR_6, VAR_7;
 int VAR_8;

 VAR_6 = (FUNC_0(VAR_0) |
   FUNC_1(VAR_1) |
   FUNC_2(VAR_2));

 VAR_8 = FUNC_3(VAR_5, VAR_5->mbox, VAR_5->pf, 0, 1,
         &VAR_6, &VAR_7);
 if (VAR_8 < 0 || VAR_7 == 0)
  return -1;

 *VAR_4 = VAR_7 * 1000;
 return 0;
}
