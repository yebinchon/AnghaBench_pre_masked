
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; int cb; } ;
struct TYPE_2__ {int tail_align; int head_align; } ;
struct cfhsi {int aggregation_len; TYPE_1__ cfg; } ;
struct caif_payload_info {int hdr_len; } ;


 int FUNC_0 (int,int ) ;

__attribute__((used)) static void FUNC_1(struct cfhsi *VAR_0,
        const struct sk_buff *VAR_1,
        int VAR_2)
{
 struct caif_payload_info *VAR_3;
 int VAR_4, VAR_5, VAR_6;

 VAR_3 = (struct caif_payload_info *)&VAR_1->cb;
 VAR_4 = 1 + FUNC_0((VAR_3->hdr_len + 1), VAR_0->cfg.head_align);
 VAR_5 = FUNC_0((VAR_1->len + VAR_4), VAR_0->cfg.tail_align);
 VAR_6 = VAR_1->len + VAR_4 + VAR_5;

 if (VAR_2 > 0)
  VAR_0->aggregation_len += VAR_6;
 else if (VAR_2 < 0)
  VAR_0->aggregation_len -= VAR_6;
}
