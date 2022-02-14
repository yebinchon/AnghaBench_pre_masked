
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct memstick_request {unsigned char tpc; scalar_t__ data_dir; int data_len; int need_card_int; scalar_t__ long_data; int data; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,void const*,int) ;

void FUNC_1(struct memstick_request *VAR_4, unsigned char VAR_5,
         const void *VAR_6, size_t VAR_7)
{
 VAR_4->tpc = VAR_5;
 if (VAR_5 & 8)
  VAR_4->data_dir = VAR_3;
 else
  VAR_4->data_dir = VAR_2;

 VAR_4->data_len = VAR_7 > sizeof(VAR_4->data) ? sizeof(VAR_4->data) : VAR_7;
 if (VAR_4->data_dir == VAR_3)
  FUNC_0(VAR_4->data, VAR_6, VAR_4->data_len);

 VAR_4->long_data = 0;

 if (VAR_5 == VAR_1 || VAR_5 == VAR_0)
  VAR_4->need_card_int = 1;
 else
  VAR_4->need_card_int = 0;
}
