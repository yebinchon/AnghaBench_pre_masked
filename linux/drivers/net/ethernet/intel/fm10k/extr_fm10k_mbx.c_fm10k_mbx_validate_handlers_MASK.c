
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fm10k_tlv_attr {unsigned int id; } ;
struct fm10k_msg_data {unsigned int id; int func; struct fm10k_tlv_attr* attr; } ;
typedef int s32 ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;

__attribute__((used)) static s32 FUNC_0(const struct fm10k_msg_data *VAR_3)
{
 const struct fm10k_tlv_attr *VAR_4;
 unsigned int VAR_5;


 if (!VAR_3)
  return 0;

 while (VAR_3->id != VAR_1) {

  if (!VAR_3->func)
   return VAR_0;


  VAR_4 = VAR_3->attr;
  if (VAR_4) {
   while (VAR_4->id != VAR_1) {
    VAR_5 = VAR_4->id;
    VAR_4++;

    if (VAR_5 >= VAR_4->id)
     return VAR_0;

    if (VAR_5 >= VAR_2)
     return VAR_0;
   }


   if (VAR_4->id != VAR_1)
    return VAR_0;
  }

  VAR_5 = VAR_3->id;
  VAR_3++;

  if (VAR_5 >= VAR_3->id)
   return VAR_0;
 }


 if ((VAR_3->id != VAR_1) || !VAR_3->func)
  return VAR_0;

 return 0;
}
