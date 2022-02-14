
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ulong ;
typedef int u8 ;
typedef int u32 ;
struct snic_io_hdr {int init_ctx; int cmnd_id; int hid; int status; int type; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline void
FUNC_1(struct snic_io_hdr *VAR_0, u8 *VAR_1, u8 *VAR_2, u32 *VAR_3,
  u32 *VAR_4, ulong *VAR_5)
{
 *VAR_1 = VAR_0->type;
 *VAR_2 = VAR_0->status;
 *VAR_4 = FUNC_0(VAR_0->hid);
 *VAR_3 = FUNC_0(VAR_0->cmnd_id);
 *VAR_5 = VAR_0->init_ctx;
}
