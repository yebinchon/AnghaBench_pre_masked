
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct htc_target {scalar_t__ htc_tgt_ver; scalar_t__ msg_per_bndl_max; } ;
struct htc_setup_comp_msg {scalar_t__ msg_per_rxbndl; void* msg_id; int flags; } ;
struct htc_setup_comp_ext_msg {scalar_t__ msg_per_rxbndl; void* msg_id; int flags; } ;
struct htc_packet {int * completion; scalar_t__ buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct htc_target*,struct htc_packet*) ;
 int FUNC_1 (struct htc_packet*,int ,int ,int ) ;
 void* FUNC_2 (int ) ;
 struct htc_packet* FUNC_3 (struct htc_target*,int) ;
 int FUNC_4 (struct htc_target*,struct htc_packet*) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (struct htc_setup_comp_msg*,int ,int) ;
 int FUNC_7 (struct htc_packet*,int *,int *,int,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct htc_target *VAR_7)
{
 struct htc_packet *VAR_8 = ((void*)0);
 int VAR_9;

 VAR_8 = FUNC_3(VAR_7, 1);

 if (!VAR_8)
  return -VAR_1;

 if (VAR_7->htc_tgt_ver >= VAR_6) {
  struct htc_setup_comp_ext_msg *VAR_10;
  u32 VAR_11 = 0;

  VAR_10 =
      (struct htc_setup_comp_ext_msg *)VAR_8->buf;
  FUNC_6(VAR_10, 0, sizeof(*VAR_10));
  VAR_10->msg_id =
   FUNC_2(VAR_2);

  if (VAR_7->msg_per_bndl_max > 0) {

   VAR_11 |= VAR_5;
   VAR_10->msg_per_rxbndl =
      VAR_7->msg_per_bndl_max;
  }

  FUNC_5(&VAR_10->flags, &VAR_11,
         sizeof(VAR_10->flags));
  FUNC_7(VAR_8, ((void*)0), (u8 *) VAR_10,
     sizeof(struct htc_setup_comp_ext_msg),
     VAR_0, VAR_4);

 } else {
  struct htc_setup_comp_msg *VAR_12;
  VAR_12 = (struct htc_setup_comp_msg *)VAR_8->buf;
  FUNC_6(VAR_12, 0, sizeof(struct htc_setup_comp_msg));
  VAR_12->msg_id = FUNC_2(VAR_3);
  FUNC_7(VAR_8, ((void*)0), (u8 *) VAR_12,
     sizeof(struct htc_setup_comp_msg),
     VAR_0, VAR_4);
 }


 VAR_8->completion = ((void*)0);
 FUNC_1(VAR_8, 0, 0, 0);
 VAR_9 = FUNC_0(VAR_7, VAR_8);
 FUNC_4(VAR_7, VAR_8);

 return VAR_9;
}
