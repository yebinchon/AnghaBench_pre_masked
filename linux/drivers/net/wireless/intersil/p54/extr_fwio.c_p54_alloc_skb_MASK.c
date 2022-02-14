
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff {int dummy; } ;
struct p54_hdr {scalar_t__ rts_tries; scalar_t__ tries; void* type; void* len; void* flags; } ;
struct p54_common {int tx_hdr_len; int tx_pending; } ;
typedef int gfp_t ;


 size_t VAR_0 ;
 struct sk_buff* FUNC_0 (int ,int ) ;
 void* FUNC_1 (int) ;
 struct p54_hdr* FUNC_2 (struct sk_buff*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static struct sk_buff *FUNC_6(struct p54_common *VAR_1, u16 VAR_2,
         u16 VAR_3, u16 VAR_4, gfp_t VAR_5)
{
 struct p54_hdr *VAR_6;
 struct sk_buff *VAR_7;
 size_t VAR_8 = sizeof(*VAR_6) + VAR_3;

 if (VAR_8 > VAR_0)
  return ((void*)0);

 if (FUNC_5(FUNC_3(&VAR_1->tx_pending) > 64))
  return ((void*)0);

 VAR_7 = FUNC_0(VAR_1->tx_hdr_len + VAR_8, VAR_5);
 if (!VAR_7)
  return ((void*)0);
 FUNC_4(VAR_7, VAR_1->tx_hdr_len);

 VAR_6 = FUNC_2(VAR_7, sizeof(*VAR_6));
 VAR_6->flags = FUNC_1(VAR_2);
 VAR_6->len = FUNC_1(VAR_3);
 VAR_6->type = FUNC_1(VAR_4);
 VAR_6->tries = VAR_6->rts_tries = 0;
 return VAR_7;
}
