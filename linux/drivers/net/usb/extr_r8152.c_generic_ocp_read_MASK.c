
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct r8152 {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct r8152*,int,int,int,void*) ;
 int FUNC_1 (struct r8152*) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct r8152 *VAR_3, u16 VAR_4, u16 VAR_5,
       void *VAR_6, u16 VAR_7)
{
 u16 VAR_8 = 64;
 int VAR_9 = 0;

 if (FUNC_2(VAR_2, &VAR_3->flags))
  return -VAR_0;


 if ((VAR_5 & 3) || !VAR_5 || (VAR_4 & 3) || !VAR_6)
  return -VAR_1;

 if ((u32)VAR_4 + (u32)VAR_5 > 0xffff)
  return -VAR_1;

 while (VAR_5) {
  if (VAR_5 > VAR_8) {
   VAR_9 = FUNC_0(VAR_3, VAR_4, VAR_7, VAR_8, VAR_6);
   if (VAR_9 < 0)
    break;

   VAR_4 += VAR_8;
   VAR_6 += VAR_8;
   VAR_5 -= VAR_8;
  } else {
   VAR_9 = FUNC_0(VAR_3, VAR_4, VAR_7, VAR_5, VAR_6);
   if (VAR_9 < 0)
    break;

   VAR_4 += VAR_5;
   VAR_6 += VAR_5;
   VAR_5 = 0;
   break;
  }
 }

 if (VAR_9 == -VAR_0)
  FUNC_1(VAR_3);

 return VAR_9;
}
