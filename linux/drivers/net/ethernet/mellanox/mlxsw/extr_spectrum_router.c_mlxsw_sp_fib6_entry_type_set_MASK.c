
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_fib_entry {void* type; } ;
struct mlxsw_sp {int dummy; } ;
struct fib6_info {int fib6_flags; scalar_t__ fib6_type; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (struct mlxsw_sp*,struct fib6_info const*) ;

__attribute__((used)) static void FUNC_1(struct mlxsw_sp *VAR_8,
      struct mlxsw_sp_fib_entry *VAR_9,
      const struct fib6_info *VAR_10)
{






 if (VAR_10->fib6_flags & (VAR_5 | VAR_4))
  VAR_9->type = VAR_3;
 else if (VAR_10->fib6_type == VAR_7)
  VAR_9->type = VAR_0;
 else if (VAR_10->fib6_flags & VAR_6)
  VAR_9->type = VAR_1;
 else if (FUNC_0(VAR_8, VAR_10))
  VAR_9->type = VAR_2;
 else
  VAR_9->type = VAR_1;
}
