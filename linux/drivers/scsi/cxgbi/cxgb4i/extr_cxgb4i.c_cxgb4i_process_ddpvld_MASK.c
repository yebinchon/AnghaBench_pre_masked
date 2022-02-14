
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct cxgbi_sock {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,int ) ;
 int FUNC_2 (struct sk_buff*,int ) ;
 int FUNC_3 (int,char*,struct cxgbi_sock*,struct sk_buff*,int) ;
 int FUNC_4 (char*,struct cxgbi_sock*,struct sk_buff*,int,int ) ;

__attribute__((used)) static void
FUNC_5(struct cxgbi_sock *VAR_10,
        struct sk_buff *VAR_11, u32 VAR_12)
{
 if (VAR_12 & (1 << VAR_2)) {
  FUNC_4("csk 0x%p, lhdr 0x%p, status 0x%x, hcrc bad 0x%lx.\n",
   VAR_10, VAR_11, VAR_12, FUNC_0(VAR_11));
  FUNC_1(VAR_11, VAR_8);
 }

 if (VAR_12 & (1 << VAR_0)) {
  FUNC_4("csk 0x%p, lhdr 0x%p, status 0x%x, dcrc bad 0x%lx.\n",
   VAR_10, VAR_11, VAR_12, FUNC_0(VAR_11));
  FUNC_1(VAR_11, VAR_7);
 }

 if (VAR_12 & (1 << VAR_3)) {
  FUNC_3(1 << VAR_4,
     "csk 0x%p, lhdr 0x%p, status 0x%x, pad bad.\n",
     VAR_10, VAR_11, VAR_12);
  FUNC_1(VAR_11, VAR_9);
 }

 if ((VAR_12 & (1 << VAR_1)) &&
     !FUNC_2(VAR_11, VAR_5)) {
  FUNC_3(1 << VAR_4,
     "csk 0x%p, lhdr 0x%p, 0x%x, data ddp'ed.\n",
     VAR_10, VAR_11, VAR_12);
  FUNC_1(VAR_11, VAR_6);
 }
}
