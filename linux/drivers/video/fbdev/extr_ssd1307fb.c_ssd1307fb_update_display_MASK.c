
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct ssd1307fb_par {int height; unsigned int width; int client; TYPE_2__* info; } ;
struct ssd1307fb_array {int* data; } ;
struct TYPE_3__ {unsigned int line_length; } ;
struct TYPE_4__ {int* screen_buffer; TYPE_1__ fix; } ;


 unsigned int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (struct ssd1307fb_array*) ;
 struct ssd1307fb_array* FUNC_2 (unsigned int,int ) ;
 int FUNC_3 (int ,struct ssd1307fb_array*,unsigned int) ;

__attribute__((used)) static void FUNC_4(struct ssd1307fb_par *VAR_1)
{
 struct ssd1307fb_array *VAR_2;
 u8 *VAR_3 = VAR_1->info->screen_buffer;
 unsigned int VAR_4 = VAR_1->info->fix.line_length;
 unsigned int VAR_5 = FUNC_0(VAR_1->height, 8);
 int VAR_6, VAR_7, VAR_8;

 VAR_2 = FUNC_2(VAR_1->width * VAR_5, VAR_0);
 if (!VAR_2)
  return;
 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  for (VAR_7 = 0; VAR_7 < VAR_1->width; VAR_7++) {
   int VAR_9 = 8;
   u32 VAR_10 = VAR_6 * VAR_1->width + VAR_7;
   VAR_2->data[VAR_10] = 0;

   if (VAR_6 + 1 == VAR_5 && VAR_1->height % 8)
    VAR_9 = VAR_1->height % 8;
   for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
    u8 VAR_11 = VAR_3[(8 * VAR_6 + VAR_8) * VAR_4 +
            VAR_7 / 8];
    u8 VAR_12 = (VAR_11 >> (VAR_7 % 8)) & 1;
    VAR_2->data[VAR_10] |= VAR_12 << VAR_8;
   }
  }
 }

 FUNC_3(VAR_1->client, VAR_2, VAR_1->width * VAR_5);
 FUNC_1(VAR_2);
}
