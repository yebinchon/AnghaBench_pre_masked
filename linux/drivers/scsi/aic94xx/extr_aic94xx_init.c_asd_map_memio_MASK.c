
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asd_ha_struct {int pcidev; struct asd_ha_addrspace* io_handle; scalar_t__ iospace; } ;
struct asd_ha_addrspace {int addr; int len; int start; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int,int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int) ;

__attribute__((used)) static int FUNC_9(struct asd_ha_struct *VAR_3)
{
 int VAR_4, VAR_5;
 struct asd_ha_addrspace *VAR_6;

 VAR_3->iospace = 0;
 for (VAR_5 = 0; VAR_5 < 3; VAR_5 += 2) {
  VAR_6 = &VAR_3->io_handle[VAR_5==0?0:1];
  VAR_6->start = FUNC_8(VAR_3->pcidev, VAR_5);
  VAR_6->len = FUNC_7(VAR_3->pcidev, VAR_5);
  VAR_6->flags = FUNC_6(VAR_3->pcidev, VAR_5);
  VAR_4 = -VAR_1;
  if (!VAR_6->start || !VAR_6->len) {
   FUNC_0("MBAR%d start or length for %s is 0.\n",
       VAR_5==0?0:1, FUNC_3(VAR_3->pcidev));
   goto Err;
  }
  VAR_4 = FUNC_5(VAR_3->pcidev, VAR_5, VAR_0);
  if (VAR_4) {
   FUNC_0("couldn't reserve memory region for %s\n",
       FUNC_3(VAR_3->pcidev));
   goto Err;
  }
  VAR_6->addr = FUNC_1(VAR_6->start, VAR_6->len);
  if (!VAR_6->addr) {
   FUNC_0("couldn't map MBAR%d of %s\n", VAR_5==0?0:1,
       FUNC_3(VAR_3->pcidev));
   VAR_4 = -VAR_2;
   goto Err_unreq;
  }
 }

 return 0;
Err_unreq:
 FUNC_4(VAR_3->pcidev, VAR_5);
Err:
 if (VAR_5 > 0) {
  VAR_6 = &VAR_3->io_handle[0];
  FUNC_2(VAR_6->addr);
  FUNC_4(VAR_3->pcidev, 0);
 }
 return VAR_4;
}
