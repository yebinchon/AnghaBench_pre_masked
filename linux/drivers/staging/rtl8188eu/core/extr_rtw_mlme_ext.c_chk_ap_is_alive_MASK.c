
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sta_info {int dummy; } ;
struct adapter {int dummy; } ;


 scalar_t__ FUNC_0 (struct sta_info*) ;
 scalar_t__ FUNC_1 (struct sta_info*) ;
 scalar_t__ FUNC_2 (struct sta_info*) ;
 scalar_t__ FUNC_3 (struct sta_info*) ;
 scalar_t__ FUNC_4 (struct sta_info*) ;
 scalar_t__ FUNC_5 (struct sta_info*) ;
 int FUNC_6 (struct sta_info*) ;

__attribute__((used)) static u8 FUNC_7(struct adapter *VAR_0, struct sta_info *VAR_1)
{
 u8 VAR_2 = 0;

 if ((FUNC_4(VAR_1) == FUNC_1(VAR_1)) &&
     FUNC_3(VAR_1) == FUNC_0(VAR_1) &&
     FUNC_5(VAR_1) == FUNC_2(VAR_1))
  VAR_2 = 0;
 else
  VAR_2 = 1;

 FUNC_6(VAR_1);

 return VAR_2;
}
