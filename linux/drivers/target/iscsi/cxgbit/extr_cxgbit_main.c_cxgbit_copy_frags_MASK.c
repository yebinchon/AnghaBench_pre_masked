
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct sk_buff {int dummy; } ;
struct pkt_gl {size_t nfrags; TYPE_1__* frags; } ;
struct TYPE_4__ {size_t nr_frags; } ;
struct TYPE_3__ {int page; scalar_t__ size; scalar_t__ offset; } ;


 int FUNC_0 (struct sk_buff*,size_t,int ,scalar_t__,scalar_t__) ;
 int FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static void
FUNC_3(struct sk_buff *VAR_0, const struct pkt_gl *VAR_1,
    unsigned int VAR_2)
{
 u8 VAR_3 = FUNC_2(VAR_0)->nr_frags;
 u8 VAR_4;


 FUNC_0(VAR_0, VAR_3, VAR_1->frags[0].page,
        VAR_1->frags[0].offset + VAR_2,
        VAR_1->frags[0].size - VAR_2);
 for (VAR_4 = 1; VAR_4 < VAR_1->nfrags; VAR_4++)
  FUNC_0(VAR_0, VAR_3 + VAR_4,
         VAR_1->frags[VAR_4].page,
         VAR_1->frags[VAR_4].offset,
         VAR_1->frags[VAR_4].size);

 FUNC_2(VAR_0)->nr_frags += VAR_1->nfrags;


 FUNC_1(VAR_1->frags[VAR_1->nfrags - 1].page);
}
