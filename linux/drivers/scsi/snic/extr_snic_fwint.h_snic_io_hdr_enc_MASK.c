
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ulong ;
typedef void* u8 ;
typedef int u32 ;
typedef int u16 ;
struct snic_io_hdr {scalar_t__ flags; int init_ctx; int sg_cnt; void* cmnd_id; void* hid; scalar_t__ protocol; void* status; void* type; } ;


 int FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;

__attribute__((used)) static inline void
FUNC_2(struct snic_io_hdr *VAR_0, u8 VAR_1, u8 VAR_2, u32 VAR_3, u32 VAR_4,
  u16 VAR_5, ulong VAR_6)
{
 VAR_0->type = VAR_1;
 VAR_0->status = VAR_2;
 VAR_0->protocol = 0;
 VAR_0->hid = FUNC_1(VAR_4);
 VAR_0->cmnd_id = FUNC_1(VAR_3);
 VAR_0->sg_cnt = FUNC_0(VAR_5);
 VAR_0->init_ctx = VAR_6;
 VAR_0->flags = 0;
}
