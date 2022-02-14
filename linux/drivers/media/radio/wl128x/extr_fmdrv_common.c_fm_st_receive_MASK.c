
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__* cb; } ;
struct fmdev {int rx_task; int rx_q; } ;


 long VAR_0 ;
 long VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ,scalar_t__*,int) ;
 int FUNC_2 (struct sk_buff*,int) ;
 int FUNC_3 (int *,struct sk_buff*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static long FUNC_5(void *VAR_3, struct sk_buff *VAR_4)
{
 struct fmdev *VAR_5;

 VAR_5 = (struct fmdev *)VAR_3;

 if (VAR_4 == ((void*)0)) {
  FUNC_0("Invalid SKB received from ST\n");
  return -VAR_0;
 }

 if (VAR_4->cb[0] != VAR_2) {
  FUNC_0("Received SKB (%p) is not FM Channel 8 pkt\n", VAR_4);
  return -VAR_1;
 }

 FUNC_1(FUNC_2(VAR_4, 1), &VAR_4->cb[0], 1);
 FUNC_3(&VAR_5->rx_q, VAR_4);
 FUNC_4(&VAR_5->rx_task);

 return 0;
}
