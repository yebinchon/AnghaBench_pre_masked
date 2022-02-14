
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct device {int dummy; } ;
struct ci_hdrc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct ci_hdrc*,int) ;
 struct ci_hdrc* FUNC_2 (struct device*) ;
 int FUNC_3 (struct ci_hdrc*,int ,int,int) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_4, u8 VAR_5, u8 VAR_6)
{
 struct ci_hdrc *VAR_7 = FUNC_2(VAR_4);
 int VAR_8;

 FUNC_3(VAR_7, VAR_0, 0xffffffff, VAR_3 | VAR_2);
 VAR_8 = FUNC_1(VAR_7, VAR_2);
 if (VAR_8)
  return VAR_8;

 FUNC_3(VAR_7, VAR_0, 0xffffffff,
   VAR_1 | VAR_3 | FUNC_0(VAR_5) | VAR_6);
 return FUNC_1(VAR_7, VAR_1);
}
