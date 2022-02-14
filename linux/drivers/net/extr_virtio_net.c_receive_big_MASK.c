
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtnet_rq_stats {int drops; int bytes; } ;
struct virtnet_info {unsigned int hdr_len; } ;
struct sk_buff {int dummy; } ;
struct receive_queue {int dummy; } ;
struct page {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct receive_queue*,struct page*) ;
 struct sk_buff* FUNC_1 (struct virtnet_info*,struct receive_queue*,struct page*,int ,unsigned int,int ,int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static struct sk_buff *FUNC_3(struct net_device *VAR_1,
       struct virtnet_info *VAR_2,
       struct receive_queue *VAR_3,
       void *VAR_4,
       unsigned int VAR_5,
       struct virtnet_rq_stats *VAR_6)
{
 struct page *VAR_7 = VAR_4;
 struct sk_buff *VAR_8 = FUNC_1(VAR_2, VAR_3, VAR_7, 0, VAR_5,
       VAR_0, 1);

 VAR_6->bytes += VAR_5 - VAR_2->hdr_len;
 if (FUNC_2(!VAR_8))
  goto err;

 return VAR_8;

err:
 VAR_6->drops++;
 FUNC_0(VAR_3, VAR_7);
 return ((void*)0);
}
