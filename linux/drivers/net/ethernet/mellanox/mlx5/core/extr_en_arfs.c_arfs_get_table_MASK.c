
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct mlx5e_arfs_tables {struct arfs_table* arfs_tables; } ;
struct arfs_table {int dummy; } ;
typedef scalar_t__ __be16 ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static struct arfs_table *FUNC_1(struct mlx5e_arfs_tables *VAR_8,
      u8 VAR_9, __be16 VAR_10)
{
 if (VAR_10 == FUNC_0(VAR_4) && VAR_9 == VAR_6)
  return &VAR_8->arfs_tables[VAR_0];
 if (VAR_10 == FUNC_0(VAR_4) && VAR_9 == VAR_7)
  return &VAR_8->arfs_tables[VAR_1];
 if (VAR_10 == FUNC_0(VAR_5) && VAR_9 == VAR_6)
  return &VAR_8->arfs_tables[VAR_2];
 if (VAR_10 == FUNC_0(VAR_5) && VAR_9 == VAR_7)
  return &VAR_8->arfs_tables[VAR_3];

 return ((void*)0);
}
