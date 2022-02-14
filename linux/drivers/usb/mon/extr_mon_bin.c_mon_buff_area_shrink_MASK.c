
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mon_reader_bin {unsigned int b_cnt; unsigned int b_in; scalar_t__ b_size; } ;



__attribute__((used)) static void FUNC_0(struct mon_reader_bin *VAR_0, unsigned int VAR_1)
{


 VAR_0->b_cnt -= VAR_1;
 if (VAR_0->b_in < VAR_1)
  VAR_0->b_in += VAR_0->b_size;
 VAR_0->b_in -= VAR_1;
}
