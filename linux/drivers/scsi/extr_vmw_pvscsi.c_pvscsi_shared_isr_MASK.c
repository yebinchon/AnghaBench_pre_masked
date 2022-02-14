
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pvscsi_adapter {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,void*) ;
 int FUNC_1 (struct pvscsi_adapter*) ;
 int FUNC_2 (void*,int) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_2, void *VAR_3)
{
 struct pvscsi_adapter *VAR_4 = VAR_3;
 u32 VAR_5 = FUNC_1(VAR_4);

 if (!(VAR_5 & VAR_1))
  return VAR_0;
 FUNC_2(VAR_3, VAR_5);
 return FUNC_0(VAR_2, VAR_3);
}
