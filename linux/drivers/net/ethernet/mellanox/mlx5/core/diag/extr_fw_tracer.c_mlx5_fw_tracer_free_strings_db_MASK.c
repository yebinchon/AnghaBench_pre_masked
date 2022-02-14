
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int num_string_db; int ** buffer; } ;
struct mlx5_fw_tracer {TYPE_1__ str_db; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct mlx5_fw_tracer *VAR_0)
{
 u32 VAR_1 = VAR_0->str_db.num_string_db;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  FUNC_0(VAR_0->str_db.buffer[VAR_2]);
  VAR_0->str_db.buffer[VAR_2] = ((void*)0);
 }
}
