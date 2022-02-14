
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int result; } ;
union outputArgs {TYPE_1__ oh; } ;
struct TYPE_4__ {scalar_t__ unique; int opcode; } ;
union inputArgs {TYPE_2__ ih; } ;
struct venus_comm {int vc_mutex; int vc_waitq; int vc_pending; int vc_inuse; scalar_t__ vc_seq; } ;
struct upc_req {int uc_flags; int uc_inSize; int uc_outSize; int uc_chain; void* uc_data; scalar_t__ uc_unique; int uc_opcode; int uc_sleep; } ;
struct coda_in_hdr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct venus_comm*,struct upc_req*) ;
 int VAR_9 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct upc_req*) ;
 struct upc_req* FUNC_3 (int,int ) ;
 union inputArgs* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(struct venus_comm *VAR_10,
         int VAR_11, int *VAR_12,
         union inputArgs *VAR_13)
{
 union outputArgs *VAR_14;
 union inputArgs *VAR_15;
 struct upc_req *VAR_16 = ((void*)0), *VAR_17;
 int VAR_18;

 FUNC_7(&VAR_10->vc_mutex);

 if (!VAR_10->vc_inuse) {
  FUNC_10("Venus dead, not sending upcall\n");
  VAR_18 = -VAR_7;
  goto exit;
 }


 VAR_16 = FUNC_3(sizeof(struct upc_req), VAR_8);
 if (!VAR_16) {
  VAR_18 = -VAR_6;
  goto exit;
 }

 VAR_13->ih.unique = ++VAR_10->vc_seq;

 VAR_16->uc_data = (void *)VAR_13;
 VAR_16->uc_flags = VAR_12 ? 0 : VAR_1;
 VAR_16->uc_inSize = VAR_11;
 VAR_16->uc_outSize = (VAR_12 && *VAR_12) ? *VAR_12 : VAR_11;
 VAR_16->uc_opcode = VAR_13->ih.opcode;
 VAR_16->uc_unique = VAR_13->ih.unique;
 FUNC_1(&VAR_16->uc_sleep);


 FUNC_6(&VAR_16->uc_chain, &VAR_10->vc_pending);
 FUNC_13(&VAR_10->vc_waitq);

 if (VAR_16->uc_flags & VAR_1) {
  FUNC_8(&VAR_10->vc_mutex);
  return 0;
 }
 FUNC_0(VAR_10, VAR_16);


 if (VAR_16->uc_flags & VAR_3) {
  VAR_14 = (union outputArgs *)VAR_16->uc_data;

  VAR_18 = -VAR_14->oh.result;
  *VAR_12 = VAR_16->uc_outSize;
  goto exit;
 }

 VAR_18 = -VAR_5;
 if ((VAR_16->uc_flags & VAR_0) || !FUNC_12(VAR_9)) {
  FUNC_11("Unexpected interruption.\n");
  goto exit;
 }


 if (!(VAR_16->uc_flags & VAR_2))
  goto exit;


 if (!VAR_10->vc_inuse) {
  FUNC_9("Venus dead, not sending signal.\n");
  goto exit;
 }

 VAR_18 = -VAR_6;
 VAR_17 = FUNC_3(sizeof(struct upc_req), VAR_8);
 if (!VAR_17) goto exit;

 VAR_15 = FUNC_4(sizeof(struct coda_in_hdr), VAR_8);
 if (!VAR_15) {
  FUNC_2(VAR_17);
  goto exit;
 }

 VAR_18 = -VAR_5;
 VAR_15->ih.opcode = VAR_4;
 VAR_15->ih.unique = VAR_16->uc_unique;

 VAR_17->uc_flags = VAR_1;
 VAR_17->uc_opcode = VAR_15->ih.opcode;
 VAR_17->uc_unique = VAR_15->ih.unique;
 VAR_17->uc_data = (void *)VAR_15;
 VAR_17->uc_inSize = sizeof(struct coda_in_hdr);
 VAR_17->uc_outSize = sizeof(struct coda_in_hdr);


 FUNC_5(&(VAR_17->uc_chain), &VAR_10->vc_pending);
 FUNC_13(&VAR_10->vc_waitq);

exit:
 FUNC_2(VAR_16);
 FUNC_8(&VAR_10->vc_mutex);
 return VAR_18;
}
