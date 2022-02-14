
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtllib_qos_information_element {int qui_subtype; scalar_t__ qui_type; scalar_t__ version; int qui; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_1(struct rtllib_qos_information_element
         *VAR_4, int VAR_5)
{

 if (VAR_4->qui_subtype != VAR_5)
  return -1;
 if (FUNC_0(VAR_4->qui, VAR_3, VAR_0))
  return -1;
 if (VAR_4->qui_type != VAR_1)
  return -1;
 if (VAR_4->version != VAR_2)
  return -1;

 return 0;
}
