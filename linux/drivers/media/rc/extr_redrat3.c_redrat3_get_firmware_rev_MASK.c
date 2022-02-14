
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct redrat3_dev {int dev; int udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,char*) ;
 char* FUNC_2 (scalar_t__,int,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int ,int ,int,int ,int ,char*,scalar_t__,int) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(struct redrat3_dev *VAR_7)
{
 int VAR_8;
 char *VAR_9;

 VAR_9 = FUNC_2(VAR_3 + 1, sizeof(*VAR_9), VAR_0);
 if (!VAR_9)
  return;

 VAR_8 = FUNC_4(VAR_7->udev, FUNC_5(VAR_7->udev, 0),
        VAR_2,
        VAR_6 | VAR_5 | VAR_4,
        0, 0, VAR_9, VAR_3, VAR_1 * 5);

 if (VAR_8 >= 0)
  FUNC_1(VAR_7->dev, "Firmware rev: %s", VAR_9);
 else
  FUNC_0(VAR_7->dev, "Problem fetching firmware ID\n");

 FUNC_3(VAR_9);
}
