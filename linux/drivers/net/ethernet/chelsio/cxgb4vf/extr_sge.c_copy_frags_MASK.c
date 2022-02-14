
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct pkt_gl {int nfrags; TYPE_1__* frags; } ;
struct TYPE_4__ {int nr_frags; } ;
struct TYPE_3__ {int page; scalar_t__ size; scalar_t__ offset; } ;


 int FUNC_0 (struct sk_buff*,int,int ,scalar_t__,scalar_t__) ;
 int FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static inline void FUNC_3(struct sk_buff *VAR_0,
         const struct pkt_gl *VAR_1,
         unsigned int VAR_2)
{
 int VAR_3;


 FUNC_0(VAR_0, 0, VAR_1->frags[0].page,
        VAR_1->frags[0].offset + VAR_2,
        VAR_1->frags[0].size - VAR_2);
 FUNC_2(VAR_0)->nr_frags = VAR_1->nfrags;
 for (VAR_3 = 1; VAR_3 < VAR_1->nfrags; VAR_3++)
  FUNC_0(VAR_0, VAR_3, VAR_1->frags[VAR_3].page,
         VAR_1->frags[VAR_3].offset,
         VAR_1->frags[VAR_3].size);


 FUNC_1(VAR_1->frags[VAR_1->nfrags - 1].page);
}
