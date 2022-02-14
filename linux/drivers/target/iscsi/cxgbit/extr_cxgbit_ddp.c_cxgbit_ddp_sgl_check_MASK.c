
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {unsigned int offset; int length; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 struct scatterlist* FUNC_0 (struct scatterlist*) ;

__attribute__((used)) static int FUNC_1(struct scatterlist *VAR_2,
    unsigned int VAR_3)
{
 unsigned int VAR_4 = VAR_3 - 1;
 unsigned int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++, VAR_2 = FUNC_0(VAR_2)) {
  unsigned int VAR_6 = VAR_2->length + VAR_2->offset;

  if ((VAR_2->offset & 0x3) || (VAR_5 && VAR_2->offset) ||
      ((VAR_5 != VAR_4) && (VAR_6 != VAR_1))) {
   return -VAR_0;
  }
 }

 return 0;
}
