
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct ipr_resource_entry {int dummy; } ;
struct ipr_ioasa64 {int dummy; } ;
struct TYPE_5__ {scalar_t__ ilid; int ret_stat_len; int fd_ioasc; int ioasc; } ;
struct ipr_ioasa {TYPE_2__ hdr; } ;
struct ipr_ioa_cfg {scalar_t__ log_level; scalar_t__ sis64; } ;
struct TYPE_4__ {struct ipr_ioasa ioasa; } ;
struct ipr_cmnd {TYPE_1__ s; } ;
typedef int __be32 ;
struct TYPE_6__ {scalar_t__ log_ioasa; int error; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;
 TYPE_3__* VAR_4 ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct ipr_resource_entry*) ;
 int FUNC_5 (struct ipr_ioa_cfg*,struct ipr_resource_entry*,char*,int ) ;

__attribute__((used)) static void FUNC_6(struct ipr_ioa_cfg *VAR_5,
      struct ipr_cmnd *VAR_6, struct ipr_resource_entry *VAR_7)
{
 int VAR_8;
 u16 VAR_9;
 u32 VAR_10, VAR_11;
 struct ipr_ioasa *VAR_12 = &VAR_6->s.ioasa;
 __be32 *VAR_13 = (__be32 *)VAR_12;
 int VAR_14;

 VAR_10 = FUNC_1(VAR_12->hdr.ioasc) & VAR_2;
 VAR_11 = FUNC_1(VAR_12->hdr.fd_ioasc) & VAR_2;

 if (0 == VAR_10)
  return;

 if (VAR_5->log_level < VAR_0)
  return;

 if (VAR_10 == VAR_1 && VAR_11)
  VAR_14 = FUNC_3(VAR_11);
 else
  VAR_14 = FUNC_3(VAR_10);

 if (VAR_5->log_level < VAR_3) {

  if (VAR_12->hdr.ilid != 0)
   return;

  if (!FUNC_4(VAR_7))
   return;

  if (VAR_4[VAR_14].log_ioasa == 0)
   return;
 }

 FUNC_5(VAR_5, VAR_7, "%s\n", VAR_4[VAR_14].error);

 VAR_9 = FUNC_0(VAR_12->hdr.ret_stat_len);
 if (VAR_5->sis64 && sizeof(struct ipr_ioasa64) < VAR_9)
  VAR_9 = sizeof(struct ipr_ioasa64);
 else if (!VAR_5->sis64 && sizeof(struct ipr_ioasa) < VAR_9)
  VAR_9 = sizeof(struct ipr_ioasa);

 FUNC_2("IOASA Dump:\n");

 for (VAR_8 = 0; VAR_8 < VAR_9 / 4; VAR_8 += 4) {
  FUNC_2("%08X: %08X %08X %08X %08X\n", VAR_8*4,
   FUNC_1(VAR_13[VAR_8]),
   FUNC_1(VAR_13[VAR_8+1]),
   FUNC_1(VAR_13[VAR_8+2]),
   FUNC_1(VAR_13[VAR_8+3]));
 }
}
