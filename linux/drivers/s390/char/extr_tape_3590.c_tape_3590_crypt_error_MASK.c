
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct tape_request {int dummy; } ;
struct tape_device {TYPE_1__* cdev; } ;
struct TYPE_4__ {char* data; } ;
struct tape_3590_sense {TYPE_2__ fmt; } ;
struct irb {scalar_t__ ecw; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct tape_device*,struct tape_request*,struct irb*,int ) ;

__attribute__((used)) static int FUNC_2(struct tape_device *VAR_3,
     struct tape_request *VAR_4, struct irb *VAR_5)
{
 u8 VAR_6;
 u16 VAR_7;
 char *VAR_8;

 VAR_8 = ((struct tape_3590_sense *) VAR_5->ecw)->fmt.data;
 VAR_6 = VAR_8[0];
 VAR_7 = *((u16*) &VAR_8[10]);
 if ((VAR_6 == 0) && (VAR_7 == 0xee31))

  return FUNC_1(VAR_3, VAR_4, VAR_5, -VAR_0);
 if ((VAR_6 == 1) || (VAR_6 == 2))

  return FUNC_1(VAR_3, VAR_4, VAR_5, -VAR_2);

 FUNC_0 (&VAR_3->cdev->dev, "The tape unit failed to obtain the "
  "encryption key from EKM\n");

 return FUNC_1(VAR_3, VAR_4, VAR_5, -VAR_1);
}
