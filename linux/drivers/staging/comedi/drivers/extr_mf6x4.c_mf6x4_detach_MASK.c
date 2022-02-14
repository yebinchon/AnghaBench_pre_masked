
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mf6x4_private {scalar_t__ bar2_mem; scalar_t__ bar0_mem; } ;
struct comedi_device {struct mf6x4_private* private; } ;


 int FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_0)
{
 struct mf6x4_private *VAR_1 = VAR_0->private;

 if (VAR_1) {
  if (VAR_1->bar0_mem)
   FUNC_1(VAR_1->bar0_mem);
  if (VAR_1->bar2_mem)
   FUNC_1(VAR_1->bar2_mem);
 }
 FUNC_0(VAR_0);
}
