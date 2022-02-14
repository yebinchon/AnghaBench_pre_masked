
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; scalar_t__ data; } ;
struct ppp {int mru; int rstate; int rc_state; TYPE_1__* rcomp; int dev; } ;
struct TYPE_2__ {int compress_proto; int (* decompress ) (int ,scalar_t__,scalar_t__,scalar_t__,int) ;int (* incomp ) (int ,scalar_t__,scalar_t__) ;} ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct sk_buff*) ;
 struct sk_buff* FUNC_2 (int) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct ppp*) ;
 int FUNC_6 (struct sk_buff*,scalar_t__) ;
 int FUNC_7 (struct sk_buff*,int) ;
 int FUNC_8 (struct sk_buff*,int) ;
 int FUNC_9 (int ,scalar_t__,scalar_t__,scalar_t__,int) ;
 int FUNC_10 (int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static struct sk_buff *
FUNC_11(struct ppp *VAR_5, struct sk_buff *VAR_6)
{
 int VAR_7 = FUNC_0(VAR_6);
 struct sk_buff *VAR_8;
 int VAR_9;




 if (!FUNC_6(VAR_6, VAR_6->len))
  goto err;

 if (VAR_7 == VAR_1) {
  int VAR_10;

  switch(VAR_5->rcomp->compress_proto) {
  case 128:
   VAR_10 = VAR_5->mru + VAR_2 + 1;
   break;
  default:
   VAR_10 = VAR_5->mru + VAR_2;
   break;
  }

  VAR_8 = FUNC_2(VAR_10);
  if (!VAR_8) {
   FUNC_4(VAR_5->dev, "ppp_decompress_frame: "
       "no memory\n");
   goto err;
  }

  VAR_9 = VAR_5->rcomp->decompress(VAR_5->rc_state, VAR_6->data - 2,
    VAR_6->len + 2, VAR_8->data, VAR_10);
  if (VAR_9 < 0) {


   if (VAR_9 == VAR_0)
    VAR_5->rstate |= VAR_4;
   FUNC_3(VAR_8);
   goto err;
  }

  FUNC_1(VAR_6);
  VAR_6 = VAR_8;
  FUNC_8(VAR_6, VAR_9);
  FUNC_7(VAR_6, 2);




 } else {


  if (VAR_5->rcomp->incomp)
   VAR_5->rcomp->incomp(VAR_5->rc_state, VAR_6->data - 2,
        VAR_6->len + 2);
 }

 return VAR_6;

 err:
 VAR_5->rstate |= VAR_3;
 FUNC_5(VAR_5);
 return VAR_6;
}
