
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct arm_ccn {scalar_t__ base; int dt; } ;
typedef int irqreturn_t ;


 int FUNC_0 (int*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct arm_ccn*,int*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_5, void *VAR_6)
{
 irqreturn_t VAR_7 = VAR_4;
 struct arm_ccn *VAR_8 = VAR_6;
 u32 VAR_9[6];
 u32 VAR_10;
 int VAR_11;


 VAR_10 = VAR_9[0] = FUNC_3(VAR_8->base + VAR_2);
 if (VAR_10 & VAR_3) {
  VAR_10 &= ~VAR_3;
  VAR_7 = FUNC_2(&VAR_8->dt);
 }


 for (VAR_11 = 1; VAR_11 < FUNC_0(VAR_9); VAR_11++) {
  VAR_9[VAR_11] = FUNC_3(VAR_8->base +
    VAR_2 + VAR_11 * 4);
  VAR_10 |= VAR_9[VAR_11];
 }
 if (VAR_10)
  VAR_7 |= FUNC_1(VAR_8, VAR_9);

 if (VAR_7 != VAR_4)
  FUNC_4(VAR_1,
    VAR_8->base + VAR_0);

 return VAR_7;
}
