
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ulptx_idata {int dummy; } ;
struct ulp_mem_io {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;
struct scatterlist {int dummy; } ;
struct TYPE_2__ {struct cxgbit_device* cdev; } ;
struct cxgbit_sock {int ppodq; int tid; TYPE_1__ com; } ;
struct cxgbit_device {int dummy; } ;
struct cxgbi_task_tag_info {int dummy; } ;
struct cxgbi_ppm {int dummy; } ;
struct cxgbi_pagepod {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct sk_buff*) ;
 struct sk_buff* FUNC_1 (struct cxgbit_device*,struct cxgbi_ppm*,unsigned int,unsigned int,int ) ;
 int FUNC_2 (struct cxgbi_pagepod*,struct cxgbi_task_tag_info*,struct scatterlist**,unsigned int*) ;

__attribute__((used)) static int
FUNC_3(struct cxgbi_ppm *VAR_1, struct cxgbit_sock *VAR_2,
   struct cxgbi_task_tag_info *VAR_3, unsigned int VAR_4,
   unsigned int VAR_5, struct scatterlist **VAR_6,
   unsigned int *VAR_7)
{
 struct cxgbit_device *VAR_8 = VAR_2->com.cdev;
 struct sk_buff *VAR_9;
 struct ulp_mem_io *VAR_10;
 struct ulptx_idata *VAR_11;
 struct cxgbi_pagepod *VAR_12;
 unsigned int VAR_13;

 VAR_9 = FUNC_1(VAR_8, VAR_1, VAR_4, VAR_5, VAR_2->tid);
 if (!VAR_9)
  return -VAR_0;

 VAR_10 = (struct ulp_mem_io *)VAR_9->data;
 VAR_11 = (struct ulptx_idata *)(VAR_10 + 1);
 VAR_12 = (struct cxgbi_pagepod *)(VAR_11 + 1);

 for (VAR_13 = 0; VAR_13 < VAR_5; VAR_13++, VAR_12++)
  FUNC_2(VAR_12, VAR_3, VAR_6, VAR_7);

 FUNC_0(&VAR_2->ppodq, VAR_9);

 return 0;
}
