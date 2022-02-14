
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct iscsi_conn {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int VAR_4 ;
 int FUNC_0 (int ,struct iscsi_conn*,char*) ;
 int FUNC_1 (struct iscsi_conn*,struct sk_buff*,unsigned int,int,int*) ;
 int FUNC_2 (int,char*,struct sk_buff*,unsigned int,int,int) ;
 int FUNC_3 (char*,struct sk_buff*,unsigned int,int,...) ;

__attribute__((used)) static inline int FUNC_4(struct iscsi_conn *VAR_5,
          struct sk_buff *VAR_6,
          unsigned int VAR_7,
          int VAR_8)
{
 int VAR_9 = 0;
 int VAR_10;

 VAR_10 = FUNC_1(VAR_5, VAR_6, VAR_7, VAR_8, &VAR_9);
 switch (VAR_9) {
 case 131:
  FUNC_3("skb 0x%p, off %u, %d, TCP_ERR.\n",
     VAR_6, VAR_7, VAR_8);
  return -VAR_3;
 case 128:
  FUNC_2(1 << VAR_0,
   "skb 0x%p, off %u, %d, TCP_SUSPEND, rc %d.\n",
   VAR_6, VAR_7, VAR_8, VAR_10);

  return VAR_10;
 case 129:
  FUNC_3("skb 0x%p, off %u, %d, TCP_SKB_DONE.\n",
   VAR_6, VAR_7, VAR_8);




  FUNC_0(VAR_4, VAR_5, "Invalid pdu or skb.");
  return -VAR_1;
 case 130:
  FUNC_2(1 << VAR_0,
   "skb 0x%p, off %u, %d, TCP_SEG_DONE, rc %d.\n",
   VAR_6, VAR_7, VAR_8, VAR_10);
  return VAR_10;
 default:
  FUNC_3("skb 0x%p, off %u, %d, invalid status %d.\n",
   VAR_6, VAR_7, VAR_8, VAR_9);
  return -VAR_2;
 }
}
