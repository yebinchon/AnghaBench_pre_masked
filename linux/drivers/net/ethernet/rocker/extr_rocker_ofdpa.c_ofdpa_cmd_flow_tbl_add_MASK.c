
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rocker_tlv {int dummy; } ;
struct rocker_port {int dummy; } ;
struct rocker_desc_info {int dummy; } ;
struct TYPE_2__ {int tbl_id; int priority; } ;
struct ofdpa_flow_tbl_entry {int cmd; TYPE_1__ key; int cookie; } ;


 int VAR_0 ;
 int VAR_1 ;






 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct rocker_desc_info*,struct ofdpa_flow_tbl_entry const*) ;
 int FUNC_1 (struct rocker_desc_info*,struct ofdpa_flow_tbl_entry const*) ;
 int FUNC_2 (struct rocker_desc_info*,struct ofdpa_flow_tbl_entry const*) ;
 int FUNC_3 (struct rocker_desc_info*,struct ofdpa_flow_tbl_entry const*) ;
 int FUNC_4 (struct rocker_desc_info*,struct ofdpa_flow_tbl_entry const*) ;
 int FUNC_5 (struct rocker_desc_info*,struct ofdpa_flow_tbl_entry const*) ;
 int FUNC_6 (struct rocker_desc_info*,struct rocker_tlv*) ;
 struct rocker_tlv* FUNC_7 (struct rocker_desc_info*,int ) ;
 scalar_t__ FUNC_8 (struct rocker_desc_info*,int ,int) ;
 scalar_t__ FUNC_9 (struct rocker_desc_info*,int ,int ) ;
 scalar_t__ FUNC_10 (struct rocker_desc_info*,int ,int ) ;

__attribute__((used)) static int FUNC_11(const struct rocker_port *VAR_8,
      struct rocker_desc_info *VAR_9,
      void *VAR_10)
{
 const struct ofdpa_flow_tbl_entry *VAR_11 = VAR_10;
 struct rocker_tlv *VAR_12;
 int VAR_13 = 0;

 if (FUNC_8(VAR_9, VAR_3, VAR_11->cmd))
  return -VAR_0;
 VAR_12 = FUNC_7(VAR_9, VAR_2);
 if (!VAR_12)
  return -VAR_0;
 if (FUNC_8(VAR_9, VAR_7,
          VAR_11->key.tbl_id))
  return -VAR_0;
 if (FUNC_9(VAR_9, VAR_6,
          VAR_11->key.priority))
  return -VAR_0;
 if (FUNC_9(VAR_9, VAR_5, 0))
  return -VAR_0;
 if (FUNC_10(VAR_9, VAR_4,
          VAR_11->cookie))
  return -VAR_0;

 switch (VAR_11->key.tbl_id) {
 case 131:
  VAR_13 = FUNC_2(VAR_9, VAR_11);
  break;
 case 128:
  VAR_13 = FUNC_5(VAR_9, VAR_11);
  break;
 case 130:
  VAR_13 = FUNC_3(VAR_9, VAR_11);
  break;
 case 129:
  VAR_13 = FUNC_4(VAR_9, VAR_11);
  break;
 case 132:
  VAR_13 = FUNC_1(VAR_9, VAR_11);
  break;
 case 133:
  VAR_13 = FUNC_0(VAR_9, VAR_11);
  break;
 default:
  VAR_13 = -VAR_1;
  break;
 }

 if (VAR_13)
  return VAR_13;

 FUNC_6(VAR_9, VAR_12);

 return 0;
}
