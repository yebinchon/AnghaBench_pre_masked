
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct qmi_elem_info {scalar_t__ tlv_type; } ;



__attribute__((used)) static struct qmi_elem_info *FUNC_0(struct qmi_elem_info *VAR_0,
            int VAR_1)
{
 struct qmi_elem_info *VAR_2 = VAR_0;
 u8 VAR_3;

 if (VAR_1 > 1) {
  VAR_2 = VAR_2 + 1;
 } else {
  do {
   VAR_3 = VAR_2->tlv_type;
   VAR_2 = VAR_2 + 1;
  } while (VAR_3 == VAR_2->tlv_type);
 }

 return VAR_2;
}
