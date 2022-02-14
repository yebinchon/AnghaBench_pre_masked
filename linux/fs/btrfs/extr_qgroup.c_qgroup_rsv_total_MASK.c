
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {scalar_t__* values; } ;
struct btrfs_qgroup {TYPE_1__ rsv; } ;


 int VAR_0 ;

__attribute__((used)) static u64 FUNC_0(const struct btrfs_qgroup *VAR_1)
{
 u64 VAR_2 = 0;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  VAR_2 += VAR_1->rsv.values[VAR_3];

 return VAR_2;
}
