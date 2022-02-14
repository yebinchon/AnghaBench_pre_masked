
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rockchip_pcie {int mem_size; int io_size; scalar_t__ mem_bus_addr; scalar_t__ msg_bus_addr; scalar_t__ io_bus_addr; struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct rockchip_pcie*,int ) ;
 int FUNC_2 (struct rockchip_pcie*,int,int,int,int ) ;
 int FUNC_3 (struct rockchip_pcie*,int,int ,int,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_4(struct rockchip_pcie *VAR_4)
{
 struct device *VAR_5 = VAR_4->dev;
 int VAR_6;
 int VAR_7;
 int VAR_8;

 FUNC_1(VAR_4,
       VAR_3);

 for (VAR_8 = 0; VAR_8 < (VAR_4->mem_size >> 20); VAR_8++) {
  VAR_7 = FUNC_3(VAR_4, VAR_8 + 1,
      VAR_1,
      20 - 1,
      VAR_4->mem_bus_addr +
      (VAR_8 << 20),
      0);
  if (VAR_7) {
   FUNC_0(VAR_5, "program RC mem outbound ATU failed\n");
   return VAR_7;
  }
 }

 VAR_7 = FUNC_2(VAR_4, 2, 32 - 1, 0x0, 0);
 if (VAR_7) {
  FUNC_0(VAR_5, "program RC mem inbound ATU failed\n");
  return VAR_7;
 }

 VAR_6 = VAR_4->mem_size >> 20;
 for (VAR_8 = 0; VAR_8 < (VAR_4->io_size >> 20); VAR_8++) {
  VAR_7 = FUNC_3(VAR_4,
      VAR_8 + 1 + VAR_6,
      VAR_0,
      20 - 1,
      VAR_4->io_bus_addr +
      (VAR_8 << 20),
      0);
  if (VAR_7) {
   FUNC_0(VAR_5, "program RC io outbound ATU failed\n");
   return VAR_7;
  }
 }


 FUNC_3(VAR_4, VAR_8 + 1 + VAR_6,
      VAR_2,
      20 - 1, 0, 0);

 VAR_4->msg_bus_addr = VAR_4->mem_bus_addr +
     ((VAR_8 + VAR_6) << 20);
 return VAR_7;
}
