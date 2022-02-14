
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qdio_buffer {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct qdio_buffer**,unsigned int) ;

int FUNC_2(struct qdio_buffer **VAR_3, unsigned int VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5 += VAR_2) {
  VAR_3[VAR_5] = (void *) FUNC_0(VAR_1);
  if (!VAR_3[VAR_5]) {
   FUNC_1(VAR_3, VAR_4);
   return -VAR_0;
  }
 }
 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
  if (VAR_5 % VAR_2)
   VAR_3[VAR_5] = VAR_3[VAR_5 - 1] + 1;
 return 0;
}
