
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* u8 ;
typedef int u32 ;
struct TYPE_8__ {int * function; TYPE_3__* cookie; } ;
struct TYPE_7__ {scalar_t__ done; } ;
struct TYPE_5__ {void* protocol_id; void* cmd_id; int cid; } ;
struct TYPE_6__ {TYPE_1__ hdr; } ;
struct qed_spq_entry {int comp_mode; int ramrod; TYPE_4__ comp_cb; TYPE_3__ comp_done; int priority; TYPE_2__ elem; } ;
struct qed_sp_init_data {int opaque_fid; int cid; int comp_mode; TYPE_4__* p_comp_data; } ;
struct qed_hwfn {int dummy; } ;


 int FUNC_0 (struct qed_hwfn*,char*,int) ;
 int FUNC_1 (struct qed_hwfn*,int ,char*,int,void*,void*,unsigned long,int ) ;
 int FUNC_2 (int,int const,int const,char*,char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (struct qed_hwfn*,struct qed_spq_entry*) ;
 int FUNC_6 (struct qed_hwfn*,struct qed_spq_entry**) ;

int FUNC_7(struct qed_hwfn *VAR_4,
   struct qed_spq_entry **VAR_5,
   u8 VAR_6, u8 VAR_7, struct qed_sp_init_data *VAR_8)
{
 u32 VAR_9 = VAR_8->opaque_fid << 16 | VAR_8->cid;
 struct qed_spq_entry *VAR_10 = ((void*)0);
 int VAR_11;

 if (!VAR_5)
  return -VAR_1;

 VAR_11 = FUNC_6(VAR_4, VAR_5);

 if (VAR_11)
  return VAR_11;

 VAR_10 = *VAR_5;

 VAR_10->elem.hdr.cid = FUNC_3(VAR_9);
 VAR_10->elem.hdr.cmd_id = VAR_6;
 VAR_10->elem.hdr.protocol_id = VAR_7;

 VAR_10->priority = VAR_3;
 VAR_10->comp_mode = VAR_8->comp_mode;
 VAR_10->comp_done.done = 0;

 switch (VAR_10->comp_mode) {
 case 128:
  VAR_10->comp_cb.cookie = &VAR_10->comp_done;
  break;

 case 130:
  if (!VAR_8->p_comp_data)
   goto err;

  VAR_10->comp_cb.cookie = VAR_8->p_comp_data->cookie;
  break;

 case 129:
  if (!VAR_8->p_comp_data)
   VAR_10->comp_cb.function = ((void*)0);
  else
   VAR_10->comp_cb = *VAR_8->p_comp_data;
  break;

 default:
  FUNC_0(VAR_4, "Unknown SPQE completion mode %d\n",
     VAR_10->comp_mode);
  goto err;
 }

 FUNC_1(VAR_4, VAR_2,
     "Initialized: CID %08x cmd %02x protocol %02x data_addr %lu comp_mode [%s]\n",
     VAR_9, VAR_6, VAR_7,
     (unsigned long)&VAR_10->ramrod,
     FUNC_2(VAR_10->comp_mode, 128,
      130, "MODE_EBLOCK", "MODE_BLOCK",
      "MODE_CB"));

 FUNC_4(&VAR_10->ramrod, 0, sizeof(VAR_10->ramrod));

 return 0;

err:
 FUNC_5(VAR_4, VAR_10);

 return -VAR_0;
}
