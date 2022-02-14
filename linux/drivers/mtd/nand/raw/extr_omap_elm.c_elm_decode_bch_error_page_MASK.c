
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct elm_info {int elm_completion; } ;
struct elm_errorvec {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct elm_info* FUNC_0 (struct device*) ;
 int FUNC_1 (struct elm_info*,struct elm_errorvec*) ;
 int FUNC_2 (struct elm_info*,struct elm_errorvec*,int *) ;
 int FUNC_3 (struct elm_info*,int ) ;
 int FUNC_4 (struct elm_info*,struct elm_errorvec*) ;
 int FUNC_5 (struct elm_info*,int ,int) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct device *VAR_4, u8 *VAR_5,
  struct elm_errorvec *VAR_6)
{
 struct elm_info *VAR_7 = FUNC_0(VAR_4);
 u32 VAR_8;


 VAR_8 = FUNC_3(VAR_7, VAR_1);
 FUNC_5(VAR_7, VAR_1, VAR_8 & VAR_3);
 FUNC_5(VAR_7, VAR_0, VAR_2);


 FUNC_2(VAR_7, VAR_6, VAR_5);


 FUNC_4(VAR_7, VAR_6);


 FUNC_6(&VAR_7->elm_completion);


 VAR_8 = FUNC_3(VAR_7, VAR_0);
 FUNC_5(VAR_7, VAR_0, VAR_8 & ~VAR_2);
 FUNC_1(VAR_7, VAR_6);
}
