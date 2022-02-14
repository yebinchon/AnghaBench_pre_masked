
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct asd_ha_struct {int pcidev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct asd_ha_struct*) ;
 int FUNC_1 (struct asd_ha_struct*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_5(struct asd_ha_struct *VAR_4)
{
 int VAR_5;
 u16 VAR_6;

 VAR_5 = FUNC_4(VAR_4->pcidev, VAR_1, &VAR_6);
 if (VAR_5) {
  FUNC_2("couldn't read command register of %s\n",
      FUNC_3(VAR_4->pcidev));
  goto Err;
 }

 VAR_5 = -VAR_0;
 if (VAR_6 & VAR_3) {
  if ((VAR_5 = FUNC_1(VAR_4)))
   goto Err;
 } else if (VAR_6 & VAR_2) {
  if ((VAR_5 = FUNC_0(VAR_4)))
   goto Err;
  FUNC_2("%s ioport mapped -- upgrade your hardware\n",
      FUNC_3(VAR_4->pcidev));
 } else {
  FUNC_2("no proper device access to %s\n",
      FUNC_3(VAR_4->pcidev));
  goto Err;
 }

 return 0;
Err:
 return VAR_5;
}
