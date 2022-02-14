
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qdio_buffer_element {int dummy; } ;
struct qdio_buffer {TYPE_1__* element; } ;
struct TYPE_2__ {scalar_t__ sflags; } ;


 int FUNC_0 (TYPE_1__*,int ,int) ;

__attribute__((used)) static inline void FUNC_1(struct qdio_buffer *VAR_0,
       unsigned int VAR_1)
{
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
  FUNC_0(&VAR_0->element[VAR_2], 0, sizeof(struct qdio_buffer_element));
 VAR_0->element[14].sflags = 0;
 VAR_0->element[15].sflags = 0;
}
