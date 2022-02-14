
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ulong ;
typedef scalar_t__ u32 ;
struct sk_buff {int priority; scalar_t__ data; } ;
struct ethhdr {int h_dest; int h_source; } ;
struct brcmf_msgbuf_work_item {int ifidx; int queue; int da; int sa; scalar_t__ flowid; } ;
struct brcmf_msgbuf {int flowring_work; int flowring_work_lock; int work_queue; int flow; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (struct brcmf_msgbuf_work_item*) ;
 struct brcmf_msgbuf_work_item* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static u32 FUNC_8(struct brcmf_msgbuf *VAR_3, int VAR_4,
     struct sk_buff *VAR_5)
{
 struct brcmf_msgbuf_work_item *VAR_6;
 struct ethhdr *VAR_7 = (struct ethhdr *)(VAR_5->data);
 u32 VAR_8;
 ulong VAR_9;

 VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_2);
 if (VAR_6 == ((void*)0))
  return VAR_0;

 VAR_8 = FUNC_0(VAR_3->flow, VAR_7->h_dest,
           VAR_5->priority, VAR_4);
 if (VAR_8 == VAR_0) {
  FUNC_1(VAR_6);
  return VAR_8;
 }

 VAR_6->flowid = VAR_8;
 VAR_6->ifidx = VAR_4;
 FUNC_4(VAR_6->sa, VAR_7->h_source, VAR_1);
 FUNC_4(VAR_6->da, VAR_7->h_dest, VAR_1);

 FUNC_6(&VAR_3->flowring_work_lock, VAR_9);
 FUNC_3(&VAR_6->queue, &VAR_3->work_queue);
 FUNC_7(&VAR_3->flowring_work_lock, VAR_9);
 FUNC_5(&VAR_3->flowring_work);

 return VAR_8;
}
