
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct qeth_qdio_out_q {int dummy; } ;
struct qeth_hdr_tso {int dummy; } ;
struct qeth_hdr {int dummy; } ;
struct qeth_card {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct qeth_card*,struct sk_buff*,struct qeth_qdio_out_q*,int,int ) ;
 int FUNC_2 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct qeth_card *VAR_2, struct sk_buff *VAR_3,
   struct qeth_qdio_out_q *VAR_4, int VAR_5)
{
 unsigned int VAR_6;
 int VAR_7;


 VAR_6 = FUNC_3(VAR_3) ? sizeof(struct qeth_hdr_tso) :
           sizeof(struct qeth_hdr);
 VAR_7 = FUNC_2(VAR_3, VAR_6 - VAR_0);
 if (VAR_7)
  return VAR_7;
 FUNC_4(VAR_3, VAR_0);

 FUNC_0(VAR_3);
 return FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_1);
}
