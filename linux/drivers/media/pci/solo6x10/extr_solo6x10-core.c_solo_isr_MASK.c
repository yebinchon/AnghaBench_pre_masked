
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct solo_dev {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct solo_dev*) ;
 int FUNC_2 (struct solo_dev*) ;
 int FUNC_3 (struct solo_dev*) ;
 int FUNC_4 (struct solo_dev*) ;
 int FUNC_5 (struct solo_dev*,int) ;
 int FUNC_6 (struct solo_dev*,int ) ;
 int FUNC_7 (struct solo_dev*,int ,int) ;
 int FUNC_8 (struct solo_dev*) ;
 int FUNC_9 (struct solo_dev*) ;

__attribute__((used)) static irqreturn_t FUNC_10(int VAR_9, void *VAR_10)
{
 struct solo_dev *VAR_11 = VAR_10;
 u32 VAR_12;
 int VAR_13;

 VAR_12 = FUNC_6(VAR_11, VAR_6);
 if (!VAR_12)
  return VAR_1;


 FUNC_7(VAR_11, VAR_6, VAR_12);

 if (VAR_12 & VAR_5)
  FUNC_4(VAR_11);

 for (VAR_13 = 0; VAR_13 < VAR_8; VAR_13++)
  if (VAR_12 & FUNC_0(VAR_13))
   FUNC_5(VAR_11, VAR_13);

 if (VAR_12 & VAR_4)
  FUNC_3(VAR_11);

 if (VAR_12 & VAR_7) {
  FUNC_9(VAR_11);
  FUNC_8(VAR_11);
 }

 if (VAR_12 & VAR_2)
  FUNC_1(VAR_11);

 if (VAR_12 & VAR_3)
  FUNC_2(VAR_11);

 return VAR_0;
}
