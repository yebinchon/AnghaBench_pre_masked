
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct altera_pcie {scalar_t__ root_bus_nr; TYPE_2__* pcie_data; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* rp_read_cfg ) (struct altera_pcie*,int,int,int*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct altera_pcie*,int,int,int*) ;
 int FUNC_1 (struct altera_pcie*,scalar_t__,unsigned int,int,scalar_t__,int*) ;

__attribute__((used)) static int FUNC_2(struct altera_pcie *VAR_2, u8 VAR_3,
     unsigned int VAR_4, int VAR_5, int VAR_6,
     u32 *VAR_7)
{
 int VAR_8;
 u32 VAR_9;
 u8 VAR_10;

 if (VAR_3 == VAR_2->root_bus_nr && VAR_2->pcie_data->ops->rp_read_cfg)
  return VAR_2->pcie_data->ops->rp_read_cfg(VAR_2, VAR_5,
        VAR_6, VAR_7);

 switch (VAR_6) {
 case 1:
  VAR_10 = 1 << (VAR_5 & 3);
  break;
 case 2:
  VAR_10 = 3 << (VAR_5 & 3);
  break;
 default:
  VAR_10 = 0xf;
  break;
 }

 VAR_8 = FUNC_1(VAR_2, VAR_3, VAR_4,
     (VAR_5 & ~VAR_0), VAR_10, &VAR_9);
 if (VAR_8 != VAR_1)
  return VAR_8;

 switch (VAR_6) {
 case 1:
  *VAR_7 = (VAR_9 >> (8 * (VAR_5 & 0x3))) & 0xff;
  break;
 case 2:
  *VAR_7 = (VAR_9 >> (8 * (VAR_5 & 0x2))) & 0xffff;
  break;
 default:
  *VAR_7 = VAR_9;
  break;
 }

 return VAR_1;
}
