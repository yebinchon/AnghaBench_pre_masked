
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_card {int * private_free; int * private_data; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct snd_card *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return;
 FUNC_0(VAR_0->private_data);
 VAR_0->private_data = ((void*)0);
 VAR_0->private_free = ((void*)0);
}
