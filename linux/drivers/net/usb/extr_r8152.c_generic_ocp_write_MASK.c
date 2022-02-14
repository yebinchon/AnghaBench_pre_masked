
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
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct r8152*) ;
 int FUNC_1 (struct r8152*,int,int,int,void*) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct r8152 *VAR_6, u16 VAR_7, u16 VAR_8,
        u16 VAR_9, void *VAR_10, u16 VAR_11)
{
 int VAR_12;
 u16 VAR_13, VAR_14, VAR_15;
 u16 VAR_16 = 512;

 if (FUNC_2(VAR_5, &VAR_6->flags))
  return -VAR_3;


 if ((VAR_9 & 3) || !VAR_9 || (VAR_7 & 3) || !VAR_10)
  return -VAR_4;

 if ((u32)VAR_7 + (u32)VAR_9 > 0xffff)
  return -VAR_4;

 VAR_13 = VAR_8 & VAR_2;
 VAR_14 = VAR_8 & VAR_1;

 VAR_15 = VAR_13 | (VAR_13 << 4);
 VAR_12 = FUNC_1(VAR_6, VAR_7, VAR_11 | VAR_15, 4, VAR_10);
 if (VAR_12 < 0)
  goto error1;

 VAR_7 += 4;
 VAR_10 += 4;
 VAR_9 -= 4;

 if (VAR_9) {
  VAR_9 -= 4;

  while (VAR_9) {
   if (VAR_9 > VAR_16) {
    VAR_12 = FUNC_1(VAR_6, VAR_7,
          VAR_11 | VAR_0,
          VAR_16, VAR_10);
    if (VAR_12 < 0)
     goto error1;

    VAR_7 += VAR_16;
    VAR_10 += VAR_16;
    VAR_9 -= VAR_16;
   } else {
    VAR_12 = FUNC_1(VAR_6, VAR_7,
          VAR_11 | VAR_0,
          VAR_9, VAR_10);
    if (VAR_12 < 0)
     goto error1;

    VAR_7 += VAR_9;
    VAR_10 += VAR_9;
    VAR_9 = 0;
    break;
   }
  }

  VAR_15 = VAR_14 | (VAR_14 >> 4);
  VAR_12 = FUNC_1(VAR_6, VAR_7, VAR_11 | VAR_15, 4, VAR_10);
  if (VAR_12 < 0)
   goto error1;
 }

error1:
 if (VAR_12 == -VAR_3)
  FUNC_0(VAR_6);

 return VAR_12;
}
