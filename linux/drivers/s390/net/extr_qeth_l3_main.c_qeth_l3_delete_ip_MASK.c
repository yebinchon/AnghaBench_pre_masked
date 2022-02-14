
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {char addr; } ;
struct TYPE_4__ {char addr; } ;
struct TYPE_6__ {TYPE_2__ a6; TYPE_1__ a4; } ;
struct qeth_ipaddr {scalar_t__ type; scalar_t__ proto; scalar_t__ ref_counter; int hnode; scalar_t__ in_progress; TYPE_3__ u; } ;
struct qeth_card {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qeth_card*,int,char*,int) ;
 int FUNC_1 (struct qeth_card*,int,char*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct qeth_ipaddr*) ;
 scalar_t__ FUNC_4 (struct qeth_card*) ;
 int FUNC_5 (struct qeth_ipaddr*,struct qeth_ipaddr*) ;
 int FUNC_6 (struct qeth_card*,struct qeth_ipaddr*) ;
 struct qeth_ipaddr* FUNC_7 (struct qeth_card*,struct qeth_ipaddr*) ;

__attribute__((used)) static int FUNC_8(struct qeth_card *VAR_6,
        struct qeth_ipaddr *VAR_7)
{
 int VAR_8 = 0;
 struct qeth_ipaddr *VAR_9;

 if (VAR_7->type == VAR_3)
  FUNC_1(VAR_6, 2, "delrxip");
 else if (VAR_7->type == VAR_4)
  FUNC_1(VAR_6, 2, "delvipa");
 else
  FUNC_1(VAR_6, 2, "delip");

 if (VAR_7->proto == VAR_5)
  FUNC_0(VAR_6, 4, &VAR_7->u.a4.addr, 4);
 else {
  FUNC_0(VAR_6, 4, &VAR_7->u.a6.addr, 8);
  FUNC_0(VAR_6, 4, ((char *)&VAR_7->u.a6.addr) + 8, 8);
 }

 VAR_9 = FUNC_7(VAR_6, VAR_7);
 if (!VAR_9 || !FUNC_5(VAR_9, VAR_7))
  return -VAR_1;

 VAR_9->ref_counter--;
 if (VAR_9->type == VAR_2 && VAR_9->ref_counter > 0)
  return VAR_8;
 if (VAR_9->in_progress)
  return -VAR_0;

 if (FUNC_4(VAR_6))
  VAR_8 = FUNC_6(VAR_6, VAR_9);

 FUNC_2(&VAR_9->hnode);
 FUNC_3(VAR_9);

 return VAR_8;
}
