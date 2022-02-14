
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct memstick_request {unsigned char tpc; int long_data; int need_card_int; struct scatterlist sg; int data_dir; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_0(struct memstick_request *VAR_4, unsigned char VAR_5,
     const struct scatterlist *VAR_6)
{
 VAR_4->tpc = VAR_5;
 if (VAR_5 & 8)
  VAR_4->data_dir = VAR_3;
 else
  VAR_4->data_dir = VAR_2;

 VAR_4->sg = *VAR_6;
 VAR_4->long_data = 1;

 if (VAR_5 == VAR_1 || VAR_5 == VAR_0)
  VAR_4->need_card_int = 1;
 else
  VAR_4->need_card_int = 0;
}
