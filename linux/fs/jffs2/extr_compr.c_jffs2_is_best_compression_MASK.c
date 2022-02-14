
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct jffs2_compressor {int compr; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct jffs2_compressor *VAR_3,
  struct jffs2_compressor *VAR_4, uint32_t VAR_5, uint32_t VAR_6)
{
 switch (VAR_2) {
 case 128:
  if (VAR_6 > VAR_5)
   return 1;
  return 0;
 case 129:
  if ((VAR_3->compr == VAR_1) && (VAR_6 > VAR_5))
   return 1;
  if ((VAR_4->compr != VAR_1) && (VAR_6 > VAR_5))
   return 1;
  if ((VAR_3->compr == VAR_1) && (VAR_6 > (VAR_5 * VAR_0 / 100)))
   return 1;
  if ((VAR_6 * VAR_0 / 100) > VAR_5)
   return 1;

  return 0;
 }

 return 0;
}
