
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t3cdev {int lldev; } ;
struct sk_buff {int dev; int protocol; } ;
struct cpl_trace_pkt {int dummy; } ;


 struct cpl_trace_pkt* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,int) ;
 int FUNC_4 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_5(struct t3cdev *VAR_0, struct sk_buff *VAR_1)
{
 struct cpl_trace_pkt *VAR_2 = FUNC_0(VAR_1);

 VAR_1->protocol = FUNC_1(0xffff);
 VAR_1->dev = VAR_0->lldev;
 FUNC_3(VAR_1, sizeof(*VAR_2));
 FUNC_4(VAR_1);
 FUNC_2(VAR_1);
 return 0;
}
