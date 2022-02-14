
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct device {int dummy; } ;
struct ci_hdrc {int dummy; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct ci_hdrc*,int) ;
 struct ci_hdrc* FUNC_3 (struct device*) ;
 int FUNC_4 (struct ci_hdrc*,int ,int ) ;
 int FUNC_5 (struct ci_hdrc*,int ,int,int) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_4, u8 VAR_5)
{
 struct ci_hdrc *VAR_6 = FUNC_3(VAR_4);
 int VAR_7;

 FUNC_5(VAR_6, VAR_0, 0xffffffff, VAR_3 | VAR_2);
 VAR_7 = FUNC_2(VAR_6, VAR_2);
 if (VAR_7)
  return VAR_7;

 FUNC_5(VAR_6, VAR_0, 0xffffffff, VAR_1 | FUNC_1(VAR_5));
 VAR_7 = FUNC_2(VAR_6, VAR_1);
 if (VAR_7)
  return VAR_7;

 return FUNC_4(VAR_6, VAR_0, FUNC_0(15, 8)) >> 8;
}
