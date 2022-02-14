
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct qeth_reply {scalar_t__ param; } ;
struct qeth_cmd_buffer {int data; } ;
struct TYPE_4__ {scalar_t__ link_type; } ;
struct TYPE_3__ {scalar_t__ ulp_filter_r; } ;
struct qeth_card {TYPE_2__ info; TYPE_1__ token; } ;
typedef scalar_t__ __u8 ;
typedef scalar_t__ __u16 ;


 scalar_t__ FUNC_0 (struct qeth_card*) ;
 int FUNC_1 (struct qeth_card*,int,char*) ;
 int FUNC_2 (struct qeth_card*,int,char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__*,scalar_t__,int) ;
 scalar_t__ FUNC_8 (scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct qeth_card *VAR_2, struct qeth_reply *VAR_3,
  unsigned long VAR_4)
{
 __u16 VAR_5, VAR_6;
 __u16 VAR_7;
 __u8 VAR_8;
 struct qeth_cmd_buffer *VAR_9;

 FUNC_1(VAR_2, 2, "ulpenacb");

 VAR_9 = (struct qeth_cmd_buffer *) VAR_4;
 FUNC_7(&VAR_2->token.ulp_filter_r,
        FUNC_4(VAR_9->data),
        VAR_1);
 if (FUNC_0(VAR_2)) {
  FUNC_7(&VAR_6, FUNC_6(VAR_9->data), 2);
  VAR_5 = FUNC_8(VAR_6);
 } else {
  VAR_5 = *(__u16 *)FUNC_6(VAR_9->data);
 }
 *(u16 *)VAR_3->param = VAR_5;

 FUNC_7(&VAR_7, FUNC_3(VAR_9->data), 2);
 if (VAR_7 >= VAR_0) {
  FUNC_7(&VAR_8,
         FUNC_5(VAR_9->data), 1);
  VAR_2->info.link_type = VAR_8;
 } else
  VAR_2->info.link_type = 0;
 FUNC_2(VAR_2, 2, "link%d", VAR_2->info.link_type);
 return 0;
}
