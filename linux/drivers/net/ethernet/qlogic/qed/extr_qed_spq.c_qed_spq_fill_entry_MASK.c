
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int lo; int hi; } ;
struct TYPE_6__ {int protocol_id; int cmd_id; int cid; } ;
struct TYPE_8__ {TYPE_3__ data_ptr; TYPE_2__ hdr; } ;
struct TYPE_5__ {int function; } ;
struct qed_spq_entry {int comp_mode; TYPE_4__ elem; TYPE_1__ comp_cb; scalar_t__ flags; } ;
struct qed_hwfn {int dummy; } ;


 int FUNC_0 (struct qed_hwfn*,char*,int) ;
 int FUNC_1 (struct qed_hwfn*,int ,char*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int,int const,int const,char*,char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;

__attribute__((used)) static int FUNC_3(struct qed_hwfn *VAR_3,
         struct qed_spq_entry *VAR_4)
{
 VAR_4->flags = 0;

 switch (VAR_4->comp_mode) {
 case 128:
 case 130:
  VAR_4->comp_cb.function = VAR_2;
  break;
 case 129:
  break;
 default:
  FUNC_0(VAR_3, "Unknown SPQE completion mode %d\n",
     VAR_4->comp_mode);
  return -VAR_0;
 }

 FUNC_1(VAR_3, VAR_1,
     "Ramrod header: [CID 0x%08x CMD 0x%02x protocol 0x%02x] Data pointer: [%08x:%08x] Completion Mode: %s\n",
     VAR_4->elem.hdr.cid,
     VAR_4->elem.hdr.cmd_id,
     VAR_4->elem.hdr.protocol_id,
     VAR_4->elem.data_ptr.hi,
     VAR_4->elem.data_ptr.lo,
     FUNC_2(VAR_4->comp_mode, 128,
      130, "MODE_EBLOCK", "MODE_BLOCK",
      "MODE_CB"));

 return 0;
}
