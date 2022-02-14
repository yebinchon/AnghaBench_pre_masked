
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct vme_slave_resource {unsigned int number; int mtx; struct vme_bridge* parent; } ;
struct vme_bridge {struct fake_driver* driver_priv; } ;
struct fake_driver {TYPE_1__* slaves; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int enabled; unsigned long long vme_base; unsigned long long size; int aspace; int cycle; int buf_base; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(struct vme_slave_resource *VAR_1, int VAR_2,
  unsigned long long VAR_3, unsigned long long VAR_4,
  dma_addr_t VAR_5, u32 VAR_6, u32 VAR_7)
{
 unsigned int VAR_8, VAR_9 = 0;
 unsigned long long VAR_10;
 struct vme_bridge *VAR_11;
 struct fake_driver *VAR_12;

 VAR_11 = VAR_1->parent;
 VAR_12 = VAR_11->driver_priv;

 VAR_8 = VAR_1->number;

 switch (VAR_6) {
 case 136:
  VAR_9 = 0x10;
  break;
 case 135:
  VAR_9 = 0x1000;
  break;
 case 134:
  VAR_9 = 0x10000;
  break;
 case 133:
  VAR_9 = 0x10000;
  break;
 case 132:
 case 131:
 case 130:
 case 129:
 case 128:
 default:
  FUNC_3("Invalid address space\n");
  return -VAR_0;
 }





 VAR_10 = VAR_3 + VAR_4 - VAR_9;

 if (VAR_3 & (VAR_9 - 1)) {
  FUNC_3("Invalid VME base alignment\n");
  return -VAR_0;
 }
 if (VAR_10 & (VAR_9 - 1)) {
  FUNC_3("Invalid VME bound alignment\n");
  return -VAR_0;
 }

 FUNC_1(&VAR_1->mtx);

 VAR_12->slaves[VAR_8].enabled = VAR_2;
 VAR_12->slaves[VAR_8].vme_base = VAR_3;
 VAR_12->slaves[VAR_8].size = VAR_4;
 VAR_12->slaves[VAR_8].buf_base = FUNC_0(VAR_5);
 VAR_12->slaves[VAR_8].aspace = VAR_6;
 VAR_12->slaves[VAR_8].cycle = VAR_7;

 FUNC_2(&VAR_1->mtx);

 return 0;
}
