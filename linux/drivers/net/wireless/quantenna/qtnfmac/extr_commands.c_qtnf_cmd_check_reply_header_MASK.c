
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef size_t u16 ;
struct TYPE_2__ {int len; } ;
struct qlink_resp {scalar_t__ macid; scalar_t__ vifid; TYPE_1__ mhdr; int cmd_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (char*,scalar_t__,scalar_t__,size_t,size_t,...) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(const struct qlink_resp *VAR_2,
           u16 VAR_3, u8 VAR_4, u8 VAR_5,
           size_t VAR_6)
{
 if (FUNC_2(FUNC_0(VAR_2->cmd_id) != VAR_3)) {
  FUNC_1("VIF%u.%u CMD%x: bad cmd_id in response: 0x%.4X\n",
   VAR_4, VAR_5, VAR_3, FUNC_0(VAR_2->cmd_id));
  return -VAR_0;
 }

 if (FUNC_2(VAR_2->macid != VAR_4)) {
  FUNC_1("VIF%u.%u CMD%x: bad MAC in response: %u\n",
   VAR_4, VAR_5, VAR_3, VAR_2->macid);
  return -VAR_0;
 }

 if (FUNC_2(VAR_2->vifid != VAR_5)) {
  FUNC_1("VIF%u.%u CMD%x: bad VIF in response: %u\n",
   VAR_4, VAR_5, VAR_3, VAR_2->vifid);
  return -VAR_0;
 }

 if (FUNC_2(FUNC_0(VAR_2->mhdr.len) < VAR_6)) {
  FUNC_1("VIF%u.%u CMD%x: bad response size %u < %zu\n",
   VAR_4, VAR_5, VAR_3,
   FUNC_0(VAR_2->mhdr.len), VAR_6);
  return -VAR_1;
 }

 return 0;
}
