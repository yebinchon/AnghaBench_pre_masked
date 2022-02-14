
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct zfcp_erp_action {TYPE_2__* adapter; } ;
typedef enum zfcp_erp_act_result { ____Placeholder_zfcp_erp_act_result } zfcp_erp_act_result ;
struct TYPE_3__ {int status_read_req; int sr_data; } ;
struct TYPE_4__ {int stat_read_buf_num; int stat_miss; TYPE_1__ pool; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (struct zfcp_erp_action*) ;
 scalar_t__ FUNC_3 (struct zfcp_erp_action*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static enum zfcp_erp_act_result FUNC_5(
 struct zfcp_erp_action *VAR_2)
{
 if (FUNC_2(VAR_2) == VAR_0)
  return VAR_0;

 if (FUNC_3(VAR_2) == VAR_0)
  return VAR_0;

 if (FUNC_1(VAR_2->adapter->pool.sr_data,
      VAR_2->adapter->stat_read_buf_num))
  return VAR_0;

 if (FUNC_1(VAR_2->adapter->pool.status_read_req,
      VAR_2->adapter->stat_read_buf_num))
  return VAR_0;

 FUNC_0(&VAR_2->adapter->stat_miss, VAR_2->adapter->stat_read_buf_num);
 if (FUNC_4(VAR_2->adapter))
  return VAR_0;

 return VAR_1;
}
