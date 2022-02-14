
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct octeon_mbox_cmd {int data; } ;
struct octeon_device {int dummy; } ;
struct oct_vf_stats_ctx {int status; int stats; } ;
struct oct_vf_stats {int dummy; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct octeon_device *VAR_0,
        struct octeon_mbox_cmd *VAR_1, void *VAR_2)
{
 struct oct_vf_stats_ctx *VAR_3 = VAR_2;

 FUNC_1(VAR_3->stats, VAR_1->data, sizeof(struct oct_vf_stats));
 FUNC_0(&VAR_3->status, 1);
}
