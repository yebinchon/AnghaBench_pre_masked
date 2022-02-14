
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5p_mfc_ctx {int src_queue_cnt; scalar_t__ state; scalar_t__ dst_queue_cnt; scalar_t__ pb_count; scalar_t__ capture_state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int,char*) ;

__attribute__((used)) static int FUNC_1(struct s5p_mfc_ctx *VAR_8)
{

 if (VAR_8->src_queue_cnt >= 1 && VAR_8->state == VAR_1)
  return 1;

 if (VAR_8->src_queue_cnt >= 1 &&
     VAR_8->state == VAR_6 &&
     VAR_8->dst_queue_cnt >= VAR_8->pb_count)
  return 1;

 if (VAR_8->state == VAR_0 &&
     VAR_8->dst_queue_cnt >= VAR_8->pb_count)
  return 1;

 if (VAR_8->src_queue_cnt >= 1 &&
     VAR_8->state == VAR_2 &&
     VAR_8->capture_state == VAR_7)
  return 1;

 if ((VAR_8->state == VAR_5 ||
  VAR_8->state == VAR_4) &&
  VAR_8->dst_queue_cnt >= VAR_8->pb_count)
  return 1;
 if (VAR_8->state == VAR_3 &&
  VAR_8->src_queue_cnt >= 1)
  return 1;
 FUNC_0(2, "ctx is not ready\n");
 return 0;
}
