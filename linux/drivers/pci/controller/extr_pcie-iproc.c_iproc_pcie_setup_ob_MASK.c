
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct iproc_pcie_ob_map {int nr_sizes; scalar_t__* window_sizes; } ;
struct iproc_pcie_ob {scalar_t__ axi_offset; int nr_windows; } ;
struct iproc_pcie {struct iproc_pcie_ob_map* ob_map; struct device* dev; struct iproc_pcie_ob ob; } ;
struct device {int dummy; } ;
typedef scalar_t__ resource_size_t ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct device*,char*,...) ;
 scalar_t__ FUNC_3 (struct iproc_pcie*,int) ;
 int FUNC_4 (struct iproc_pcie*,int,int,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct iproc_pcie *VAR_2, u64 VAR_3,
          u64 VAR_4, resource_size_t VAR_5)
{
 struct iproc_pcie_ob *VAR_6 = &VAR_2->ob;
 struct device *VAR_7 = VAR_2->dev;
 int VAR_8 = -VAR_0, VAR_9, VAR_10;

 if (VAR_3 < VAR_6->axi_offset) {
  FUNC_2(VAR_7, "axi address %pap less than offset %pap\n",
   &VAR_3, &VAR_6->axi_offset);
  return -VAR_0;
 }





 VAR_3 -= VAR_6->axi_offset;


 for (VAR_9 = VAR_6->nr_windows - 1; VAR_9 >= 0; VAR_9--) {
  const struct iproc_pcie_ob_map *VAR_11 =
   &VAR_2->ob_map[VAR_9];





  if (FUNC_3(VAR_2, VAR_9))
   continue;






  for (VAR_10 = VAR_11->nr_sizes - 1; VAR_10 >= 0;
       VAR_10--) {
   resource_size_t VAR_12 =
    VAR_11->window_sizes[VAR_10] * VAR_1;







   if (VAR_5 < VAR_12) {
    if (VAR_10 > 0 || VAR_9 > 0)
     continue;






    VAR_3 = FUNC_0(VAR_3, VAR_12);
    VAR_4 = FUNC_0(VAR_4, VAR_12);
    VAR_5 = VAR_12;
   }

   if (!FUNC_1(VAR_3, VAR_12) ||
       !FUNC_1(VAR_4, VAR_12)) {
    FUNC_2(VAR_7,
     "axi %pap or pci %pap not aligned\n",
     &VAR_3, &VAR_4);
    return -VAR_0;
   }





   VAR_8 = FUNC_4(VAR_2, VAR_9, VAR_10,
        VAR_3, VAR_4);
   if (VAR_8)
    goto err_ob;

   VAR_5 -= VAR_12;
   if (VAR_5 == 0)
    return 0;






   VAR_3 += VAR_12;
   VAR_4 += VAR_12;
   break;
  }
 }

err_ob:
 FUNC_2(VAR_7, "unable to configure outbound mapping\n");
 FUNC_2(VAR_7,
  "axi %pap, axi offset %pap, pci %pap, res size %pap\n",
  &VAR_3, &VAR_6->axi_offset, &VAR_4, &VAR_5);

 return VAR_8;
}
