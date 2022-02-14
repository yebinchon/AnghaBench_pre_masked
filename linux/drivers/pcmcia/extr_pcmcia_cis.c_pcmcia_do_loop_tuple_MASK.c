
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tuple_t ;
struct pcmcia_loop_mem {int (* loop_tuple ) (int ,int *,int ) ;int priv_data; int p_dev; } ;
typedef int cisparse_t ;


 int FUNC_0 (int ,int *,int ) ;

__attribute__((used)) static int FUNC_1(tuple_t *VAR_0, cisparse_t *VAR_1, void *VAR_2)
{
 struct pcmcia_loop_mem *VAR_3 = VAR_2;

 return VAR_3->loop_tuple(VAR_3->p_dev, VAR_0, VAR_3->priv_data);
}
