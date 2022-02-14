
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
typedef int u32 ;
struct TYPE_2__ {void** data; int width; int height; } ;
struct vc_data {TYPE_1__ vc_font; scalar_t__ vc_hi_font_mask; } ;
struct console_font {void** data; int width; int height; int charcount; } ;


 int FUNC_0 (void**,void**,int) ;
 int FUNC_1 (void**,int ,int) ;

__attribute__((used)) static int FUNC_2(struct vc_data *VAR_0, struct console_font *VAR_1)
{
 u8 *VAR_2 = VAR_0->vc_font.data;
 u8 *VAR_3 = VAR_1->data;
 int VAR_4, VAR_5;

 VAR_1->width = VAR_0->vc_font.width;
 VAR_1->height = VAR_0->vc_font.height;
 VAR_1->charcount = VAR_0->vc_hi_font_mask ? 512 : 256;
 if (!VAR_1->data)
  return 0;

 if (VAR_1->width <= 8) {
  VAR_5 = VAR_0->vc_font.height;
  for (VAR_4 = 0; VAR_4 < VAR_1->charcount; VAR_4++) {
   FUNC_0(VAR_3, VAR_2, VAR_5);
   FUNC_1(VAR_3 + VAR_5, 0, 32 - VAR_5);
   VAR_3 += 32;
   VAR_2 += VAR_5;
  }
 } else if (VAR_1->width <= 16) {
  VAR_5 = VAR_0->vc_font.height * 2;
  for (VAR_4 = 0; VAR_4 < VAR_1->charcount; VAR_4++) {
   FUNC_0(VAR_3, VAR_2, VAR_5);
   FUNC_1(VAR_3 + VAR_5, 0, 64 - VAR_5);
   VAR_3 += 64;
   VAR_2 += VAR_5;
  }
 } else if (VAR_1->width <= 24) {
  for (VAR_4 = 0; VAR_4 < VAR_1->charcount; VAR_4++) {
   for (VAR_5 = 0; VAR_5 < VAR_0->vc_font.height; VAR_5++) {
    *VAR_3++ = VAR_2[0];
    *VAR_3++ = VAR_2[1];
    *VAR_3++ = VAR_2[2];
    VAR_2 += sizeof(u32);
   }
   FUNC_1(VAR_3, 0, 3 * (32 - VAR_5));
   VAR_3 += 3 * (32 - VAR_5);
  }
 } else {
  VAR_5 = VAR_0->vc_font.height * 4;
  for (VAR_4 = 0; VAR_4 < VAR_1->charcount; VAR_4++) {
   FUNC_0(VAR_3, VAR_2, VAR_5);
   FUNC_1(VAR_3 + VAR_5, 0, 128 - VAR_5);
   VAR_3 += 128;
   VAR_2 += VAR_5;
  }
 }
 return 0;
}
