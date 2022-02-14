
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rocker_tlv {int dummy; } ;
struct rocker_port {int dummy; } ;
struct rocker_desc_info {int dummy; } ;
struct ofdpa_group_tbl_entry {int group_id; int cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;





 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct rocker_desc_info*,struct ofdpa_group_tbl_entry*) ;
 int FUNC_2 (struct rocker_desc_info*,struct ofdpa_group_tbl_entry*) ;
 int FUNC_3 (struct rocker_desc_info*,struct ofdpa_group_tbl_entry*) ;
 int FUNC_4 (struct rocker_desc_info*,struct ofdpa_group_tbl_entry*) ;
 int FUNC_5 (struct rocker_desc_info*,struct rocker_tlv*) ;
 struct rocker_tlv* FUNC_6 (struct rocker_desc_info*,int ) ;
 scalar_t__ FUNC_7 (struct rocker_desc_info*,int ,int ) ;
 scalar_t__ FUNC_8 (struct rocker_desc_info*,int ,int ) ;

__attribute__((used)) static int FUNC_9(const struct rocker_port *VAR_5,
       struct rocker_desc_info *VAR_6,
       void *VAR_7)
{
 struct ofdpa_group_tbl_entry *VAR_8 = VAR_7;
 struct rocker_tlv *VAR_9;
 int VAR_10 = 0;

 if (FUNC_7(VAR_6, VAR_3, VAR_8->cmd))
  return -VAR_0;
 VAR_9 = FUNC_6(VAR_6, VAR_2);
 if (!VAR_9)
  return -VAR_0;

 if (FUNC_8(VAR_6, VAR_4,
          VAR_8->group_id))
  return -VAR_0;

 switch (FUNC_0(VAR_8->group_id)) {
 case 131:
  VAR_10 = FUNC_2(VAR_6, VAR_8);
  break;
 case 129:
  VAR_10 = FUNC_3(VAR_6, VAR_8);
  break;
 case 132:
 case 130:
  VAR_10 = FUNC_1(VAR_6, VAR_8);
  break;
 case 128:
  VAR_10 = FUNC_4(VAR_6, VAR_8);
  break;
 default:
  VAR_10 = -VAR_1;
  break;
 }

 if (VAR_10)
  return VAR_10;

 FUNC_5(VAR_6, VAR_9);

 return 0;
}
