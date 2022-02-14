
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct device {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_3__ {size_t mask; int txt; } ;


 size_t FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (int ,size_t) ;
 TYPE_1__* VAR_6 ;
 int FUNC_3 (struct device*,char*,int) ;
 int FUNC_4 (struct device*,char*,int ) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_7, void *VAR_8)
{
 u32 VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 struct device *VAR_14 = VAR_8;

 VAR_10 = FUNC_1(VAR_4);
 VAR_9 = FUNC_1(VAR_5);
 VAR_11 = FUNC_1(VAR_3);
 VAR_12 = VAR_9 & VAR_10;

 if (!VAR_12)
  return VAR_2;

 for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_6); VAR_13++) {
  if (VAR_6[VAR_13].mask & VAR_12) {
   FUNC_4(VAR_14, "ErrInt: %s\n",
         VAR_6[VAR_13].txt);
   if (VAR_6[VAR_13].mask & VAR_11) {

    FUNC_2(VAR_3, VAR_11);
   }
   if (VAR_6[VAR_13].mask & VAR_0) {
    FUNC_3(VAR_14, "Disabling error 0x%x\n",
     VAR_6[VAR_13].mask);
    VAR_10 &= ~VAR_6[VAR_13].mask;
    FUNC_2(VAR_4, VAR_10);
   }
  }
 }
 FUNC_2(VAR_5, VAR_9);

 return VAR_1;
}
