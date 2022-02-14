
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct sk_buff {char* data; } ;
struct hv_page_buffer {int dummy; } ;
struct hv_netvsc_packet {size_t rmsg_size; size_t rmsg_pgcnt; } ;
typedef int skb_frag_t ;
struct TYPE_2__ {int nr_frags; int * frags; } ;


 scalar_t__ FUNC_0 (int ,int ,size_t,struct hv_page_buffer*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 size_t FUNC_4 (int *) ;
 size_t FUNC_5 (struct sk_buff*) ;
 TYPE_1__* FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static u32 FUNC_8(void *VAR_0, u32 VAR_1, struct sk_buff *VAR_2,
      struct hv_netvsc_packet *VAR_3,
      struct hv_page_buffer *VAR_4)
{
 u32 VAR_5 = 0;
 char *VAR_6 = VAR_2->data;
 int VAR_7 = FUNC_6(VAR_2)->nr_frags;
 int VAR_8;






 VAR_5 += FUNC_0(FUNC_7(VAR_0),
      FUNC_1(VAR_0),
      VAR_1, &VAR_4[VAR_5]);

 VAR_3->rmsg_size = VAR_1;
 VAR_3->rmsg_pgcnt = VAR_5;

 VAR_5 += FUNC_0(FUNC_7(VAR_6),
    FUNC_1(VAR_6),
    FUNC_5(VAR_2), &VAR_4[VAR_5]);

 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
  skb_frag_t *VAR_9 = FUNC_6(VAR_2)->frags + VAR_8;

  VAR_5 += FUNC_0(FUNC_3(VAR_9),
     FUNC_2(VAR_9),
     FUNC_4(VAR_9), &VAR_4[VAR_5]);
 }
 return VAR_5;
}
