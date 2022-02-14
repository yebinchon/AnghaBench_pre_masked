
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_routing_info {int type; } ;
struct qeth_card {int conf_mutex; } ;
typedef int ssize_t ;
typedef enum qeth_routing_types { ____Placeholder_qeth_routing_types } qeth_routing_types ;
typedef enum qeth_prot_versions { ____Placeholder_qeth_prot_versions } qeth_prot_versions ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct qeth_card*) ;
 int FUNC_3 (struct qeth_card*) ;
 int FUNC_4 (struct qeth_card*) ;
 scalar_t__ FUNC_5 (char const*,char*) ;

__attribute__((used)) static ssize_t FUNC_6(struct qeth_card *VAR_9,
  struct qeth_routing_info *VAR_10, enum qeth_prot_versions VAR_11,
  const char *VAR_12, size_t VAR_13)
{
 enum qeth_routing_types VAR_14 = VAR_10->type;
 int VAR_15 = 0;

 FUNC_0(&VAR_9->conf_mutex);
 if (FUNC_5(VAR_12, "no_router")) {
  VAR_10->type = VAR_2;
 } else if (FUNC_5(VAR_12, "primary_connector")) {
  VAR_10->type = VAR_3;
 } else if (FUNC_5(VAR_12, "secondary_connector")) {
  VAR_10->type = VAR_7;
 } else if (FUNC_5(VAR_12, "primary_router")) {
  VAR_10->type = VAR_4;
 } else if (FUNC_5(VAR_12, "secondary_router")) {
  VAR_10->type = VAR_8;
 } else if (FUNC_5(VAR_12, "multicast_router")) {
  VAR_10->type = VAR_1;
 } else {
  VAR_15 = -VAR_0;
  goto out;
 }
 if (FUNC_2(VAR_9) &&
     (VAR_14 != VAR_10->type)) {
  if (VAR_11 == VAR_5)
   VAR_15 = FUNC_3(VAR_9);
  else if (VAR_11 == VAR_6)
   VAR_15 = FUNC_4(VAR_9);
 }
out:
 if (VAR_15)
  VAR_10->type = VAR_14;
 FUNC_1(&VAR_9->conf_mutex);
 return VAR_15 ? VAR_15 : VAR_13;
}
