
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mceusb_dev {int dev; int kevent; int kevent_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int *) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct mceusb_dev *VAR_1, int VAR_2)
{
 FUNC_2(VAR_2, &VAR_1->kevent_flags);

 if (FUNC_3(VAR_0, &VAR_1->kevent_flags)) {
  FUNC_0(VAR_1->dev, "kevent %d dropped pending USB Reset Device",
   VAR_2);
  return;
 }

 if (!FUNC_1(&VAR_1->kevent))
  FUNC_0(VAR_1->dev, "kevent %d already scheduled", VAR_2);
 else
  FUNC_0(VAR_1->dev, "kevent %d scheduled", VAR_2);
}
