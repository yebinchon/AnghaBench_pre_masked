
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct go7007 {int width; int parse_length; int* active_map; int modet_word; } ;



__attribute__((used)) static void FUNC_0(struct go7007 *VAR_0)
{
 int VAR_1, VAR_2, VAR_3, VAR_4 = ((VAR_0->width >> 4) + 7) >> 3;

 for (VAR_3 = 0; VAR_3 < 16; ++VAR_3) {
  VAR_2 = (((VAR_0->parse_length - 1) << 3) + VAR_3) / (VAR_0->width >> 4);
  VAR_1 = (((VAR_0->parse_length - 1) << 3) + VAR_3) % (VAR_0->width >> 4);
  if (VAR_4 * VAR_2 + (VAR_1 >> 3) < sizeof(VAR_0->active_map))
   VAR_0->active_map[VAR_4 * VAR_2 + (VAR_1 >> 3)] |=
     (VAR_0->modet_word & 1) << (VAR_1 & 0x7);
  VAR_0->modet_word >>= 1;
 }
}
