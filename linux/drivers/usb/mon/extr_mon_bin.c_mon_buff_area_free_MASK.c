
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mon_reader_bin {unsigned int b_cnt; unsigned int b_out; unsigned int b_size; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct mon_reader_bin *VAR_1, unsigned int VAR_2)
{

 VAR_2 = (VAR_2 + VAR_0-1) & ~(VAR_0-1);
 VAR_1->b_cnt -= VAR_2;
 if ((VAR_1->b_out += VAR_2) >= VAR_1->b_size)
  VAR_1->b_out -= VAR_1->b_size;
}
