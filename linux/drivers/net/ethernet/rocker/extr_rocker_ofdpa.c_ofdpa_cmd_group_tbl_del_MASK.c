
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
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rocker_desc_info*,struct rocker_tlv*) ;
 struct rocker_tlv* FUNC_1 (struct rocker_desc_info*,int ) ;
 scalar_t__ FUNC_2 (struct rocker_desc_info*,int ,int ) ;
 scalar_t__ FUNC_3 (struct rocker_desc_info*,int ,int ) ;

__attribute__((used)) static int FUNC_4(const struct rocker_port *VAR_4,
       struct rocker_desc_info *VAR_5,
       void *VAR_6)
{
 const struct ofdpa_group_tbl_entry *VAR_7 = VAR_6;
 struct rocker_tlv *VAR_8;

 if (FUNC_2(VAR_5, VAR_2, VAR_7->cmd))
  return -VAR_0;
 VAR_8 = FUNC_1(VAR_5, VAR_1);
 if (!VAR_8)
  return -VAR_0;
 if (FUNC_3(VAR_5, VAR_3,
          VAR_7->group_id))
  return -VAR_0;
 FUNC_0(VAR_5, VAR_8);

 return 0;
}
