
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ulp_mem_io {int dummy; } ;
struct sk_buff {int priority; } ;
struct cxgbi_task_tag_info {unsigned int idx; unsigned int npods; } ;
struct cxgbi_ppm {unsigned int llimit; int lldev; } ;
struct cxgbi_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 struct sk_buff* FUNC_0 (scalar_t__,int ,int ) ;
 int FUNC_1 (int ,struct sk_buff*) ;
 int FUNC_2 (int,char*,struct cxgbi_device*,unsigned int,unsigned int) ;
 int FUNC_3 (char*,struct cxgbi_device*,unsigned int,int,unsigned int) ;
 int FUNC_4 (struct sk_buff*,unsigned int) ;

__attribute__((used)) static void FUNC_5(struct cxgbi_device *VAR_5, struct cxgbi_ppm *VAR_6,
     struct cxgbi_task_tag_info *VAR_7)
{
 unsigned int VAR_8 = VAR_7->idx;
 unsigned int VAR_9 = (VAR_8 << VAR_4) + VAR_6->llimit;
 unsigned int VAR_10 = VAR_7->npods;
 int VAR_11;

 FUNC_2(1 << VAR_1,
    "cdev 0x%p, clear idx %u, npods %u.\n",
    VAR_5, VAR_8, VAR_10);

 for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++, VAR_8++, VAR_9 += VAR_3) {
  struct sk_buff *VAR_12 = FUNC_0(sizeof(struct ulp_mem_io) +
            VAR_3, 0, VAR_2);

  if (!VAR_12) {
   FUNC_3("cdev 0x%p, clear ddp, %u,%d/%u, skb OOM.\n",
          VAR_5, VAR_8, VAR_11, VAR_10);
   continue;
  }
  FUNC_4(VAR_12, VAR_9);
  VAR_12->priority = VAR_0;
  FUNC_1(VAR_6->lldev, VAR_12);
 }
}
