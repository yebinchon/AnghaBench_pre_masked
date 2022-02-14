
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int priority; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static u8 FUNC_0(struct sk_buff *VAR_4, u8 VAR_5)
{
 switch (VAR_5) {
 case 131:
  return VAR_0;
 case 130:
  return VAR_1;
 case 128:
  return VAR_3;
 case 129:
  return VAR_2;
 default:
  return VAR_4->priority;
 }
}
