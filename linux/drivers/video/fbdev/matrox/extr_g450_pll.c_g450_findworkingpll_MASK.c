
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct matrox_fb_info {int dummy; } ;


 int FUNC_0 (struct matrox_fb_info*,unsigned int,unsigned int) ;
 scalar_t__ FUNC_1 (struct matrox_fb_info*,unsigned int,unsigned int) ;

__attribute__((used)) static inline unsigned int FUNC_2(struct matrox_fb_info *VAR_0,
            unsigned int VAR_1,
            unsigned int *VAR_2,
            unsigned int VAR_3)
{
 unsigned int VAR_4 = 0;
 unsigned int VAR_5;
 unsigned int VAR_6 = VAR_2[0];

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  unsigned int VAR_7[3];
  unsigned int *VAR_8;
  {
   unsigned int VAR_9;

   VAR_8 = VAR_7;
   VAR_9 = VAR_2[VAR_5];
   if (VAR_9 & 0x38) {
    *VAR_8++ = VAR_9 - 8;
   }
   if ((VAR_9 & 0x38) != 0x38) {
    *VAR_8++ = VAR_9 + 8;
   }
   *VAR_8 = VAR_9;
  }
  while (VAR_8 >= VAR_7) {
   unsigned int VAR_10 = *VAR_8--;

   if (FUNC_1(VAR_0, VAR_10 - 0x0300, VAR_1) &&
       FUNC_1(VAR_0, VAR_10 + 0x0300, VAR_1) &&
       FUNC_1(VAR_0, VAR_10 - 0x0200, VAR_1) &&
       FUNC_1(VAR_0, VAR_10 + 0x0200, VAR_1) &&
       FUNC_1(VAR_0, VAR_10 - 0x0100, VAR_1) &&
       FUNC_1(VAR_0, VAR_10 + 0x0100, VAR_1)) {
    if (FUNC_1(VAR_0, VAR_10, VAR_1)) {
     return VAR_10;
    }
   } else if (!VAR_4 && FUNC_1(VAR_0, VAR_10, VAR_1)) {
    VAR_6 = VAR_10;
    VAR_4 = 1;
   }
  }
 }
 FUNC_0(VAR_0, VAR_6, VAR_1);
 return VAR_6;
}
