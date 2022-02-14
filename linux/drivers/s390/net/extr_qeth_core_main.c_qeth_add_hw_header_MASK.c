
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; scalar_t__ data; } ;
struct qeth_qdio_out_q {unsigned int max_elements; } ;
struct qeth_hdr {int dummy; } ;
typedef scalar_t__ addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,char*,unsigned int const,unsigned int,int ) ;
 unsigned int VAR_3 ;
 int FUNC_2 (struct qeth_qdio_out_q*,int ) ;
 struct qeth_hdr* FUNC_3 (int ,int ) ;
 int VAR_4 ;
 int FUNC_4 (struct sk_buff*,unsigned int) ;
 int FUNC_5 (scalar_t__,scalar_t__) ;
 int FUNC_6 (struct sk_buff*,char*,unsigned int) ;
 scalar_t__ FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*) ;
 struct qeth_hdr* FUNC_10 (struct sk_buff*,unsigned int) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_11(struct qeth_qdio_out_q *VAR_7,
         struct sk_buff *VAR_8, struct qeth_hdr **VAR_9,
         unsigned int VAR_10, unsigned int VAR_11,
         unsigned int *VAR_12)
{
 const unsigned int VAR_13 = VAR_11 ? VAR_11 : 1;
 const unsigned int VAR_14 = VAR_7->max_elements;
 unsigned int VAR_15;
 addr_t VAR_16, VAR_17;
 bool VAR_18;
 int VAR_19;

check_layout:
 VAR_16 = (addr_t)VAR_8->data - VAR_10;
 VAR_17 = (addr_t)VAR_8->data;

 if (FUNC_5(VAR_16, VAR_17 + VAR_13) == 1) {

  VAR_18 = 1;

  if (FUNC_7(VAR_8))
   VAR_15 = 1 + FUNC_4(VAR_8, VAR_11);
  else
   VAR_15 = FUNC_4(VAR_8, 0);
 } else if (!VAR_11 && FUNC_0(VAR_8->data)) {

  VAR_18 = 1;
  VAR_15 = 1 + FUNC_4(VAR_8, 0);
 } else {

  VAR_18 = 0;
  VAR_15 = 1 + FUNC_4(VAR_8, VAR_11);
 }


 if (VAR_15 > VAR_14) {
  if (!FUNC_8(VAR_8)) {

   FUNC_1(2, "Dropped an oversized skb (Max Elements=%u / Actual=%u / Length=%u).\n",
      VAR_14, VAR_15, VAR_8->len);
   return -VAR_0;
  }

  VAR_19 = FUNC_9(VAR_8);
  if (VAR_19) {
   FUNC_2(VAR_7, VAR_6);
   return VAR_19;
  }

  FUNC_2(VAR_7, VAR_5);

  goto check_layout;
 }

 *VAR_12 = VAR_15;

 if (VAR_18) {
  *VAR_9 = FUNC_10(VAR_8, VAR_10);
  return VAR_10;
 }

 if (VAR_10 + VAR_11 > VAR_3)
  return -VAR_0;
 *VAR_9 = FUNC_3(VAR_4, VAR_2);
 if (!*VAR_9)
  return -VAR_1;

 FUNC_6(VAR_8, ((char *)*VAR_9) + VAR_10, VAR_11);
 return 0;
}
