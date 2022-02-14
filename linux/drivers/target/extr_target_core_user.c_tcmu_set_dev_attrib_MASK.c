
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int substring_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int*) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static int FUNC_2(substring_t *VAR_1, u32 *VAR_2)
{
 int VAR_3, VAR_4;

 VAR_4 = FUNC_0(VAR_1, &VAR_3);
 if (VAR_4 < 0) {
  FUNC_1("match_int() failed for dev attrib. Error %d.\n",
         VAR_4);
  return VAR_4;
 }

 if (VAR_3 <= 0) {
  FUNC_1("Invalid dev attrib value %d. Must be greater than zero.\n",
         VAR_3);
  return -VAR_0;
 }
 *VAR_2 = VAR_3;
 return 0;
}
