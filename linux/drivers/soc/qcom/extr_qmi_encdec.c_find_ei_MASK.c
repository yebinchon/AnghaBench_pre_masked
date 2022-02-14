
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct qmi_elem_info {scalar_t__ data_type; scalar_t__ tlv_type; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static struct qmi_elem_info *FUNC_0(struct qmi_elem_info *VAR_1,
         u32 VAR_2)
{
 struct qmi_elem_info *VAR_3 = VAR_1;

 while (VAR_3->data_type != VAR_0) {
  if (VAR_3->tlv_type == (u8)VAR_2)
   return VAR_3;
  VAR_3 = VAR_3 + 1;
 }

 return ((void*)0);
}
