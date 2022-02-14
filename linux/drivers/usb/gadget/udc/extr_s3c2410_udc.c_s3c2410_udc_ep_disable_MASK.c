
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct usb_ep {int * name; } ;
struct TYPE_2__ {int * desc; int * name; } ;
struct s3c2410_ep {int halted; int num; int dev; TYPE_1__ ep; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int *) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (int ,struct s3c2410_ep*,int ) ;
 struct s3c2410_ep* FUNC_4 (struct usb_ep*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,int ) ;

__attribute__((used)) static int FUNC_7(struct usb_ep *VAR_4)
{
 struct s3c2410_ep *VAR_5 = FUNC_4(VAR_4);
 unsigned long VAR_6;
 u32 VAR_7;

 if (!VAR_4 || !VAR_5->ep.desc) {
  FUNC_0(VAR_0, "%s not enabled\n",
   VAR_4 ? VAR_5->ep.name : ((void*)0));
  return -VAR_1;
 }

 FUNC_2(VAR_6);

 FUNC_0(VAR_0, "ep_disable: %s\n", VAR_4->name);

 VAR_5->ep.desc = ((void*)0);
 VAR_5->halted = 1;

 FUNC_3(VAR_5->dev, VAR_5, -VAR_2);


 VAR_7 = FUNC_5(VAR_3);
 FUNC_6(VAR_7 & ~(1<<VAR_5->num), VAR_3);

 FUNC_1(VAR_6);

 FUNC_0(VAR_0, "%s disabled\n", VAR_4->name);

 return 0;
}
