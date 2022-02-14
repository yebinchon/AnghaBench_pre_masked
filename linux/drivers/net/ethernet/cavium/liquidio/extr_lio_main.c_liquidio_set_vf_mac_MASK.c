
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int num_vfs_alloced; } ;
struct octeon_device {TYPE_1__ sriov_info; } ;
struct net_device {int dummy; } ;
struct lio {struct octeon_device* oct_dev; } ;


 int VAR_0 ;
 struct lio* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,int,int *,int) ;
 int FUNC_2 (struct octeon_device*,int,int *) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1, int VAR_2, u8 *VAR_3)
{
 struct lio *VAR_4 = FUNC_0(VAR_1);
 struct octeon_device *VAR_5 = VAR_4->oct_dev;
 int VAR_6;

 if (VAR_2 < 0 || VAR_2 >= VAR_5->sriov_info.num_vfs_alloced)
  return -VAR_0;

 VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_3, 1);
 if (!VAR_6)
  FUNC_2(VAR_5, VAR_2, VAR_3);

 return VAR_6;
}
