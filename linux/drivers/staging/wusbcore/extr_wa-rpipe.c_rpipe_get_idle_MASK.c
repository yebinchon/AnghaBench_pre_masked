
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct wahc {unsigned int rpipes; int rpipe_bm; TYPE_1__* usb_iface; } ;
struct TYPE_4__ {int bmCharacteristics; } ;
struct wa_rpipe {int wa; TYPE_2__ descr; } ;
struct device {int dummy; } ;
typedef int gfp_t ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct wahc*,TYPE_2__*,unsigned int) ;
 int FUNC_1 (struct device*,char*,unsigned int,int) ;
 int FUNC_2 (struct wa_rpipe*) ;
 struct wa_rpipe* FUNC_3 (int,int ) ;
 unsigned int FUNC_4 (struct wahc*,unsigned int) ;
 int FUNC_5 (struct wa_rpipe*) ;
 int FUNC_6 (struct wahc*,unsigned int) ;
 int FUNC_7 (unsigned int,int ) ;
 int FUNC_8 (struct wahc*) ;

__attribute__((used)) static int FUNC_9(struct wa_rpipe **VAR_2, struct wahc *VAR_3, u8 VAR_4,
     gfp_t VAR_5)
{
 int VAR_6;
 unsigned VAR_7;
 struct wa_rpipe *VAR_8;
 struct device *VAR_9 = &VAR_3->usb_iface->dev;

 VAR_8 = FUNC_3(sizeof(*VAR_8), VAR_5);
 if (VAR_8 == ((void*)0))
  return -VAR_0;
 FUNC_5(VAR_8);


 for (VAR_7 = 0; VAR_7 < VAR_3->rpipes; VAR_7++) {
  VAR_7 = FUNC_4(VAR_3, VAR_7);
  if (VAR_7 >= VAR_3->rpipes)
   break;
  VAR_6 = FUNC_0(VAR_3, &VAR_8->descr, VAR_7);
  if (VAR_6 < 0)
   FUNC_1(VAR_9, "Can't get descriptor for rpipe %u: %d\n",
    VAR_7, VAR_6);
  else if ((VAR_8->descr.bmCharacteristics & VAR_4) != 0)
   goto found;
  FUNC_6(VAR_3, VAR_7);
 }
 *VAR_2 = ((void*)0);
 FUNC_2(VAR_8);
 return -VAR_1;

found:
 FUNC_7(VAR_7, VAR_3->rpipe_bm);
 VAR_8->wa = FUNC_8(VAR_3);
 *VAR_2 = VAR_8;
 return 0;
}
