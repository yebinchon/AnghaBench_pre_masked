
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ipaq_micro_msg {int* tx_data; int tx_len; int rx_data; int id; } ;
struct ipaq_micro {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ipaq_micro*,struct ipaq_micro_msg*) ;
 int FUNC_1 (int*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct ipaq_micro *VAR_1,
       u8 VAR_2, u8 VAR_3, u8 *VAR_4)
{
 struct ipaq_micro_msg VAR_5 = {
  .id = VAR_0,
 };
 u8 VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  VAR_5.tx_data[0] = VAR_2 + VAR_6;
  VAR_5.tx_data[1] = 1;
  VAR_5.tx_len = 2;
  FUNC_0(VAR_1, &VAR_5);
  FUNC_1(VAR_4 + (VAR_6 * 2), VAR_5.rx_data, 2);
 }
}
