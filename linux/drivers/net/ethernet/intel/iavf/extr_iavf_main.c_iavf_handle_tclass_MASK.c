
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_5__ {int dst_port; } ;
struct TYPE_6__ {TYPE_1__ tcp_spec; } ;
struct TYPE_8__ {scalar_t__ action_meta; int action; TYPE_2__ data; } ;
struct iavf_cloud_filter {TYPE_4__ f; } ;
struct iavf_adapter {scalar_t__ num_tc; TYPE_3__* pdev; } ;
struct TYPE_7__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;

__attribute__((used)) static int FUNC_1(struct iavf_adapter *VAR_2, u32 VAR_3,
         struct iavf_cloud_filter *VAR_4)
{
 if (VAR_3 == 0)
  return 0;
 if (VAR_3 < VAR_2->num_tc) {
  if (!VAR_4->f.data.tcp_spec.dst_port) {
   FUNC_0(&VAR_2->pdev->dev,
    "Specify destination port to redirect to traffic class other than TC0\n");
   return -VAR_0;
  }
 }

 VAR_4->f.action = VAR_1;
 VAR_4->f.action_meta = VAR_3;
 return 0;
}
