
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qmi_header {int dummy; } ;
struct qmi_elem_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct qmi_elem_info*,void*,void const*,size_t,int) ;

int FUNC_1(const void *VAR_1, size_t VAR_2,
         struct qmi_elem_info *VAR_3, void *VAR_4)
{
 if (!VAR_3)
  return -VAR_0;

 if (!VAR_4 || !VAR_1 || !VAR_2)
  return -VAR_0;

 return FUNC_0(VAR_3, VAR_4, VAR_1 + sizeof(struct qmi_header),
     VAR_2 - sizeof(struct qmi_header), 1);
}
