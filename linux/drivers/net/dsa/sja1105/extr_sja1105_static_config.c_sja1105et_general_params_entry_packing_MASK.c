
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sja1105_general_params_entry {int tpid2; int ignore2stf; int tpid; int vlmask; int vlmarker; int mirr_port; int host_port; int casc_port; int send_meta0; int send_meta1; int incl_srcpt0; int incl_srcpt1; int mac_flt0; int mac_flt1; int mac_fltres0; int mac_fltres1; int hostprio; int switchid; int mirr_ptacu; int vllupformat; } ;
typedef enum packing_op { ____Placeholder_packing_op } packing_op ;


 size_t VAR_0 ;
 int FUNC_0 (void*,int *,int,int,size_t const,int) ;

__attribute__((used)) static size_t FUNC_1(void *VAR_1, void *VAR_2,
           enum packing_op VAR_3)
{
 const size_t VAR_4 = VAR_0;
 struct sja1105_general_params_entry *VAR_5 = VAR_2;

 FUNC_0(VAR_1, &VAR_5->vllupformat, 319, 319, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->mirr_ptacu, 318, 318, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->switchid, 317, 315, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->hostprio, 314, 312, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->mac_fltres1, 311, 264, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->mac_fltres0, 263, 216, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->mac_flt1, 215, 168, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->mac_flt0, 167, 120, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->incl_srcpt1, 119, 119, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->incl_srcpt0, 118, 118, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->send_meta1, 117, 117, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->send_meta0, 116, 116, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->casc_port, 115, 113, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->host_port, 112, 110, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->mirr_port, 109, 107, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->vlmarker, 106, 75, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->vlmask, 74, 43, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->tpid, 42, 27, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->ignore2stf, 26, 26, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->tpid2, 25, 10, VAR_4, VAR_3);
 return VAR_4;
}
