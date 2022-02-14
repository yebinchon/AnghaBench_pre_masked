
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ulp_mem_io {int dummy; } ;
struct sk_buff {int priority; scalar_t__ head; } ;
struct scatterlist {int dummy; } ;
struct cxgbi_task_tag_info {unsigned int idx; unsigned int npods; struct scatterlist* sgl; } ;
struct cxgbi_sock {int dummy; } ;
struct cxgbi_ppm {unsigned int llimit; int lldev; } ;
struct cxgbi_pagepod {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 struct sk_buff* FUNC_0 (scalar_t__,int ,int ) ;
 int FUNC_1 (int ,struct sk_buff*) ;
 int FUNC_2 (struct cxgbi_pagepod*,struct cxgbi_task_tag_info*,struct scatterlist**,unsigned int*) ;
 int FUNC_3 (struct sk_buff*,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct cxgbi_ppm *VAR_6, struct cxgbi_sock *VAR_7,
         struct cxgbi_task_tag_info *VAR_8)
{
 unsigned int VAR_9 = VAR_8->idx;
 unsigned int VAR_10 = VAR_8->npods;
 struct scatterlist *VAR_11 = VAR_8->sgl;
 struct cxgbi_pagepod *VAR_12;
 struct ulp_mem_io *VAR_13;
 unsigned int VAR_14;
 unsigned int VAR_15 = (VAR_9 << VAR_5) + VAR_6->llimit;
 int VAR_16;

 for (VAR_16 = 0; VAR_16 < VAR_10; VAR_16++, VAR_9++, VAR_15 += VAR_3) {
  struct sk_buff *VAR_17 = FUNC_0(sizeof(struct ulp_mem_io) +
            VAR_3, 0, VAR_2);

  if (!VAR_17)
   return -VAR_1;
  FUNC_3(VAR_17, VAR_15);
  VAR_13 = (struct ulp_mem_io *)VAR_17->head;
  VAR_12 = (struct cxgbi_pagepod *)(VAR_13 + 1);
  VAR_14 = VAR_16 * VAR_4;
  FUNC_2(VAR_12, VAR_8, &VAR_11,
           &VAR_14);
  VAR_17->priority = VAR_0;
  FUNC_1(VAR_6->lldev, VAR_17);
 }
 return 0;
}
