
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xbox_remote {unsigned char* inbuf; int rdev; } ;
struct urb {int actual_length; TYPE_1__* dev; struct xbox_remote* context; } ;
typedef int __le16 ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,unsigned char,unsigned char,unsigned char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct urb *VAR_1)
{
 struct xbox_remote *VAR_2 = VAR_1->context;
 unsigned char *VAR_3 = VAR_2->inbuf;
 if (VAR_1->actual_length != 6 || VAR_1->actual_length != VAR_3[1]) {
  FUNC_0(&VAR_1->dev->dev, "Weird data, len=%d: %*ph\n",
    VAR_1->actual_length, VAR_1->actual_length, VAR_3);
  return;
 }

 FUNC_2(VAR_2->rdev, VAR_0,
     FUNC_1((__le16 *)(VAR_3 + 2)), 0);
}
