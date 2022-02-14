
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct mlxsw_sp_fid {TYPE_1__* fid_family; } ;
struct TYPE_2__ {scalar_t__ start_index; } ;



__attribute__((used)) static int FUNC_0(struct mlxsw_sp_fid *VAR_0,
      const void *VAR_1, u16 *VAR_2)
{
 u16 VAR_3 = *(u16 *) VAR_1;

 *VAR_2 = VAR_0->fid_family->start_index + VAR_3;

 return 0;
}
