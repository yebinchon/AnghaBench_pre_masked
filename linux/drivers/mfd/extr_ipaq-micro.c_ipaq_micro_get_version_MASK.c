
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipaq_micro_msg {int rx_len; int rx_data; int id; } ;
struct ipaq_micro {char* version; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct ipaq_micro*,struct ipaq_micro_msg*) ;
 int FUNC_2 (char*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct ipaq_micro *VAR_1)
{
 struct ipaq_micro_msg VAR_2 = {
  .id = VAR_0,
 };

 FUNC_1(VAR_1, &VAR_2);
 if (VAR_2.rx_len == 4) {
  FUNC_2(VAR_1->version, VAR_2.rx_data, 4);
  VAR_1->version[4] = '\0';
 } else if (VAR_2.rx_len == 9) {
  FUNC_2(VAR_1->version, VAR_2.rx_data, 4);
  VAR_1->version[4] = '\0';

 } else {
  FUNC_0(VAR_1->dev,
   "illegal version message %d bytes\n", VAR_2.rx_len);
 }
}
