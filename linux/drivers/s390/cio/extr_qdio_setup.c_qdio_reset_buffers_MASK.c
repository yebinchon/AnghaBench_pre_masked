
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qdio_buffer {int dummy; } ;


 int FUNC_0 (struct qdio_buffer*,int ,int) ;

void FUNC_1(struct qdio_buffer **VAR_0, unsigned int VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
  FUNC_0(VAR_0[VAR_2], 0, sizeof(struct qdio_buffer));
}
