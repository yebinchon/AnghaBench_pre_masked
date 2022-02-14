
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ulptx_idata {int dummy; } ;
struct ulp_mem_io {int dummy; } ;
struct sk_buff {scalar_t__ head; } ;
struct scatterlist {int dummy; } ;
struct cxgbi_task_tag_info {int dummy; } ;
struct cxgbi_sock {int lock; int port_id; int tid; struct cxgbi_device* cdev; } ;
struct cxgbi_ppm {int dummy; } ;
struct cxgbi_pagepod {int dummy; } ;
struct cxgbi_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cxgbi_pagepod*,struct cxgbi_task_tag_info*,struct scatterlist**,unsigned int*) ;
 int FUNC_1 (struct sk_buff*,int ) ;
 int FUNC_2 (struct cxgbi_sock*,struct sk_buff*) ;
 struct sk_buff* FUNC_3 (struct cxgbi_device*,struct cxgbi_ppm*,unsigned int,unsigned int,int ) ;
 int FUNC_4 (struct sk_buff*,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct cxgbi_ppm *VAR_4, struct cxgbi_sock *VAR_5,
    struct cxgbi_task_tag_info *VAR_6,
    unsigned int VAR_7, unsigned int VAR_8,
    struct scatterlist **VAR_9,
    unsigned int *VAR_10)
{
 struct cxgbi_device *VAR_11 = VAR_5->cdev;
 struct sk_buff *VAR_12 = FUNC_3(VAR_11, VAR_4, VAR_7, VAR_8,
        VAR_5->tid);
 struct ulp_mem_io *VAR_13;
 struct ulptx_idata *VAR_14;
 struct cxgbi_pagepod *VAR_15;
 int VAR_16;

 if (!VAR_12)
  return -VAR_1;

 VAR_13 = (struct ulp_mem_io *)VAR_12->head;
 VAR_14 = (struct ulptx_idata *)(VAR_13 + 1);
 VAR_15 = (struct cxgbi_pagepod *)(VAR_14 + 1);

 for (VAR_16 = 0; VAR_16 < VAR_8; VAR_16++, VAR_15++)
  FUNC_0(VAR_15, VAR_6, VAR_9, VAR_10);

 FUNC_1(VAR_12, VAR_3);
 FUNC_1(VAR_12, VAR_2);
 FUNC_4(VAR_12, VAR_0, VAR_5->port_id);

 FUNC_5(&VAR_5->lock);
 FUNC_2(VAR_5, VAR_12);
 FUNC_6(&VAR_5->lock);

 return 0;
}
