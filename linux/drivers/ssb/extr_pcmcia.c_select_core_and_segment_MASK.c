
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct ssb_device {struct ssb_bus* bus; } ;
struct ssb_bus {int mapped_pcmcia_seg; struct ssb_device* mapped_device; } ;


 int FUNC_0 (struct ssb_bus*,struct ssb_device*) ;
 int FUNC_1 (struct ssb_bus*,int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct ssb_device *VAR_0,
       u16 *VAR_1)
{
 struct ssb_bus *VAR_2 = VAR_0->bus;
 int VAR_3;
 u8 VAR_4;

 if (*VAR_1 >= 0x800) {
  *VAR_1 -= 0x800;
  VAR_4 = 1;
 } else
  VAR_4 = 0;

 if (FUNC_2(VAR_0 != VAR_2->mapped_device)) {
  VAR_3 = FUNC_0(VAR_2, VAR_0);
  if (FUNC_2(VAR_3))
   return VAR_3;
 }
 if (FUNC_2(VAR_4 != VAR_2->mapped_pcmcia_seg)) {
  VAR_3 = FUNC_1(VAR_2, VAR_4);
  if (FUNC_2(VAR_3))
   return VAR_3;
 }

 return 0;
}
