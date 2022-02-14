
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usbnet {int net; } ;
struct sierra_net_data {int ifnum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,char const*,int) ;
 struct sierra_net_data* FUNC_1 (struct usbnet*) ;
 int FUNC_2 (struct usbnet*,int ,int,int ,int ,int *,int) ;

__attribute__((used)) static int FUNC_3(struct usbnet *VAR_5,
  u8 *VAR_6, int VAR_7, const char * VAR_8)
{
 struct sierra_net_data *VAR_9 = FUNC_1(VAR_5);
 int VAR_10;

 VAR_10 = FUNC_2(VAR_5, VAR_1,
      VAR_2|VAR_4|VAR_3,
      0, VAR_9->ifnum, VAR_6, VAR_7);

 if (VAR_10 != VAR_7 && VAR_10 != -VAR_0)
  FUNC_0(VAR_5->net, "Submit %s failed %d\n", VAR_8, VAR_10);

 return VAR_10;
}
