
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct nvdimm_bus_descriptor {int (* ndctl ) (struct nvdimm_bus_descriptor*,int *,int ,struct nd_cmd_clear_error*,int,int*) ;} ;
struct nvdimm_bus {struct nvdimm_bus_descriptor* nd_desc; } ;
struct nd_cmd_clear_error {unsigned int address; unsigned int length; unsigned int clear_err_unit; long cleared; } ;
struct nd_cmd_ars_cap {unsigned int address; unsigned int length; unsigned int clear_err_unit; long cleared; } ;
struct device {int dummy; } ;
typedef unsigned int phys_addr_t ;
typedef int clear_err ;
typedef int ars_cap ;


 long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 () ;
 int FUNC_3 (struct nd_cmd_clear_error*,int ,int) ;
 int FUNC_4 (struct nvdimm_bus*,unsigned int,long) ;
 int FUNC_5 (struct nvdimm_bus_descriptor*,int *,int ,struct nd_cmd_clear_error*,int,int*) ;
 int FUNC_6 (struct nvdimm_bus_descriptor*,int *,int ,struct nd_cmd_clear_error*,int,int*) ;
 struct nvdimm_bus* FUNC_7 (struct device*) ;

long FUNC_8(struct device *VAR_3, phys_addr_t VAR_4,
  unsigned int VAR_5)
{
 struct nvdimm_bus *VAR_6 = FUNC_7(VAR_3);
 struct nvdimm_bus_descriptor *VAR_7;
 struct nd_cmd_clear_error VAR_8;
 struct nd_cmd_ars_cap VAR_9;
 u32 VAR_10, VAR_11;
 unsigned int VAR_12;
 int VAR_13, VAR_14;

 if (!VAR_6)
  return -VAR_0;

 VAR_7 = VAR_6->nd_desc;




 if (!VAR_7->ndctl)
  return VAR_5;

 FUNC_3(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.address = VAR_4;
 VAR_9.length = VAR_5;
 VAR_12 = FUNC_2();
 VAR_14 = VAR_7->ndctl(VAR_7, ((void*)0), VAR_1, &VAR_9,
   sizeof(VAR_9), &VAR_13);
 FUNC_1(VAR_12);
 if (VAR_14 < 0)
  return VAR_14;
 if (VAR_13 < 0)
  return VAR_13;
 VAR_10 = VAR_9.clear_err_unit;
 if (!VAR_10 || !FUNC_0(VAR_10))
  return -VAR_0;

 VAR_11 = VAR_10 - 1;
 if ((VAR_4 | VAR_5) & VAR_11)
  return -VAR_0;
 FUNC_3(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.address = VAR_4;
 VAR_8.length = VAR_5;
 VAR_12 = FUNC_2();
 VAR_14 = VAR_7->ndctl(VAR_7, ((void*)0), VAR_2, &VAR_8,
   sizeof(VAR_8), &VAR_13);
 FUNC_1(VAR_12);
 if (VAR_14 < 0)
  return VAR_14;
 if (VAR_13 < 0)
  return VAR_13;

 FUNC_4(VAR_6, VAR_4, VAR_8.cleared);

 return VAR_8.cleared;
}
