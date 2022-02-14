
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpiphp_attention_info {scalar_t__ get_attn; scalar_t__ set_attn; scalar_t__ owner; } ;


 int VAR_0 ;
 struct acpiphp_attention_info* VAR_1 ;

int FUNC_0(struct acpiphp_attention_info *VAR_2)
{
 int VAR_3 = -VAR_0;

 if (VAR_2 && VAR_2->owner && VAR_2->set_attn &&
   VAR_2->get_attn && !VAR_1) {
  VAR_3 = 0;
  VAR_1 = VAR_2;
 }
 return VAR_3;
}
