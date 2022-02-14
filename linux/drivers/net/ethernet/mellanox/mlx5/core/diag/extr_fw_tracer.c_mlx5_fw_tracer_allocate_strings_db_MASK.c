
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int* size_out; int num_string_db; int * buffer; } ;
struct mlx5_fw_tracer {TYPE_1__ str_db; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct mlx5_fw_tracer*) ;

__attribute__((used)) static int FUNC_2(struct mlx5_fw_tracer *VAR_2)
{
 u32 *VAR_3 = VAR_2->str_db.size_out;
 u32 VAR_4 = VAR_2->str_db.num_string_db;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  VAR_2->str_db.buffer[VAR_5] = FUNC_0(VAR_3[VAR_5], VAR_1);
  if (!VAR_2->str_db.buffer[VAR_5])
   goto free_strings_db;
 }

 return 0;

free_strings_db:
 FUNC_1(VAR_2);
 return -VAR_0;
}
