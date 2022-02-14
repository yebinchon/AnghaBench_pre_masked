
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*,...) ;

__attribute__((used)) static inline int FUNC_1(int VAR_4, int VAR_5, int VAR_6)
{
 if (VAR_6 == VAR_3 || VAR_6 == VAR_0 || VAR_4 < VAR_5)
  return VAR_4;

 if (VAR_6 == VAR_2) {

  FUNC_0(VAR_4 == 0,
         "vs-8005: for INSERT mode and item number of inserted item");

  return VAR_4 - 1;
 }

 FUNC_0(VAR_6 != VAR_1,
        "vs-8010: old_item_num: mode must be M_DELETE (mode = \'%c\'",
        VAR_6);

 return VAR_4 + 1;
}
