
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ssb_pcicore {int setup_done; struct ssb_device* dev; } ;
struct TYPE_2__ {scalar_t__ coreid; int revision; } ;
struct ssb_device {int core_index; TYPE_1__ id; struct ssb_bus* bus; } ;
struct ssb_bus {scalar_t__ bustype; int host_pci; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (struct ssb_pcicore*) ;
 int FUNC_5 (struct ssb_pcicore*) ;
 int FUNC_6 (struct ssb_device*,int ) ;
 int FUNC_7 (struct ssb_device*,int ,int) ;

int FUNC_8(struct ssb_pcicore *VAR_7,
       struct ssb_device *VAR_8)
{
 struct ssb_device *VAR_9 = VAR_7->dev;
 struct ssb_bus *VAR_10;
 int VAR_11 = 0;
 u32 VAR_12;

 if (VAR_8->bus->bustype != VAR_0) {



  goto out;
 }

 if (!VAR_9)
  goto out;
 VAR_10 = VAR_9->bus;

 FUNC_1(VAR_9->id.coreid != VAR_1);


 if ((VAR_9->id.revision >= 6) || (VAR_9->id.coreid == VAR_2)) {
  u32 VAR_13;


  VAR_13 = (1 << VAR_8->core_index);

  FUNC_0(VAR_10->bustype != VAR_0);
  VAR_11 = FUNC_2(VAR_10->host_pci, VAR_4, &VAR_12);
  if (VAR_11)
   goto out;
  VAR_12 |= VAR_13 << 8;
  VAR_11 = FUNC_3(VAR_10->host_pci, VAR_4, VAR_12);
  if (VAR_11)
   goto out;
 } else {
  u32 VAR_14;

  VAR_14 = FUNC_6(VAR_9, VAR_3);
  VAR_12 = FUNC_6(VAR_8, VAR_5);
  VAR_12 &= VAR_6;
  VAR_14 |= (1 << VAR_12);
  FUNC_7(VAR_9, VAR_3, VAR_14);
 }


 if (VAR_7->setup_done)
  goto out;
 if (VAR_9->id.coreid == VAR_1) {
  FUNC_4(VAR_7);
 } else {
  FUNC_0(VAR_9->id.coreid != VAR_2);
  FUNC_5(VAR_7);
 }
 VAR_7->setup_done = 1;
out:
 return VAR_11;
}
