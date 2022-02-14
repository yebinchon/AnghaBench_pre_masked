
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mon_reader_bin {scalar_t__ b_cnt; scalar_t__ b_size; unsigned int b_in; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct mon_reader_bin*,unsigned int,unsigned int) ;

__attribute__((used)) static unsigned int FUNC_1(struct mon_reader_bin *VAR_1,
    unsigned int VAR_2)
{
 unsigned int VAR_3;
 unsigned int VAR_4;

 VAR_2 = (VAR_2 + VAR_0-1) & ~(VAR_0-1);
 if (VAR_1->b_cnt + VAR_2 > VAR_1->b_size)
  return ~0;
 if (VAR_1->b_in + VAR_2 > VAR_1->b_size) {





  VAR_4 = VAR_1->b_size - VAR_1->b_in;
  if (VAR_1->b_cnt + VAR_2 + VAR_4 > VAR_1->b_size)
   return ~0;
  FUNC_0(VAR_1, VAR_1->b_in, VAR_4);

  VAR_3 = 0;
  VAR_1->b_in = VAR_2;
  VAR_1->b_cnt += VAR_2 + VAR_4;
 } else if (VAR_1->b_in + VAR_2 == VAR_1->b_size) {
  VAR_3 = VAR_1->b_in;
  VAR_1->b_in = 0;
  VAR_1->b_cnt += VAR_2;
 } else {
  VAR_3 = VAR_1->b_in;
  VAR_1->b_in += VAR_2;
  VAR_1->b_cnt += VAR_2;
 }
 return VAR_3;
}
