
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int len; scalar_t__ data; } ;
struct TYPE_4__ {int queue; } ;
struct TYPE_3__ {int mbox_off; } ;
struct nfp_net {TYPE_2__ mbox_cmsg; TYPE_1__ tlv_caps; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sk_buff* FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct nfp_net*,int,int ,int) ;
 int FUNC_5 (struct nfp_net*,int,int ) ;
 int FUNC_6 (int,int) ;
 struct sk_buff* FUNC_7 (int *,struct sk_buff*) ;

__attribute__((used)) static void FUNC_8(struct nfp_net *VAR_4, struct sk_buff *VAR_5)
{
 struct sk_buff *VAR_6;
 int VAR_7, VAR_8, VAR_9;
 __be32 *VAR_10;
 u32 VAR_11, VAR_12;

 VAR_11 = VAR_4->tlv_caps.mbox_off + VAR_0;
 VAR_6 = FUNC_0(&VAR_4->mbox_cmsg.queue);
 while (1) {
  FUNC_4(VAR_4, VAR_11, VAR_2,
           VAR_6->len);
  VAR_11 += 4;


  VAR_10 = (__be32 *)VAR_6->data;
  VAR_9 = VAR_6->len / 4;
  for (VAR_8 = 0 ; VAR_8 < VAR_9; VAR_8++) {
   FUNC_5(VAR_4, VAR_11, FUNC_1(VAR_10[VAR_8]));
   VAR_11 += 4;
  }
  if (VAR_6->len & 3) {
   __be32 VAR_13 = 0;

   FUNC_2(&VAR_13, &VAR_10[VAR_8], VAR_6->len & 3);
   FUNC_5(VAR_4, VAR_11, FUNC_1(VAR_13));
   VAR_11 += 4;
  }


  VAR_12 = FUNC_6(VAR_6->len, 4);
  VAR_7 = FUNC_3(VAR_6) - VAR_12;
  if (VAR_7 > 0) {
   FUNC_4(VAR_4, VAR_11,
            VAR_3,
            VAR_7);
   VAR_11 += 4 + VAR_7;
  }

  if (VAR_6 == VAR_5)
   break;
  VAR_6 = FUNC_7(&VAR_4->mbox_cmsg.queue, VAR_6);
 }

 FUNC_4(VAR_4, VAR_11, VAR_1, 0);
}
