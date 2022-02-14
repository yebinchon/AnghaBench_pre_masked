
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct list_head {int dummy; } ;
struct htc_target {struct htc_endpoint* endpoint; } ;
struct TYPE_3__ {int seqno; } ;
struct TYPE_4__ {TYPE_1__ tx; } ;
struct htc_packet {size_t endpoint; int list; TYPE_2__ info; } ;
struct htc_endpoint {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct list_head*) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (struct htc_target*,struct htc_endpoint*,struct htc_packet*) ;
 int FUNC_3 (struct htc_endpoint*,struct list_head*) ;
 int FUNC_4 (int *,struct list_head*) ;

__attribute__((used)) static void FUNC_5(struct htc_target *VAR_1,
    struct htc_packet *VAR_2)
{
 struct htc_endpoint *VAR_3 = &VAR_1->endpoint[VAR_2->endpoint];
 struct list_head VAR_4;

 FUNC_1(VAR_0, "htc tx complete seqno %d\n",
     VAR_2->info.tx.seqno);

 FUNC_2(VAR_1, VAR_3, VAR_2);
 FUNC_0(&VAR_4);
 FUNC_4(&VAR_2->list, &VAR_4);

 FUNC_3(VAR_3, &VAR_4);
}
