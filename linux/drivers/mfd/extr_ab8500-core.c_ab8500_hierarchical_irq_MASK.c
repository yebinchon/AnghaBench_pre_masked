
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct ab8500 {scalar_t__ it_latchhier_num; int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ab8500*,scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct ab8500*,int ,scalar_t__,scalar_t__*) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_3, void *VAR_4)
{
 struct ab8500 *VAR_5 = VAR_4;
 u8 VAR_6;

 FUNC_1(VAR_5->dev, "interrupt\n");


 for (VAR_6 = 0; VAR_6 < (VAR_5->it_latchhier_num); VAR_6++) {
  int VAR_7;
  u8 VAR_8;

  VAR_7 = FUNC_2(VAR_5, VAR_0,
   VAR_1 + VAR_6, &VAR_8);
  if (VAR_7 < 0 || VAR_8 == 0)
   continue;

  VAR_7 = FUNC_0(VAR_5, VAR_6, VAR_8);
  if (VAR_7 < 0)
   break;
 }
 return VAR_2;
}
