
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct mlx5e_port_buffer {TYPE_1__* buffer; } ;
struct TYPE_2__ {int lossy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx5e_port_buffer*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_1(unsigned int VAR_2,
          u8 VAR_3, u8 *VAR_4, u32 VAR_5,
          struct mlx5e_port_buffer *VAR_6,
          bool *VAR_7)
{
 bool VAR_8 = 0;
 u8 VAR_9;
 u8 VAR_10;
 u8 VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;

 for (VAR_14 = 0; VAR_14 < VAR_0; VAR_14++) {
  VAR_10 = 0;
  VAR_9 = 0;

  for (VAR_12 = 0; VAR_12 < VAR_1; VAR_12++) {
   if (VAR_4[VAR_12] != VAR_14)
    continue;

   VAR_10++;
   VAR_9 += !(VAR_3 & (1 << VAR_12));
  }

  if (VAR_9 == VAR_10)
   VAR_11 = 1;
  else
   VAR_11 = 0;

  if (VAR_11 != VAR_6->buffer[VAR_14].lossy) {
   VAR_6->buffer[VAR_14].lossy = VAR_11;
   VAR_8 = 1;
  }
 }

 if (VAR_8) {
  VAR_13 = FUNC_0(VAR_6, VAR_5, VAR_2);
  if (VAR_13)
   return VAR_13;

  *VAR_7 = 1;
 }

 return 0;
}
