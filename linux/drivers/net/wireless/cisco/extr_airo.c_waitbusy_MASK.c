
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct airo_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct airo_info*,int ) ;
 int FUNC_1 (struct airo_info*,int ,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3 (struct airo_info *VAR_4) {
 int VAR_5 = 0;
 while ((FUNC_0(VAR_4, VAR_0) & VAR_1) && (VAR_5 < 10000)) {
  FUNC_2 (10);
  if ((++VAR_5 % 20) == 0)
   FUNC_1(VAR_4, VAR_2, VAR_3);
 }
 return VAR_5 < 10000;
}
