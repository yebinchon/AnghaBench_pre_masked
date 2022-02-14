
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wwn_t ;
typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct fchs_s {int dummy; } ;
struct fcgs_rsnn_nn_req_s {int snn; scalar_t__ snn_len; int node_name; } ;
struct ct_hdr_s {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ct_hdr_s*,int ,int ) ;
 int FUNC_2 (struct fchs_s*,int ,int ,int ) ;
 int FUNC_3 (struct fcgs_rsnn_nn_req_s*,int ,int) ;
 int FUNC_4 (int ,scalar_t__*,int) ;
 scalar_t__ FUNC_5 (int ) ;

u16
FUNC_6(struct fchs_s *VAR_2, void *VAR_3, u32 VAR_4,
   wwn_t VAR_5, u8 *VAR_6)
{
 struct ct_hdr_s *VAR_7 = (struct ct_hdr_s *) VAR_3;
 struct fcgs_rsnn_nn_req_s *VAR_8 =
  (struct fcgs_rsnn_nn_req_s *) (VAR_7 + 1);
 u32 VAR_9 = FUNC_0(VAR_0);

 FUNC_2(VAR_2, VAR_9, VAR_4, 0);
 FUNC_1(VAR_7, VAR_4, VAR_1);

 FUNC_3(VAR_8, 0, sizeof(struct fcgs_rsnn_nn_req_s));

 VAR_8->node_name = VAR_5;
 FUNC_4(VAR_8->snn, VAR_6, sizeof(VAR_8->snn));
 VAR_8->snn_len = (u8) FUNC_5(VAR_8->snn);

 return sizeof(struct fcgs_rsnn_nn_req_s) + sizeof(struct ct_hdr_s);
}
