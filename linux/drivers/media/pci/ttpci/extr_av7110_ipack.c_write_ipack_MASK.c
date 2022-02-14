
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ipack {int count; int buf; int size; } ;


 int FUNC_0 (int,int const*,int) ;
 int FUNC_1 (struct ipack*) ;

__attribute__((used)) static void FUNC_2(struct ipack *VAR_0, const u8 *VAR_1, int VAR_2)
{
 u8 VAR_3[3] = { 0x00, 0x00, 0x01 };

 if (VAR_0->count < 6) {
  FUNC_0(VAR_0->buf, VAR_3, 3);
  VAR_0->count = 6;
 }

 if (VAR_0->count + VAR_2 < VAR_0->size){
  FUNC_0(VAR_0->buf+VAR_0->count, VAR_1, VAR_2);
  VAR_0->count += VAR_2;
 } else {
  int VAR_4 = VAR_0->size - VAR_0->count;
  FUNC_0(VAR_0->buf+VAR_0->count, VAR_1, VAR_4);
  VAR_0->count += VAR_4;
  FUNC_1(VAR_0);
  if (VAR_2 - VAR_4 > 0)
   FUNC_2(VAR_0, VAR_1 + VAR_4, VAR_2 - VAR_4);
 }
}
