
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ulptx_idata {void* len; void* cmd_more; } ;
struct TYPE_2__ {void* wr_hi; } ;
struct ulp_mem_io {void* len16; void* lock_addr; void* dlen; void* cmd; TYPE_1__ wr; } ;
struct sk_buff {int dummy; } ;
struct cxgbit_device {int dummy; } ;
struct cxgbi_ppm {unsigned int llimit; } ;


 unsigned int FUNC_0 (unsigned int,int) ;
 int VAR_0 ;
 unsigned int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (struct ulp_mem_io*,unsigned int,int ,unsigned int) ;
 unsigned int VAR_2 ;
 unsigned int FUNC_4 (int) ;
 unsigned int FUNC_5 (int ) ;
 unsigned int FUNC_6 (unsigned int) ;
 unsigned int FUNC_7 (unsigned int) ;
 unsigned int FUNC_8 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 struct ulp_mem_io* FUNC_9 (struct sk_buff*,unsigned int) ;
 struct sk_buff* FUNC_10 (unsigned int,int ) ;
 void* FUNC_11 (unsigned int) ;
 unsigned int FUNC_12 (int,int) ;

__attribute__((used)) static struct sk_buff *
FUNC_13(struct cxgbit_device *VAR_5, struct cxgbi_ppm *VAR_6,
         unsigned int VAR_7, unsigned int VAR_8, unsigned int VAR_9)
{
 struct ulp_mem_io *VAR_10;
 struct ulptx_idata *VAR_11;
 unsigned int VAR_12 = (VAR_7 << VAR_2) + VAR_6->llimit;
 unsigned int VAR_13 = VAR_8 << VAR_2;
 unsigned int VAR_14 = FUNC_12(sizeof(struct ulp_mem_io) +
    sizeof(struct ulptx_idata) + VAR_13, 16);
 struct sk_buff *VAR_15;

 VAR_15 = FUNC_10(VAR_14, VAR_1);
 if (!VAR_15)
  return ((void*)0);

 VAR_10 = FUNC_9(VAR_15, VAR_14);
 FUNC_3(VAR_10, VAR_14, 0, VAR_9);
 VAR_10->wr.wr_hi = FUNC_11(FUNC_2(VAR_0) |
  FUNC_1(0));
 VAR_10->cmd = FUNC_11(FUNC_5(VAR_3) |
  FUNC_8(0) |
  FUNC_4(1));
 VAR_10->dlen = FUNC_11(FUNC_7(VAR_13 >> 5));
 VAR_10->lock_addr = FUNC_11(FUNC_6(VAR_12 >> 5));
 VAR_10->len16 = FUNC_11(FUNC_0(VAR_14 - sizeof(VAR_10->wr), 16));

 VAR_11 = (struct ulptx_idata *)(VAR_10 + 1);
 VAR_11->cmd_more = FUNC_11(FUNC_5(VAR_4));
 VAR_11->len = FUNC_11(VAR_13);

 return VAR_15;
}
