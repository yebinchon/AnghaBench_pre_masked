
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {unsigned int length; unsigned int offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int,char*,int,int,int,unsigned int) ;
 struct scatterlist* FUNC_1 (struct scatterlist*) ;

__attribute__((used)) static int FUNC_2(struct scatterlist *VAR_3, int VAR_4)
{
 int VAR_5;
 int VAR_6 = VAR_4 - 1;
 struct scatterlist *VAR_7 = VAR_3;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++, VAR_7 = FUNC_1(VAR_7)) {
  unsigned int VAR_8 = VAR_7->length + VAR_7->offset;

  if ((VAR_7->offset & 0x3) || (VAR_5 && VAR_7->offset) ||
      ((VAR_5 != VAR_6) && VAR_8 != VAR_2)) {
   FUNC_0(1 << VAR_0,
      "sg %u/%u, %u,%u, not aligned.\n",
      VAR_5, VAR_4, VAR_7->offset, VAR_7->length);
   goto err_out;
  }
 }
 return 0;
err_out:
 return -VAR_1;
}
