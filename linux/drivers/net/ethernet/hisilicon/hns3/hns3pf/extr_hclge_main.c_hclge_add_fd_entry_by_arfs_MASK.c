
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct hnae3_handle {int dummy; } ;
struct hclge_vport {struct hclge_dev* back; } ;
struct hclge_fd_rule_tuples {int dummy; } ;
struct hclge_fd_rule {int location; scalar_t__ queue_id; scalar_t__ flow_id; } ;
struct TYPE_2__ {scalar_t__* rule_num; } ;
struct hclge_dev {scalar_t__ fd_active_type; int fd_rule_lock; int fd_bmap; TYPE_1__ fd_cfg; } ;
struct flow_keys {int dummy; } ;
typedef int new_tuples ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct hclge_dev*,size_t,struct hclge_fd_rule*) ;
 int FUNC_2 (struct hclge_fd_rule_tuples*,struct hclge_fd_rule*) ;
 int FUNC_3 (struct hclge_dev*,struct hclge_fd_rule*) ;
 int FUNC_4 (struct flow_keys*,struct hclge_fd_rule_tuples*) ;
 struct hclge_fd_rule* FUNC_5 (struct hclge_dev*,struct hclge_fd_rule_tuples*) ;
 struct hclge_vport* FUNC_6 (struct hnae3_handle*) ;
 int FUNC_7 (struct hclge_dev*) ;
 struct hclge_fd_rule* FUNC_8 (int,int ) ;
 int FUNC_9 (struct hclge_fd_rule_tuples*,int ,int) ;
 int FUNC_10 (scalar_t__,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct hnae3_handle *VAR_7, u16 VAR_8,
          u16 VAR_9, struct flow_keys *VAR_10)
{
 struct hclge_vport *VAR_11 = FUNC_6(VAR_7);
 struct hclge_fd_rule_tuples VAR_12;
 struct hclge_dev *VAR_13 = VAR_11->back;
 struct hclge_fd_rule *VAR_14;
 u16 VAR_15;
 u16 VAR_16;
 int VAR_17;

 if (!FUNC_7(VAR_13))
  return -VAR_2;

 FUNC_9(&VAR_12, 0, sizeof(VAR_12));
 FUNC_4(VAR_10, &VAR_12);

 FUNC_11(&VAR_13->fd_rule_lock);




 if (VAR_13->fd_active_type == VAR_4) {
  FUNC_12(&VAR_13->fd_rule_lock);

  return -VAR_2;
 }






 VAR_14 = FUNC_5(VAR_13, &VAR_12);
 if (!VAR_14) {
  VAR_16 = FUNC_0(VAR_13->fd_bmap, VAR_6);
  if (VAR_16 >= VAR_13->fd_cfg.rule_num[VAR_5]) {
   FUNC_12(&VAR_13->fd_rule_lock);

   return -VAR_1;
  }

  VAR_14 = FUNC_8(sizeof(*VAR_14), VAR_3);
  if (!VAR_14) {
   FUNC_12(&VAR_13->fd_rule_lock);

   return -VAR_0;
  }

  FUNC_10(VAR_16, VAR_13->fd_bmap);
  VAR_14->location = VAR_16;
  VAR_14->flow_id = VAR_9;
  VAR_14->queue_id = VAR_8;
  FUNC_2(&VAR_12, VAR_14);
  VAR_17 = FUNC_3(VAR_13, VAR_14);

  FUNC_12(&VAR_13->fd_rule_lock);

  if (VAR_17)
   return VAR_17;

  return VAR_14->location;
 }

 FUNC_12(&VAR_13->fd_rule_lock);

 if (VAR_14->queue_id == VAR_8)
  return VAR_14->location;

 VAR_15 = VAR_14->queue_id;
 VAR_14->queue_id = VAR_8;
 VAR_17 = FUNC_1(VAR_13, VAR_5, VAR_14);
 if (VAR_17) {
  VAR_14->queue_id = VAR_15;
  return VAR_17;
 }

 return VAR_14->location;
}
