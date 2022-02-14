
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct niu {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct niu*,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct niu *VAR_1, u32 VAR_2, char *VAR_3,
        int VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  int VAR_6 = FUNC_0(VAR_1, VAR_2 + VAR_5);
  if (VAR_6 < 0)
   return VAR_6;
  *VAR_3++ = VAR_6;
  if (!VAR_6)
   break;
 }
 if (VAR_5 >= VAR_4)
  return -VAR_0;

 return VAR_5 + 1;
}
