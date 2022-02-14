
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int name; } ;
struct ap_data {scalar_t__ num_sta; } ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int ) ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct net_device*,int,char*,int,int *,int ) ;

void FUNC_5(struct net_device *VAR_5, struct ap_data *VAR_6,
       int VAR_7)
{
 u8 VAR_8[VAR_1];
 __le16 VAR_9;
 int VAR_10;

 FUNC_0(VAR_0, "%s: Deauthenticate all stations\n", VAR_5->name);
 FUNC_2(VAR_8);

 VAR_9 = FUNC_1(VAR_4);





 for (VAR_10 = 0; VAR_10 < 5; VAR_10++) {
  FUNC_4(VAR_5, VAR_2 |
     VAR_3,
     (char *) &VAR_9, 2, VAR_8, 0);

  if (!VAR_7 || VAR_6->num_sta <= 0)
   return;

  FUNC_3(50);
 }
}
