
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct elm_info {int elm_completion; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct elm_info*,int ) ;
 int FUNC_2 (struct elm_info*,int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_4, void *VAR_5)
{
 u32 VAR_6;
 struct elm_info *VAR_7 = VAR_5;

 VAR_6 = FUNC_1(VAR_7, VAR_0);


 if (VAR_6 & VAR_1) {
  FUNC_2(VAR_7, VAR_0,
    VAR_6 & VAR_1);
  FUNC_0(&VAR_7->elm_completion);
  return VAR_2;
 }

 return VAR_3;
}
