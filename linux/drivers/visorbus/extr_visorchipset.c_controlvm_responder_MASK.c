
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct controlvm_message_header {scalar_t__ id; } ;
typedef enum controlvm_id { ____Placeholder_controlvm_id } controlvm_id ;


 int VAR_0 ;
 int FUNC_0 (struct controlvm_message_header*,int,int *) ;

__attribute__((used)) static int FUNC_1(enum controlvm_id VAR_1,
          struct controlvm_message_header *VAR_2,
          int VAR_3)
{
 if (VAR_2->id != (u32)VAR_1)
  return -VAR_0;

 return FUNC_0(VAR_2, VAR_3, ((void*)0));
}
