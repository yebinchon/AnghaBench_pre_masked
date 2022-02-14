
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct musb {unsigned long a_wait_bcon; int lock; int mregs; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct musb* FUNC_0 (struct device*) ;
 int FUNC_1 (struct musb*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (char*,char*,char*,unsigned long) ;

__attribute__((used)) static ssize_t
FUNC_8(struct device *VAR_3, struct device_attribute *VAR_4, char *VAR_5)
{
 struct musb *VAR_6 = FUNC_0(VAR_3);
 unsigned long VAR_7;
 unsigned long VAR_8;
 int VAR_9;
 u8 VAR_10;

 FUNC_3(VAR_3);
 FUNC_5(&VAR_6->lock, VAR_7);
 VAR_8 = VAR_6->a_wait_bcon;
 VAR_9 = FUNC_1(VAR_6);
 if (VAR_9 < 0) {

  VAR_10 = FUNC_2(VAR_6->mregs, VAR_0);
  if ((VAR_10 & VAR_1)
    == (3 << VAR_2))
   VAR_9 = 1;
  else
   VAR_9 = 0;
 }
 FUNC_6(&VAR_6->lock, VAR_7);
 FUNC_4(VAR_3);

 return FUNC_7(VAR_5, "Vbus %s, timeout %lu msec\n",
   VAR_9 ? "on" : "off", VAR_8);
}
