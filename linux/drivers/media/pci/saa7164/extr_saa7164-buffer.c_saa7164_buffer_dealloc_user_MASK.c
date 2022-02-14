
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7164_user_buffer {struct saa7164_user_buffer* data; } ;


 int FUNC_0 (struct saa7164_user_buffer*) ;

void FUNC_1(struct saa7164_user_buffer *VAR_0)
{
 if (!VAR_0)
  return;

 FUNC_0(VAR_0->data);
 VAR_0->data = ((void*)0);

 FUNC_0(VAR_0);
}
