
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ protocol; scalar_t__ data; } ;
struct qeth_qdio_out_q {unsigned int max_elements; } ;
struct qeth_hdr {int dummy; } ;
struct qeth_card {int dummy; } ;
typedef int addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 struct qeth_hdr* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,struct qeth_hdr*) ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (struct sk_buff*,unsigned int) ;
 int FUNC_4 (struct qeth_card*,struct qeth_qdio_out_q*,struct sk_buff*,struct qeth_hdr*,unsigned int,unsigned int,unsigned int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct sk_buff*,char*,unsigned int) ;

__attribute__((used)) static int FUNC_7(struct qeth_card *VAR_6, struct sk_buff *VAR_7,
       struct qeth_qdio_out_q *VAR_8)
{
 struct qeth_hdr *VAR_9 = (struct qeth_hdr *)VAR_7->data;
 addr_t VAR_10 = (addr_t)(VAR_7->data + sizeof(*VAR_9));
 addr_t VAR_11 = (addr_t)VAR_7->data;
 unsigned int VAR_12 = 0;
 unsigned int VAR_13 = 0;
 int VAR_14;

 if (VAR_7->protocol == FUNC_0(VAR_3))
  return -VAR_2;

 if (FUNC_5(VAR_11, VAR_10) > 1) {

  VAR_9 = FUNC_1(VAR_5, VAR_4);
  if (!VAR_9)
   return -VAR_1;
  VAR_13 = sizeof(*VAR_9);
  FUNC_6(VAR_7, (char *)VAR_9, VAR_13);
  VAR_12++;
 }

 VAR_12 += FUNC_3(VAR_7, VAR_13);
 if (VAR_12 > VAR_8->max_elements) {
  VAR_14 = -VAR_0;
  goto out;
 }

 VAR_14 = FUNC_4(VAR_6, VAR_8, VAR_7, VAR_9, VAR_13, VAR_13,
     VAR_12);
out:
 if (VAR_14 && VAR_13)
  FUNC_2(VAR_5, VAR_9);
 return VAR_14;
}
