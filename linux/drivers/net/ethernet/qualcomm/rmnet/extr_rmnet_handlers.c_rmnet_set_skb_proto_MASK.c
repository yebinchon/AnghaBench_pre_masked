
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int* data; void* protocol; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 void* FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct sk_buff *VAR_3)
{
 switch (VAR_3->data[0] & 0xF0) {
 case 129:
  VAR_3->protocol = FUNC_0(VAR_0);
  break;
 case 128:
  VAR_3->protocol = FUNC_0(VAR_1);
  break;
 default:
  VAR_3->protocol = FUNC_0(VAR_2);
  break;
 }
}
