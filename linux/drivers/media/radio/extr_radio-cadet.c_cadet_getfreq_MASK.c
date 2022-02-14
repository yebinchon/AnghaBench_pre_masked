
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cadet {int is_fm_band; } ;


 unsigned int FUNC_0 (struct cadet*) ;

__attribute__((used)) static unsigned FUNC_1(struct cadet *VAR_0)
{
 int VAR_1;
 unsigned VAR_2 = 0, VAR_3, VAR_4 = 0;




 VAR_4 = FUNC_0(VAR_0);




 if (!VAR_0->is_fm_band)
  return ((VAR_4 & 0x7fff) - 450) * 16;

 VAR_3 = 12500;
 for (VAR_1 = 0; VAR_1 < 14; VAR_1++) {
  if ((VAR_4 & 0x01) != 0)
   VAR_2 += VAR_3;
  VAR_3 = VAR_3 << 1;
  VAR_4 = VAR_4 >> 1;
 }
 VAR_2 -= 10700000;
 VAR_2 = (VAR_2 * 16) / 1000;
 return VAR_2;
}
