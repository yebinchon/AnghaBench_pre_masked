
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xdr_stream {int dummy; } ;
struct TYPE_4__ {int code_set; int designator_type; int pr_key; int designator_len; int designator; } ;
struct TYPE_3__ {int sig_len; int sig; int offset; } ;
struct pnfs_block_volume {int type; TYPE_2__ scsi; TYPE_1__ simple; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int ) ;
 void* FUNC_1 (int) ;
 int * FUNC_2 (int *,int ) ;
 int * FUNC_3 (int *,int ,int ) ;
 int * FUNC_4 (struct xdr_stream*,int) ;

__attribute__((used)) static int
FUNC_5(struct xdr_stream *VAR_2, struct pnfs_block_volume *VAR_3)
{
 __be32 *VAR_4;
 int VAR_5;

 switch (VAR_3->type) {
 case 128:
  VAR_5 = 4 + 4 + 8 + 4 + (FUNC_0(VAR_3->simple.sig_len) << 2);
  VAR_4 = FUNC_4(VAR_2, VAR_5);
  if (!VAR_4)
   return -VAR_1;

  *VAR_4++ = FUNC_1(VAR_3->type);
  *VAR_4++ = FUNC_1(1);
  VAR_4 = FUNC_2(VAR_4, VAR_3->simple.offset);
  VAR_4 = FUNC_3(VAR_4, VAR_3->simple.sig, VAR_3->simple.sig_len);
  break;
 case 129:
  VAR_5 = 4 + 4 + 4 + 4 + (FUNC_0(VAR_3->scsi.designator_len) << 2) + 8;
  VAR_4 = FUNC_4(VAR_2, VAR_5);
  if (!VAR_4)
   return -VAR_1;

  *VAR_4++ = FUNC_1(VAR_3->type);
  *VAR_4++ = FUNC_1(VAR_3->scsi.code_set);
  *VAR_4++ = FUNC_1(VAR_3->scsi.designator_type);
  VAR_4 = FUNC_3(VAR_4, VAR_3->scsi.designator, VAR_3->scsi.designator_len);
  VAR_4 = FUNC_2(VAR_4, VAR_3->scsi.pr_key);
  break;
 default:
  return -VAR_0;
 }

 return VAR_5;
}
