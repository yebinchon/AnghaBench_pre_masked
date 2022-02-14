
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_device {int dummy; } ;
struct se_cmd {int se_cmd_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,unsigned char) ;
 int FUNC_1 (struct se_device*) ;

__attribute__((used)) static int
FUNC_2(struct se_device *VAR_2, struct se_cmd *VAR_3, unsigned char *VAR_4)
{
 if (VAR_4[1] & 0x10) {

  if (!FUNC_1(VAR_2)) {
   FUNC_0("Got CDB: 0x%02x with DPO bit set, but device"
          " does not advertise support for DPO\n", VAR_4[0]);
   return -VAR_0;
  }
 }
 if (VAR_4[1] & 0x8) {
  if (!FUNC_1(VAR_2)) {
   FUNC_0("Got CDB: 0x%02x with FUA bit set, but device"
          " does not advertise support for FUA write\n",
          VAR_4[0]);
   return -VAR_0;
  }
  VAR_3->se_cmd_flags |= VAR_1;
 }
 return 0;
}
