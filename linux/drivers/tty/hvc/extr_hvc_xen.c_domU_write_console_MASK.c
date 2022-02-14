
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct xencons_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int VAR_1 ;
 int FUNC_1 (struct xencons_info*,char const*,int) ;
 scalar_t__ FUNC_2 (int) ;
 struct xencons_info* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(uint32_t VAR_2, const char *VAR_3, int VAR_4)
{
 int VAR_5 = VAR_4;
 struct xencons_info *VAR_6 = FUNC_3(VAR_2);
 if (VAR_6 == ((void*)0))
  return -VAR_0;







 while (VAR_4) {
  int VAR_7 = FUNC_1(VAR_6, VAR_3, VAR_4);

  VAR_3 += VAR_7;
  VAR_4 -= VAR_7;

  if (FUNC_2(VAR_4))
   FUNC_0(VAR_1, ((void*)0));
 }

 return VAR_5;
}
