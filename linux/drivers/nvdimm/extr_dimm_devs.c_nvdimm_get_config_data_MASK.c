
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t config_size; int max_xfer; } ;
struct nvdimm_drvdata {int dev; TYPE_1__ nsarea; } ;
struct nvdimm_bus_descriptor {int (* ndctl ) (struct nvdimm_bus_descriptor*,int ,int ,struct nd_cmd_get_config_data_hdr*,size_t,int*) ;} ;
struct nvdimm_bus {struct nvdimm_bus_descriptor* nd_desc; } ;
struct nd_cmd_get_config_data_hdr {int in_length; size_t in_offset; int out_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nd_cmd_get_config_data_hdr*) ;
 struct nd_cmd_get_config_data_hdr* FUNC_1 (size_t,int ) ;
 int FUNC_2 (void*,int ,int) ;
 int FUNC_3 (size_t,size_t) ;
 size_t FUNC_4 (int ,size_t,int ) ;
 int FUNC_5 (struct nvdimm_bus_descriptor*,int ,int ,struct nd_cmd_get_config_data_hdr*,size_t,int*) ;
 int FUNC_6 (int ) ;
 int VAR_4 ;
 int FUNC_7 (struct nvdimm_drvdata*) ;
 struct nvdimm_bus* FUNC_8 (int ) ;

int FUNC_9(struct nvdimm_drvdata *VAR_5, void *VAR_6,
      size_t VAR_7, size_t VAR_8)
{
 struct nvdimm_bus *VAR_9 = FUNC_8(VAR_5->dev);
 struct nvdimm_bus_descriptor *VAR_10 = VAR_9->nd_desc;
 int VAR_11 = FUNC_7(VAR_5), VAR_12 = 0;
 struct nd_cmd_get_config_data_hdr *VAR_13;
 size_t VAR_14, VAR_15;

 if (VAR_11)
  return VAR_11;

 if (VAR_7 + VAR_8 > VAR_5->nsarea.config_size)
  return -VAR_1;

 VAR_14 = FUNC_4(VAR_4, VAR_8, VAR_5->nsarea.max_xfer);
 VAR_13 = FUNC_1(VAR_14 + sizeof(*VAR_13), VAR_2);
 if (!VAR_13)
  return -VAR_0;

 for (VAR_15 = 0; VAR_8;
      VAR_8 -= VAR_13->in_length, VAR_15 += VAR_13->in_length) {
  size_t VAR_16;

  VAR_13->in_offset = VAR_7 + VAR_15;
  VAR_13->in_length = FUNC_3(VAR_14, VAR_8);

  VAR_16 = sizeof(*VAR_13) + VAR_13->in_length;

  VAR_11 = VAR_10->ndctl(VAR_10, FUNC_6(VAR_5->dev),
    VAR_3, VAR_13, VAR_16, &VAR_12);
  if (VAR_11 < 0)
   break;
  if (VAR_12 < 0) {
   VAR_11 = VAR_12;
   break;
  }


  FUNC_2(VAR_6 + VAR_15, VAR_13->out_buf, VAR_13->in_length);
 }
 FUNC_0(VAR_13);

 return VAR_11;
}
