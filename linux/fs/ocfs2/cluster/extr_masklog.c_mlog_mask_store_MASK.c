
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char const*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_3(u64 VAR_3, const char *VAR_4, size_t VAR_5)
{
 if (!FUNC_2(VAR_4, "allow", 5)) {
  FUNC_1(VAR_3, VAR_1);
  FUNC_0(VAR_3, VAR_2);
 } else if (!FUNC_2(VAR_4, "deny", 4)) {
  FUNC_1(VAR_3, VAR_2);
  FUNC_0(VAR_3, VAR_1);
 } else if (!FUNC_2(VAR_4, "off", 3)) {
  FUNC_0(VAR_3, VAR_2);
  FUNC_0(VAR_3, VAR_1);
 } else
  return -VAR_0;

 return VAR_5;
}
