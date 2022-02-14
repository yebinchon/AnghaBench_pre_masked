
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct zfcp_fsf_req {struct zfcp_fsf_ct_els* data; } ;
struct zfcp_fsf_ct_els {scalar_t__ d_id; scalar_t__ status; struct scatterlist* resp; struct scatterlist* req; } ;
struct scatterlist {int dummy; } ;
struct fc_ns_gid_ft {scalar_t__ fn_resvd; scalar_t__ fn_domain_id_scope; scalar_t__ fn_area_id_scope; scalar_t__ fn_fc4_type; } ;
struct fc_gpn_ft_resp {int fp_flags; } ;
struct fc_ct_hdr {scalar_t__ ct_rev; scalar_t__* ct_in_id; scalar_t__ ct_fs_type; scalar_t__ ct_fs_subtype; scalar_t__ ct_options; scalar_t__ _ct_resvd1; scalar_t__ ct_cmd; scalar_t__ _ct_resvd2; scalar_t__ ct_reason; scalar_t__ ct_explan; scalar_t__ ct_vendor; int ct_mr_size; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;
 int FUNC_4 (int ,int ) ;
 void* FUNC_5 (struct scatterlist*) ;

__attribute__((used)) static u16 FUNC_6(char *VAR_11,
           struct zfcp_fsf_req *VAR_12,
           u16 VAR_13)
{
 struct zfcp_fsf_ct_els *VAR_14 = VAR_12->data;
 struct fc_ct_hdr *VAR_15 = FUNC_5(VAR_14->req);
 struct fc_ns_gid_ft *VAR_16 = (struct fc_ns_gid_ft *)(VAR_15 + 1);
 struct scatterlist *VAR_17 = VAR_14->resp;
 struct fc_ct_hdr *VAR_18;
 struct fc_gpn_ft_resp *VAR_19;
 int VAR_20, VAR_21, VAR_22 = 0;

 if (!(FUNC_3(VAR_11, "fsscth2", 7) == 0
       && VAR_14->d_id == VAR_2
       && VAR_15->ct_rev == VAR_1
       && VAR_15->ct_in_id[0] == 0
       && VAR_15->ct_in_id[1] == 0
       && VAR_15->ct_in_id[2] == 0
       && VAR_15->ct_fs_type == VAR_3
       && VAR_15->ct_fs_subtype == VAR_7
       && VAR_15->ct_options == 0
       && VAR_15->_ct_resvd1 == 0
       && VAR_15->ct_cmd == FUNC_1(VAR_6)

       && VAR_15->_ct_resvd2 == 0
       && VAR_15->ct_reason == 0
       && VAR_15->ct_explan == 0
       && VAR_15->ct_vendor == 0
       && VAR_16->fn_resvd == 0
       && VAR_16->fn_domain_id_scope == 0
       && VAR_16->fn_area_id_scope == 0
       && VAR_16->fn_fc4_type == VAR_8))
  return VAR_13;

 VAR_19 = FUNC_5(VAR_17);


 VAR_18 = (struct fc_ct_hdr *)VAR_19;
 if ((VAR_14->status) ||
     (VAR_18->ct_cmd != FUNC_1(VAR_4)))
  return FUNC_2(VAR_0, VAR_9);

 VAR_20 = (FUNC_0(VAR_15->ct_mr_size) * 4 /
         sizeof(struct fc_gpn_ft_resp))
  + 1 ;





 for (VAR_21 = 1; VAR_21 < VAR_20 && !VAR_22; VAR_21++) {
  if (VAR_21 % (VAR_10 + 1))
   VAR_19++;
  else
   VAR_19 = FUNC_5(++VAR_17);

  VAR_22 = VAR_19->fp_flags & VAR_5;
 }
 VAR_13 = FUNC_4(VAR_13, (u16)(VAR_21 * sizeof(struct fc_gpn_ft_resp)));
 return VAR_13;
}
