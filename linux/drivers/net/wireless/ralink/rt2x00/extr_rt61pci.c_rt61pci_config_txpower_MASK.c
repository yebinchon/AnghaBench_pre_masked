
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt2x00_dev {int dummy; } ;
struct rf_channel {void* rf4; void* rf3; void* rf2; void* rf1; } ;


 void* FUNC_0 (struct rt2x00_dev*,int) ;
 int FUNC_1 (struct rt2x00_dev*,struct rf_channel*,int const) ;

__attribute__((used)) static void FUNC_2(struct rt2x00_dev *VAR_0,
       const int VAR_1)
{
 struct rf_channel VAR_2;

 VAR_2.rf1 = FUNC_0(VAR_0, 1);
 VAR_2.rf2 = FUNC_0(VAR_0, 2);
 VAR_2.rf3 = FUNC_0(VAR_0, 3);
 VAR_2.rf4 = FUNC_0(VAR_0, 4);

 FUNC_1(VAR_0, &VAR_2, VAR_1);
}
