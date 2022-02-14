
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rbsp {int pos; int size; int* buf; } ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct rbsp *VAR_1, int VAR_2)
{
 int VAR_3 = 7 - (VAR_1->pos % 8);
 int VAR_4 = VAR_1->pos++ / 8;

 if (VAR_4 >= VAR_1->size)
  return -VAR_0;

 VAR_1->buf[VAR_4] &= ~(1 << VAR_3);
 VAR_1->buf[VAR_4] |= VAR_2 << VAR_3;

 return 0;
}
