
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int mb_off_in; int mb_size_in; int mb_off_out; int mb_size_out; } ;
struct mlxsw_i2c {TYPE_1__ cmd; } ;
typedef int __be32 ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void
FUNC_2(struct mlxsw_i2c *VAR_2, u8 *VAR_3)
{
 u32 VAR_4;


 VAR_4 = FUNC_1((__be32 *) VAR_3);
 VAR_2->cmd.mb_off_in = VAR_4 &
       FUNC_0(VAR_1 - 1, 0);
 VAR_2->cmd.mb_size_in = (VAR_4 & FUNC_0(31,
     VAR_1)) >>
     VAR_1;

 VAR_4 = FUNC_1((__be32 *) (VAR_3 + VAR_0));
 VAR_2->cmd.mb_off_out = VAR_4 &
        FUNC_0(VAR_1 - 1, 0);
 VAR_2->cmd.mb_size_out = (VAR_4 & FUNC_0(31,
     VAR_1)) >>
     VAR_1;
}
