
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jmb38x_ms_host {int io_pos; int* io_word; } ;



__attribute__((used)) static unsigned int FUNC_0(struct jmb38x_ms_host *VAR_0,
         unsigned char *VAR_1,
         unsigned int VAR_2)
{
 unsigned int VAR_3 = 0;

 while (VAR_0->io_pos > 4 && VAR_2) {
  VAR_1[VAR_3++] = VAR_0->io_word[0] & 0xff;
  VAR_0->io_word[0] >>= 8;
  VAR_2--;
  VAR_0->io_pos--;
 }

 if (!VAR_2)
  return VAR_3;

 while (VAR_0->io_pos && VAR_2) {
  VAR_1[VAR_3++] = VAR_0->io_word[1] & 0xff;
  VAR_0->io_word[1] >>= 8;
  VAR_2--;
  VAR_0->io_pos--;
 }

 return VAR_3;
}
