
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int desc_len; int desc_type; } ;
struct be_port_res_desc {int flags; int nv_flags; scalar_t__ nv_port; int link_num; TYPE_1__ hdr; } ;
struct be_adapter {int hba_port_num; } ;
typedef int port_desc ;
typedef scalar_t__ __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct be_adapter*,struct be_port_res_desc*,int ,int,int,int ) ;
 int FUNC_1 (struct be_port_res_desc*,int ,int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

int FUNC_3(struct be_adapter *VAR_8, __be16 VAR_9)
{
 struct be_port_res_desc VAR_10;

 FUNC_1(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.hdr.desc_type = VAR_4;
 VAR_10.hdr.desc_len = VAR_6;
 VAR_10.flags = (1 << VAR_0) | (1 << VAR_1);
 VAR_10.link_num = VAR_8->hba_port_num;
 if (VAR_9) {
  VAR_10.nv_flags = VAR_3 | (1 << VAR_7) |
     (1 << VAR_5);
  VAR_10.nv_port = FUNC_2(VAR_9);
 } else {
  VAR_10.nv_flags = VAR_2;
  VAR_10.nv_port = 0;
 }

 return FUNC_0(VAR_8, &VAR_10,
      VAR_6, 1, 1, 0);
}
