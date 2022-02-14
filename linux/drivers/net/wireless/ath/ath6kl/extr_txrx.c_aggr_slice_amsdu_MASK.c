
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sk_buff {int len; int * data; } ;
struct rxtid {int q; } ;
struct ethhdr {int h_proto; } ;
struct aggr_info {int dummy; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_1 (struct aggr_info*) ;
 int FUNC_2 (char*,...) ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int *,int *,int) ;
 int FUNC_7 (struct sk_buff*,int) ;
 int FUNC_8 (int *,struct sk_buff*) ;

__attribute__((used)) static void FUNC_9(struct aggr_info *VAR_2,
        struct rxtid *VAR_3, struct sk_buff *VAR_4)
{
 struct sk_buff *VAR_5;
 struct ethhdr *VAR_6;
 u16 VAR_7, VAR_8, VAR_9, VAR_10;
 u8 *VAR_11;

 VAR_9 = sizeof(struct ethhdr);
 VAR_11 = VAR_4->data + VAR_9;
 VAR_10 = VAR_4->len - VAR_9;

 while (VAR_10 > VAR_9) {
  VAR_6 = (struct ethhdr *) VAR_11;
  VAR_8 = FUNC_4(VAR_6->h_proto);

  if (VAR_8 < VAR_1 ||
      VAR_8 > VAR_0) {
   FUNC_2("802.3 AMSDU frame bound check failed. len %d\n",
       VAR_8);
   break;
  }

  VAR_7 = VAR_8 + VAR_9;
  VAR_5 = FUNC_1(VAR_2);
  if (!VAR_5) {
   FUNC_2("no buffer available\n");
   break;
  }

  FUNC_6(VAR_5->data, VAR_11, VAR_7);
  FUNC_7(VAR_5, VAR_7);
  if (FUNC_3(VAR_5)) {
   FUNC_2("dot3_2_dix error\n");
   FUNC_5(VAR_5);
   break;
  }

  FUNC_8(&VAR_3->q, VAR_5);


  if ((VAR_10 - VAR_7) == 0)
   break;




  VAR_7 = FUNC_0(VAR_7, 4);

  VAR_11 += VAR_7;
  VAR_10 -= VAR_7;
 }

 FUNC_5(VAR_4);
}
