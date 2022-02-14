
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct da9150_fg {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct da9150_fg*,int ,int ) ;
 int FUNC_1 (struct da9150_fg*) ;
 int FUNC_2 (struct da9150_fg*,int ,int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_4, void *VAR_5)
{
 struct da9150_fg *VAR_6 = VAR_5;
 u32 VAR_7;


 VAR_7 = FUNC_0(VAR_6, VAR_1,
       VAR_2);


 if (VAR_7 & VAR_0)
  FUNC_1(VAR_6);


 FUNC_2(VAR_6, VAR_1,
        VAR_2, VAR_7);

 return VAR_3;
}
