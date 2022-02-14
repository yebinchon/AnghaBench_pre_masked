
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct denali_controller {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct denali_controller*) ;
 int FUNC_1 (struct denali_controller*,int) ;

__attribute__((used)) static int FUNC_2(struct denali_controller *VAR_2)
{
 u32 VAR_3;


 VAR_3 = FUNC_1(VAR_2, VAR_1);


 FUNC_0(VAR_2);

 return VAR_3 & VAR_1 ? 0 : -VAR_0;
}
