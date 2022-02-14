
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct htc_target {int htc_flags; struct htc_endpoint* endpoint; } ;
struct htc_packet {size_t endpoint; int list; int status; int act_len; int buf; } ;
struct htc_endpoint {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct list_head*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,size_t,int ,int ) ;
 int FUNC_3 (struct htc_target*,struct htc_endpoint*,struct htc_packet*) ;
 int FUNC_4 (struct htc_endpoint*,struct list_head*) ;
 int FUNC_5 (int *,struct list_head*) ;

__attribute__((used)) static int FUNC_6(struct htc_target *VAR_6,
         struct htc_packet *VAR_7)
{
 struct htc_endpoint *VAR_8;
 struct list_head VAR_9;

 FUNC_2(VAR_0,
     "htc tx ep id %d buf 0x%p len %d\n",
     VAR_7->endpoint, VAR_7->buf, VAR_7->act_len);

 if (VAR_7->endpoint >= VAR_3) {
  FUNC_1(1);
  return -VAR_2;
 }

 VAR_8 = &VAR_6->endpoint[VAR_7->endpoint];

 if (!FUNC_3(VAR_6, VAR_8, VAR_7)) {
  VAR_7->status = (VAR_6->htc_flags & VAR_5) ?
     -VAR_1 : -VAR_4;
  FUNC_0(&VAR_9);
  FUNC_5(&VAR_7->list, &VAR_9);
  FUNC_4(VAR_8, &VAR_9);
 }

 return 0;
}
