
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {int pcie_perf_counters; } ;
struct TYPE_4__ {TYPE_1__ pcie; } ;
struct mlx5e_priv {TYPE_2__ stats; int mdev; } ;


 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *,int ,int) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_3(struct mlx5e_priv *VAR_9, u64 *VAR_10,
         int VAR_11)
{
 int VAR_12;

 if (FUNC_2((VAR_9)->mdev, VAR_7))
  for (VAR_12 = 0; VAR_12 < VAR_0; VAR_12++)
   VAR_10[VAR_11++] =
    FUNC_0(&VAR_9->stats.pcie.pcie_perf_counters,
          VAR_5, VAR_12);

 if (FUNC_2((VAR_9)->mdev, VAR_8))
  for (VAR_12 = 0; VAR_12 < VAR_1; VAR_12++)
   VAR_10[VAR_11++] =
    FUNC_1(&VAR_9->stats.pcie.pcie_perf_counters,
          VAR_6, VAR_12);

 if (FUNC_2((VAR_9)->mdev, VAR_3))
  for (VAR_12 = 0; VAR_12 < VAR_2; VAR_12++)
   VAR_10[VAR_11++] =
    FUNC_0(&VAR_9->stats.pcie.pcie_perf_counters,
          VAR_4, VAR_12);
 return VAR_11;
}
