
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iscsi_conn {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iscsi_conn*,int ,int ) ;
 int FUNC_1 (char*,int,int) ;

__attribute__((used)) static int FUNC_2(
 struct iscsi_conn *VAR_2,
 u8 VAR_3,
 u8 VAR_4)
{
 if ((VAR_3 != 0x00) || (VAR_4 != 0x00)) {
  FUNC_1("Unsupported iSCSI IETF Pre-RFC Revision,"
   " version Min/Max 0x%02x/0x%02x, rejecting login.\n",
   VAR_4, VAR_3);
  FUNC_0(VAR_2, VAR_1,
    VAR_0);
  return -1;
 }

 return 0;
}
