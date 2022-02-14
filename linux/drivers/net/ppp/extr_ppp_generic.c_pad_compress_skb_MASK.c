
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int len; scalar_t__ data; } ;
struct ppp {int flags; TYPE_2__* dev; int xc_state; TYPE_1__* xcomp; } ;
struct TYPE_4__ {int mtu; int hard_header_len; } ;
struct TYPE_3__ {int comp_extra; int (* compress ) (int ,scalar_t__,scalar_t__,int,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_0 (int,int ) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (TYPE_2__*,char*) ;
 int FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 (struct sk_buff*,int) ;
 int FUNC_7 (struct sk_buff*,int) ;
 int FUNC_8 (int ,scalar_t__,scalar_t__,int,int) ;

__attribute__((used)) static inline struct sk_buff *
FUNC_9(struct ppp *VAR_3, struct sk_buff *VAR_4)
{
 struct sk_buff *VAR_5;
 int VAR_6;
 int VAR_7 = VAR_3->dev->mtu +
  VAR_3->xcomp->comp_extra + VAR_3->dev->hard_header_len;
 int VAR_8 = VAR_3->dev->mtu +
  VAR_3->xcomp->comp_extra + VAR_1;
 VAR_5 = FUNC_0(VAR_7, VAR_0);
 if (!VAR_5) {
  if (FUNC_3())
   FUNC_4(VAR_3->dev, "PPP: no memory (comp pkt)\n");
  return ((void*)0);
 }
 if (VAR_3->dev->hard_header_len > VAR_1)
  FUNC_7(VAR_5,
       VAR_3->dev->hard_header_len - VAR_1);


 VAR_6 = VAR_3->xcomp->compress(VAR_3->xc_state, VAR_4->data - 2,
       VAR_5->data, VAR_4->len + 2,
       VAR_8);
 if (VAR_6 > 0 && (VAR_3->flags & VAR_2)) {
  FUNC_1(VAR_4);
  VAR_4 = VAR_5;
  FUNC_6(VAR_4, VAR_6);
  FUNC_5(VAR_4, 2);
 } else if (VAR_6 == 0) {

  FUNC_1(VAR_5);
  VAR_5 = VAR_4;
 } else {
  if (FUNC_3())
   FUNC_4(VAR_3->dev, "ppp: compressor dropped pkt\n");
  FUNC_2(VAR_4);
  FUNC_1(VAR_5);
  VAR_5 = ((void*)0);
 }
 return VAR_5;
}
