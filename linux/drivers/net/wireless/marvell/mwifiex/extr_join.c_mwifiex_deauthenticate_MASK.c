
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mwifiex_private {int bss_mode; int netdev; int media_connected; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int FUNC_0 (int ,int ,int *,int ,int,int ) ;
 int FUNC_1 (struct mwifiex_private*,int *) ;
 int FUNC_2 (struct mwifiex_private*,int ,int ,int ,int *,int) ;

int FUNC_3(struct mwifiex_private *VAR_4, u8 *VAR_5)
{
 int VAR_6 = 0;

 if (!VAR_4->media_connected)
  return 0;

 switch (VAR_4->bss_mode) {
 case 128:
 case 129:
  VAR_6 = FUNC_1(VAR_4, VAR_5);
  if (VAR_6)
   FUNC_0(VAR_4->netdev, 0, ((void*)0), 0,
           1, VAR_0);
  break;
 case 131:
  return FUNC_2(VAR_4, VAR_2,
     VAR_1, 0, ((void*)0), 1);
 case 130:
  return FUNC_2(VAR_4, VAR_3,
     VAR_1, 0, ((void*)0), 1);
 default:
  break;
 }

 return VAR_6;
}
