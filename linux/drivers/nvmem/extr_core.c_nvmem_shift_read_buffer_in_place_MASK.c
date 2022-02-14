
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nvmem_cell {int bit_offset; int bytes; int nbits; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static void FUNC_2(struct nvmem_cell *VAR_1, void *VAR_2)
{
 u8 *VAR_3, *VAR_4;
 int VAR_5, VAR_6, VAR_7 = VAR_1->bit_offset;

 VAR_3 = VAR_4 = VAR_2;
 if (VAR_7) {

  *VAR_4++ >>= VAR_7;


  for (VAR_5 = 1; VAR_5 < VAR_1->bytes; VAR_5++) {

   *VAR_3 |= *VAR_4 << (VAR_0 - VAR_7);

   VAR_3 = VAR_4;
   *VAR_4++ >>= VAR_7;
  }
 } else {

  VAR_3 += VAR_1->bytes - 1;
 }


 VAR_6 = VAR_1->bytes - FUNC_0(VAR_1->nbits, VAR_0);
 while (--VAR_6 >= 0)
  *VAR_3-- = 0;


 *VAR_3 &= FUNC_1((VAR_1->nbits%VAR_0) - 1, 0);
}
