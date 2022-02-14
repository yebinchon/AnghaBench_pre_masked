
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int protocol; } ;
struct sixpack {int rcount; TYPE_2__* dev; scalar_t__ cooked_buf; } ;
struct TYPE_3__ {int rx_bytes; int rx_dropped; int rx_packets; } ;
struct TYPE_4__ {TYPE_1__ stats; } ;


 int FUNC_0 (struct sk_buff*,TYPE_2__*) ;
 struct sk_buff* FUNC_1 (int) ;
 int FUNC_2 (unsigned char*,scalar_t__,int) ;
 int FUNC_3 (struct sk_buff*) ;
 unsigned char* FUNC_4 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_5(struct sixpack *VAR_0, char VAR_1)
{
 struct sk_buff *VAR_2;
 int VAR_3;
 unsigned char *VAR_4;

 VAR_3 = VAR_0->rcount + 1;

 VAR_0->dev->stats.rx_bytes += VAR_3;

 if ((VAR_2 = FUNC_1(VAR_3 + 1)) == ((void*)0))
  goto out_mem;

 VAR_4 = FUNC_4(VAR_2, VAR_3 + 1);
 *VAR_4++ = VAR_1;

 FUNC_2(VAR_4, VAR_0->cooked_buf + 1, VAR_3);
 VAR_2->protocol = FUNC_0(VAR_2, VAR_0->dev);
 FUNC_3(VAR_2);
 VAR_0->dev->stats.rx_packets++;

 return;

out_mem:
 VAR_0->dev->stats.rx_dropped++;
}
