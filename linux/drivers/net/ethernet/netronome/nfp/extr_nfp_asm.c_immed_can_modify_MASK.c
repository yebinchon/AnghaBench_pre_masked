
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;

__attribute__((used)) static bool FUNC_2(u64 VAR_4)
{
 if (FUNC_0(VAR_1, VAR_4) ||
     FUNC_0(VAR_2, VAR_4) ||
     FUNC_0(VAR_3, VAR_4) != VAR_0) {
  FUNC_1("Can't decode/encode immed!\n");
  return 0;
 }
 return 1;
}
