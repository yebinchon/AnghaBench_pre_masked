
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5p_mfc_ctx {int src_queue_cnt; int dst_queue_cnt; scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int,char*,...) ;

__attribute__((used)) static int FUNC_1(struct s5p_mfc_ctx *VAR_4)
{
 FUNC_0(2, "src=%d, dst=%d, state=%d\n",
    VAR_4->src_queue_cnt, VAR_4->dst_queue_cnt, VAR_4->state);

 if (VAR_4->state == VAR_1 && VAR_4->dst_queue_cnt >= 1)
  return 1;

 if ((VAR_4->state == VAR_3 ||
  VAR_4->state == VAR_2) &&
  VAR_4->src_queue_cnt >= 1 && VAR_4->dst_queue_cnt >= 1)
  return 1;

 if (VAR_4->state == VAR_0 &&
  VAR_4->dst_queue_cnt >= 1)
  return 1;
 FUNC_0(2, "ctx is not ready\n");
 return 0;
}
