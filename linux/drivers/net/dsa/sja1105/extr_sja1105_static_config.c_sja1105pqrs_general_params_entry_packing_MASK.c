
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sja1105_general_params_entry {int replay_port; int egrmirrdei; int egrmirrpcp; int egrmirrvid; int queue_ts; int tpid2; int ignore2stf; int tpid; int vlmask; int vlmarker; int mirr_port; int host_port; int casc_port; int send_meta0; int send_meta1; int incl_srcpt0; int incl_srcpt1; int mac_flt0; int mac_flt1; int mac_fltres0; int mac_fltres1; int hostprio; int switchid; int mirr_ptacu; int vllupformat; } ;
typedef enum packing_op { ____Placeholder_packing_op } packing_op ;


 size_t VAR_0 ;
 int FUNC_0 (void*,int *,int,int,size_t const,int) ;

__attribute__((used)) static size_t
FUNC_1(void *VAR_1, void *VAR_2,
      enum packing_op VAR_3)
{
 const size_t VAR_4 = VAR_0;
 struct sja1105_general_params_entry *VAR_5 = VAR_2;

 FUNC_0(VAR_1, &VAR_5->vllupformat, 351, 351, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->mirr_ptacu, 350, 350, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->switchid, 349, 347, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->hostprio, 346, 344, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->mac_fltres1, 343, 296, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->mac_fltres0, 295, 248, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->mac_flt1, 247, 200, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->mac_flt0, 199, 152, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->incl_srcpt1, 151, 151, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->incl_srcpt0, 150, 150, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->send_meta1, 149, 149, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->send_meta0, 148, 148, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->casc_port, 147, 145, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->host_port, 144, 142, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->mirr_port, 141, 139, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->vlmarker, 138, 107, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->vlmask, 106, 75, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->tpid, 74, 59, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->ignore2stf, 58, 58, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->tpid2, 57, 42, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->queue_ts, 41, 41, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->egrmirrvid, 40, 29, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->egrmirrpcp, 28, 26, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->egrmirrdei, 25, 25, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->replay_port, 24, 22, VAR_4, VAR_3);
 return VAR_4;
}
