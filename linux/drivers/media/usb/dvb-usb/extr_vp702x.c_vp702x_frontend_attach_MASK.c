
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char u8 ;
struct dvb_usb_adapter {int dev; TYPE_1__* fe_adap; } ;
struct TYPE_2__ {int fe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct dvb_usb_adapter*) ;
 scalar_t__ FUNC_3 (int ,int ,int *,int ,char*,int,int) ;
 int FUNC_4 (int ,int ,int,int,int *,int ) ;

__attribute__((used)) static int FUNC_5(struct dvb_usb_adapter *VAR_3)
{
 u8 VAR_4[10] = { 0 };

 FUNC_4(VAR_3->dev, VAR_2, 0, 7, ((void*)0), 0);

 if (FUNC_3(VAR_3->dev, VAR_1, ((void*)0), 0,
       VAR_4, 10, 10))
  return -VAR_0;

 VAR_4[9] = '\0';
 FUNC_0("system string: %s",&VAR_4[1]);

 FUNC_2(VAR_3);

 VAR_3->fe_adap[0].fe = FUNC_1(VAR_3->dev);
 FUNC_4(VAR_3->dev, VAR_2, 1, 7, ((void*)0), 0);

 return 0;
}
