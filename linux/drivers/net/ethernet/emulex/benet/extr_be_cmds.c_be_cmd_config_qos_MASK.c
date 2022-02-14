
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int desc_len; int desc_type; } ;
struct be_nic_res_desc {int flags; TYPE_1__ hdr; void* bw_max; scalar_t__ bw_min; int vf_num; int pf_num; } ;
struct be_adapter {int pf_num; } ;


 scalar_t__ FUNC_0 (struct be_adapter*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct be_adapter*,struct be_nic_res_desc*,int ,int,int,int ) ;
 int FUNC_2 (struct be_adapter*,int,int ) ;
 int FUNC_3 (struct be_nic_res_desc*) ;
 void* FUNC_4 (int) ;
 scalar_t__ FUNC_5 (struct be_adapter*) ;

int FUNC_6(struct be_adapter *VAR_7, u32 VAR_8, u16 VAR_9,
        u8 VAR_10)
{
 struct be_nic_res_desc VAR_11;
 u32 VAR_12;
 u16 VAR_13 = 0;

 if (FUNC_0(VAR_7))
  return FUNC_2(VAR_7, VAR_8 / 10, VAR_10);

 FUNC_3(&VAR_11);
 VAR_11.pf_num = VAR_7->pf_num;
 VAR_11.vf_num = VAR_10;
 VAR_11.bw_min = 0;
 if (FUNC_5(VAR_7)) {
  VAR_11.hdr.desc_type = VAR_1;
  VAR_11.hdr.desc_len = VAR_5;
  VAR_11.flags = (1 << VAR_4) | (1 << VAR_0) |
     (1 << VAR_3);
  VAR_11.bw_max = FUNC_4(VAR_8 / 10);
 } else {
  VAR_13 = 1;
  VAR_11.hdr.desc_type = VAR_2;
  VAR_11.hdr.desc_len = VAR_6;
  VAR_11.flags = (1 << VAR_0) | (1 << VAR_3);
  VAR_12 = VAR_8 ? (VAR_8 * 100) / VAR_9 : 100;
  VAR_11.bw_max = FUNC_4(VAR_12);
 }

 return FUNC_1(VAR_7, &VAR_11,
      VAR_11.hdr.desc_len,
      1, VAR_13, VAR_10);
}
