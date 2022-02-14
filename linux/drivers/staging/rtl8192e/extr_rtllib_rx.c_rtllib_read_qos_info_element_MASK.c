
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct rtllib_qos_information_element {scalar_t__ elementID; scalar_t__ length; int qui; } ;
struct rtllib_info_element {scalar_t__ id; scalar_t__ len; int data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,scalar_t__) ;
 int FUNC_1 (struct rtllib_qos_information_element*,int ) ;

__attribute__((used)) static int FUNC_2(struct rtllib_qos_information_element
       *VAR_2,
     struct rtllib_info_element
       *VAR_3)
{
 int VAR_4 = 0;
 u16 VAR_5 = sizeof(struct rtllib_qos_information_element) - 2;

 if (VAR_2 == ((void*)0))
  return -1;
 if (VAR_3 == ((void*)0))
  return -1;

 if ((VAR_3->id == VAR_0) &&
     (VAR_3->len == VAR_5)) {
  FUNC_0(VAR_2->qui, VAR_3->data,
         VAR_3->len);
  VAR_2->elementID = VAR_3->id;
  VAR_2->length = VAR_3->len;
 } else
  VAR_4 = -1;

 if (VAR_4 == 0)
  VAR_4 = FUNC_1(VAR_2,
          VAR_1);
 return VAR_4;
}
