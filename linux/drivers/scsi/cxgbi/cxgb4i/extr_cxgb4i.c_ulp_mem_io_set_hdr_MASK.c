
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ulptx_idata {void* len; void* cmd_more; } ;
struct TYPE_2__ {void* wr_hi; } ;
struct ulp_mem_io {void* len16; void* lock_addr; void* dlen; void* cmd; TYPE_1__ wr; } ;
struct cxgbi_device {int dummy; } ;
struct cxgb4_lld_info {int adapter_type; } ;


 unsigned int FUNC_0 (unsigned int,int) ;
 int VAR_0 ;
 unsigned int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (struct ulp_mem_io*,unsigned int,int ,int) ;
 unsigned int FUNC_4 (int) ;
 unsigned int FUNC_5 (int ) ;
 unsigned int FUNC_6 (unsigned int) ;
 unsigned int FUNC_7 (unsigned int) ;
 unsigned int FUNC_8 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct cxgb4_lld_info* FUNC_9 (struct cxgbi_device*) ;
 void* FUNC_10 (unsigned int) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static inline void
FUNC_12(struct cxgbi_device *VAR_3,
     struct ulp_mem_io *VAR_4,
     unsigned int VAR_5, unsigned int VAR_6,
     unsigned int VAR_7,
     int VAR_8)
{
 struct cxgb4_lld_info *VAR_9 = FUNC_9(VAR_3);
 struct ulptx_idata *VAR_10 = (struct ulptx_idata *)(VAR_4 + 1);

 FUNC_3(VAR_4, VAR_5, 0, VAR_8);
 VAR_4->wr.wr_hi = FUNC_10(FUNC_2(VAR_0) |
  FUNC_1(0));
 VAR_4->cmd = FUNC_10(FUNC_5(VAR_1) |
  FUNC_8(FUNC_11(VAR_9->adapter_type)) |
  FUNC_4(!FUNC_11(VAR_9->adapter_type)));
 VAR_4->dlen = FUNC_10(FUNC_7(VAR_6 >> 5));
 VAR_4->lock_addr = FUNC_10(FUNC_6(VAR_7 >> 5));
 VAR_4->len16 = FUNC_10(FUNC_0(VAR_5 - sizeof(VAR_4->wr), 16));

 VAR_10->cmd_more = FUNC_10(FUNC_5(VAR_2));
 VAR_10->len = FUNC_10(VAR_6);
}
