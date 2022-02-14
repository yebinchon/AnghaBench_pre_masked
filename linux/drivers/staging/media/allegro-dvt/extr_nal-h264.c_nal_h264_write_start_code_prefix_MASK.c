
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rbsp {int* data; int pos; scalar_t__ size; int error; } ;


 scalar_t__ FUNC_0 (int,int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct rbsp *VAR_1)
{
 u8 *VAR_2 = VAR_1->data + FUNC_0(VAR_1->pos, 8);
 int VAR_3 = 4;

 if (FUNC_0(VAR_1->pos, 8) + VAR_3 > VAR_1->size) {
  VAR_1->error = -VAR_0;
  return;
 }

 VAR_2[0] = 0x00;
 VAR_2[1] = 0x00;
 VAR_2[2] = 0x00;
 VAR_2[3] = 0x01;

 VAR_1->pos += VAR_3 * 8;
}
