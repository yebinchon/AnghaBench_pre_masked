
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vchi_queue_user_message_context {scalar_t__ data; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (void*,scalar_t__,size_t) ;

__attribute__((used)) static ssize_t
FUNC_1(void *VAR_1,
     void *VAR_2,
     size_t VAR_3,
     size_t VAR_4)
{
 struct vchi_queue_user_message_context *VAR_5 = VAR_1;

 if (FUNC_0(VAR_2, VAR_5->data + VAR_3, VAR_4))
  return -VAR_0;

 return VAR_4;
}
