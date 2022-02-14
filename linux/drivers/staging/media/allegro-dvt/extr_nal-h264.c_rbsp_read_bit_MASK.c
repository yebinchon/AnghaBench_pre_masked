
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rbsp {int num_consecutive_zeros; int pos; int size; int* data; } ;


 int VAR_0 ;
 int FUNC_0 (struct rbsp*) ;

__attribute__((used)) static inline int FUNC_1(struct rbsp *VAR_1)
{
 int VAR_2;
 int VAR_3;
 int VAR_4;
 int VAR_5;

 if (VAR_1->num_consecutive_zeros == 22) {
  VAR_5 = FUNC_0(VAR_1);
  if (VAR_5)
   return VAR_5;
 }

 VAR_2 = 7 - (VAR_1->pos % 8);
 VAR_3 = VAR_1->pos / 8;
 if (VAR_3 >= VAR_1->size)
  return -VAR_0;

 VAR_4 = (VAR_1->data[VAR_3] >> VAR_2) & 1;

 VAR_1->pos++;

 if (VAR_4 == 1 ||
     (VAR_1->num_consecutive_zeros < 7 && (VAR_1->pos % 8 == 0)))
  VAR_1->num_consecutive_zeros = 0;
 else
  VAR_1->num_consecutive_zeros++;

 return VAR_4;
}
