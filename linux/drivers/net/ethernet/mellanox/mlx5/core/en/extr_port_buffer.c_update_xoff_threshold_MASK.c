
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct mlx5e_port_buffer {TYPE_1__* buffer; } ;
struct TYPE_2__ {scalar_t__ size; scalar_t__ xoff; scalar_t__ xon; scalar_t__ lossy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct mlx5e_port_buffer *VAR_3,
     u32 VAR_4, unsigned int VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  if (VAR_3->buffer[VAR_6].lossy) {
   VAR_3->buffer[VAR_6].xoff = 0;
   VAR_3->buffer[VAR_6].xon = 0;
   continue;
  }

  if (VAR_3->buffer[VAR_6].size <
      (VAR_4 + VAR_5 + (1 << VAR_1)))
   return -VAR_0;

  VAR_3->buffer[VAR_6].xoff = VAR_3->buffer[VAR_6].size - VAR_4;
  VAR_3->buffer[VAR_6].xon =
   VAR_3->buffer[VAR_6].xoff - VAR_5;
 }

 return 0;
}
