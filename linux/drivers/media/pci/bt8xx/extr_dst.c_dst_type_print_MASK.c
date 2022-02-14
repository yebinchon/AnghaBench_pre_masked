
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dst_state {int dummy; } ;






 int VAR_0 ;
 int FUNC_0 (int,char*,...) ;

__attribute__((used)) static int FUNC_1(struct dst_state *VAR_1, u8 VAR_2)
{
 char *VAR_3;
 switch (VAR_2) {
 case 129:
  VAR_3 = "satellite";
  break;

 case 128:
  VAR_3 = "terrestrial";
  break;

 case 130:
  VAR_3 = "cable";
  break;

 case 131:
  VAR_3 = "atsc";
  break;

 default:
  FUNC_0(2, "invalid dst type %d\n", VAR_2);
  return -VAR_0;
 }
 FUNC_0(2, "DST type: %s\n", VAR_3);

 return 0;
}
