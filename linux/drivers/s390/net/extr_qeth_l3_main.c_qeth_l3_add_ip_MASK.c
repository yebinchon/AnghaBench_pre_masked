
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {char addr; } ;
struct TYPE_5__ {char addr; } ;
struct TYPE_7__ {TYPE_2__ a6; TYPE_1__ a4; } ;
struct qeth_ipaddr {scalar_t__ type; scalar_t__ proto; int ref_counter; int ipato; int in_progress; int hnode; int disp_flag; TYPE_3__ u; } ;
struct qeth_card {int ip_lock; int ip_htable; TYPE_4__* gdev; } ;
struct TYPE_8__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct qeth_card*,int,char*,int) ;
 int FUNC_1 (struct qeth_card*,int,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (int *,char*,char*) ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct qeth_ipaddr*) ;
 int FUNC_6 (struct qeth_ipaddr*,struct qeth_ipaddr*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct qeth_card*) ;
 scalar_t__ FUNC_10 (struct qeth_ipaddr*,struct qeth_ipaddr*) ;
 int FUNC_11 (struct qeth_card*,struct qeth_ipaddr*) ;
 struct qeth_ipaddr* FUNC_12 (struct qeth_card*,struct qeth_ipaddr*) ;
 struct qeth_ipaddr* FUNC_13 (scalar_t__) ;
 int FUNC_14 (struct qeth_ipaddr*) ;
 int FUNC_15 (scalar_t__,int *,char*) ;
 scalar_t__ FUNC_16 (struct qeth_card*,struct qeth_ipaddr*) ;
 int FUNC_17 (struct qeth_card*,struct qeth_ipaddr*) ;

__attribute__((used)) static int FUNC_18(struct qeth_card *VAR_9, struct qeth_ipaddr *VAR_10)
{
 int VAR_11 = 0;
 struct qeth_ipaddr *VAR_12;
 char VAR_13[40];

 if (VAR_10->type == VAR_6)
  FUNC_1(VAR_9, 2, "addrxip");
 else if (VAR_10->type == VAR_7)
  FUNC_1(VAR_9, 2, "addvipa");
 else
  FUNC_1(VAR_9, 2, "addip");

 if (VAR_10->proto == VAR_8)
  FUNC_0(VAR_9, 4, &VAR_10->u.a4.addr, 4);
 else {
  FUNC_0(VAR_9, 4, &VAR_10->u.a6.addr, 8);
  FUNC_0(VAR_9, 4, ((char *)&VAR_10->u.a6.addr) + 8, 8);
 }

 VAR_12 = FUNC_12(VAR_9, VAR_10);
 if (VAR_12) {
  if (VAR_10->type != VAR_5)
   return -VAR_0;
  if (FUNC_10(VAR_12, VAR_10)) {
   VAR_12->ref_counter++;
   return 0;
  }
  FUNC_15(VAR_10->proto, (u8 *)&VAR_10->u,
      VAR_13);
  FUNC_2(&VAR_9->gdev->dev,
    "Registering IP address %s failed\n", VAR_13);
  return -VAR_0;
 } else {
  VAR_12 = FUNC_13(VAR_10->proto);
  if (!VAR_12)
   return -VAR_2;

  FUNC_6(VAR_12, VAR_10, sizeof(struct qeth_ipaddr));
  VAR_12->ref_counter = 1;

  if (FUNC_16(VAR_9, VAR_12)) {
   FUNC_1(VAR_9, 2, "tkovaddr");
   VAR_12->ipato = 1;
  }
  FUNC_3(VAR_9->ip_htable, &VAR_12->hnode,
    FUNC_14(VAR_12));

  if (!FUNC_9(VAR_9)) {
   VAR_12->disp_flag = VAR_3;
   return 0;
  }
  if (VAR_12->proto == VAR_8) {
   VAR_12->in_progress = 1;
   FUNC_8(&VAR_9->ip_lock);
   VAR_11 = FUNC_17(VAR_9, VAR_12);
   FUNC_7(&VAR_9->ip_lock);
   VAR_12->in_progress = 0;
  } else
   VAR_11 = FUNC_17(VAR_9, VAR_12);

  if (!VAR_11 || VAR_11 == -VAR_0 || VAR_11 == -VAR_1) {
   VAR_12->disp_flag = VAR_4;
   if (VAR_12->ref_counter < 1) {
    FUNC_11(VAR_9, VAR_12);
    FUNC_4(&VAR_12->hnode);
    FUNC_5(VAR_12);
   }
  } else {
   FUNC_4(&VAR_12->hnode);
   FUNC_5(VAR_12);
  }
 }
 return VAR_11;
}
