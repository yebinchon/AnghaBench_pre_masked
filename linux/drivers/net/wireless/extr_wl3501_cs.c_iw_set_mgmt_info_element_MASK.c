
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iw_mgmt_info_element {int id; int len; int data; } ;
typedef enum iw_mgmt_info_element_ids { ____Placeholder_iw_mgmt_info_element_ids } iw_mgmt_info_element_ids ;


 int FUNC_0 (int ,void*,int) ;

__attribute__((used)) static void FUNC_1(enum iw_mgmt_info_element_ids VAR_0,
         struct iw_mgmt_info_element *VAR_1,
         void *VAR_2, int VAR_3)
{
 VAR_1->id = VAR_0;
 VAR_1->len = VAR_3;
 FUNC_0(VAR_1->data, VAR_2, VAR_3);
}
