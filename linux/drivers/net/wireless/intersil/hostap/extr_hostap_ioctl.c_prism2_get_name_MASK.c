
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;


 int FUNC_0 (struct net_device*,int*) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0,
      struct iw_request_info *VAR_1,
      char *VAR_2, char *VAR_3)
{
 u8 VAR_4[10];
 int VAR_5, VAR_6, VAR_7 = 0;

 VAR_5 = FUNC_0(VAR_0, VAR_4);

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  if (VAR_4[VAR_6] == 0x0b || VAR_4[VAR_6] == 0x16) {
   VAR_7 = 1;
   break;
  }
 }

 FUNC_1(VAR_2, VAR_7 ? "IEEE 802.11b" : "IEEE 802.11-DS");

 return 0;
}
