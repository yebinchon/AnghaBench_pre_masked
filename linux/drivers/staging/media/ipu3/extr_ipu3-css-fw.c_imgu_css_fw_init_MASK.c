
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_9__ ;
typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_13__ ;
typedef struct TYPE_17__ TYPE_12__ ;
typedef struct TYPE_16__ TYPE_11__ ;
typedef struct TYPE_15__ TYPE_10__ ;


typedef scalar_t__ u32 ;
struct imgu_fw_state_memory_offsets {int dummy; } ;
struct imgu_fw_param_memory_offsets {int dummy; } ;
struct TYPE_27__ {int* offsets; } ;
struct TYPE_15__ {int prog_name_offset; scalar_t__ size; scalar_t__ text_size; scalar_t__ icache_size; scalar_t__ data_size; scalar_t__ padding_size; int offset; TYPE_9__ memory_offsets; } ;
struct TYPE_23__ {scalar_t__ block_width; scalar_t__ output_block_height; } ;
struct TYPE_22__ {scalar_t__ num_stripes; } ;
struct TYPE_21__ {scalar_t__ mode; } ;
struct TYPE_24__ {TYPE_5__ block; TYPE_4__ iterator; TYPE_3__ pipeline; } ;
struct TYPE_25__ {scalar_t__ num_vf_formats; scalar_t__ num_output_formats; scalar_t__* output_formats; scalar_t__* vf_formats; TYPE_6__ sp; } ;
struct TYPE_20__ {scalar_t__ per_frame_data; scalar_t__ init_dmem_data; scalar_t__ host_sp_queue; scalar_t__ isp_started; scalar_t__ sw_state; scalar_t__ sleep_mode; scalar_t__ invalidate_tlb; scalar_t__ host_sp_com; scalar_t__ output; scalar_t__ host_sp_queues_initialized; } ;
struct TYPE_19__ {scalar_t__ sw_state; scalar_t__ num_dma_cmds; scalar_t__ dma_cmd_list; } ;
struct TYPE_26__ {TYPE_7__ isp; TYPE_2__ sp; TYPE_1__ bl; } ;
struct imgu_fw_info {scalar_t__ type; TYPE_10__ blob; TYPE_8__ info; } ;
struct TYPE_16__ {int h_size; int binary_nr; int version; } ;
struct imgu_fw_header {struct imgu_fw_info* binary_header; TYPE_11__ file_header; } ;
struct imgu_fw_config_memory_offsets {int dummy; } ;
struct imgu_fw_bi_file_h {int dummy; } ;
struct imgu_device {int dummy; } ;
struct imgu_css {int fw_bl; int* fw_sp; scalar_t__ iomem_length; TYPE_12__* fw; TYPE_13__* binary; struct imgu_fw_header* fwp; struct device* dev; } ;
struct device {int dummy; } ;
struct TYPE_18__ {int vaddr; } ;
struct TYPE_17__ {int size; scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_0 (struct device*,char*,int) ;
 struct imgu_device* FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,char*,int ,unsigned int,int) ;
 int FUNC_3 (struct imgu_css*) ;
 int FUNC_4 (struct device*,struct imgu_fw_info*,char const*) ;
 int FUNC_5 (struct imgu_device*,TYPE_13__*,size_t) ;
 TYPE_13__* FUNC_6 (unsigned int,int,int ) ;
 int FUNC_7 (int ,void*,size_t) ;
 int FUNC_8 (TYPE_12__**,int ,struct device*) ;
 size_t FUNC_9 (char const*,int) ;

int FUNC_10(struct imgu_css *VAR_15)
{
 static const u32 VAR_16 = 65536;
 struct imgu_device *VAR_17 = FUNC_1(VAR_15->dev);
 struct device *VAR_18 = VAR_15->dev;
 unsigned int VAR_19, VAR_20, VAR_21;
 int VAR_22;

 VAR_22 = FUNC_8(&VAR_15->fw, VAR_10, VAR_15->dev);
 if (VAR_22)
  return VAR_22;



 VAR_15->fwp = (struct imgu_fw_header *)VAR_15->fw->data;
 if (VAR_15->fw->size < sizeof(struct imgu_fw_header *) ||
     VAR_15->fwp->file_header.h_size != sizeof(struct imgu_fw_bi_file_h))
  goto bad_fw;
 if (sizeof(struct imgu_fw_bi_file_h) +
     VAR_15->fwp->file_header.binary_nr * sizeof(struct imgu_fw_info) >
     VAR_15->fw->size)
  goto bad_fw;

 FUNC_2(VAR_18, "loaded firmware version %.64s, %u binaries, %zu bytes\n",
   VAR_15->fwp->file_header.version, VAR_15->fwp->file_header.binary_nr,
   VAR_15->fw->size);



 VAR_21 = VAR_15->fwp->file_header.binary_nr;

 VAR_15->fw_bl = -1;
 VAR_15->fw_sp[0] = -1;
 VAR_15->fw_sp[1] = -1;

 for (VAR_19 = 0; VAR_19 < VAR_21; VAR_19++) {
  struct imgu_fw_info *VAR_23 = &VAR_15->fwp->binary_header[VAR_19];
  const char *VAR_24 = (void *)VAR_15->fwp + VAR_23->blob.prog_name_offset;
  size_t VAR_25;

  if (VAR_23->blob.prog_name_offset >= VAR_15->fw->size)
   goto bad_fw;
  VAR_25 = FUNC_9(VAR_24, VAR_15->fw->size - VAR_23->blob.prog_name_offset);
  if (VAR_25 + 1 > VAR_15->fw->size - VAR_23->blob.prog_name_offset ||
      VAR_25 + 1 >= VAR_4)
   goto bad_fw;

  if (VAR_23->blob.size != VAR_23->blob.text_size + VAR_23->blob.icache_size
      + VAR_23->blob.data_size + VAR_23->blob.padding_size)
   goto bad_fw;
  if (VAR_23->blob.offset + VAR_23->blob.size > VAR_15->fw->size)
   goto bad_fw;

  if (VAR_23->type == VAR_8) {
   VAR_15->fw_bl = VAR_19;
   if (VAR_23->info.bl.sw_state >= VAR_15->iomem_length ||
       VAR_23->info.bl.num_dma_cmds >= VAR_15->iomem_length ||
       VAR_23->info.bl.dma_cmd_list >= VAR_15->iomem_length)
    goto bad_fw;
  }
  if (VAR_23->type == VAR_12 ||
      VAR_23->type == VAR_11) {
   VAR_15->fw_sp[VAR_23->type == VAR_12 ? 0 : 1] = VAR_19;
   if (VAR_23->info.sp.per_frame_data >= VAR_15->iomem_length ||
       VAR_23->info.sp.init_dmem_data >= VAR_15->iomem_length ||
       VAR_23->info.sp.host_sp_queue >= VAR_15->iomem_length ||
       VAR_23->info.sp.isp_started >= VAR_15->iomem_length ||
       VAR_23->info.sp.sw_state >= VAR_15->iomem_length ||
       VAR_23->info.sp.sleep_mode >= VAR_15->iomem_length ||
       VAR_23->info.sp.invalidate_tlb >= VAR_15->iomem_length ||
       VAR_23->info.sp.host_sp_com >= VAR_15->iomem_length ||
       VAR_23->info.sp.output + 12 >= VAR_15->iomem_length ||
       VAR_23->info.sp.host_sp_queues_initialized >=
       VAR_15->iomem_length)
    goto bad_fw;
  }
  if (VAR_23->type != VAR_9)
   continue;

  if (VAR_23->info.isp.sp.pipeline.mode >= VAR_13)
   goto bad_fw;

  if (VAR_23->info.isp.sp.iterator.num_stripes >
      VAR_14)
   goto bad_fw;

  if (VAR_23->info.isp.num_vf_formats > VAR_3 ||
      VAR_23->info.isp.num_output_formats > VAR_3)
   goto bad_fw;

  for (VAR_20 = 0; VAR_20 < VAR_23->info.isp.num_output_formats; VAR_20++)
   if (VAR_23->info.isp.output_formats[VAR_20] >=
       VAR_3)
    goto bad_fw;
  for (VAR_20 = 0; VAR_20 < VAR_23->info.isp.num_vf_formats; VAR_20++)
   if (VAR_23->info.isp.vf_formats[VAR_20] >=
       VAR_3)
    goto bad_fw;

  if (VAR_23->info.isp.sp.block.block_width <= 0 ||
      VAR_23->info.isp.sp.block.block_width > VAR_16 ||
      VAR_23->info.isp.sp.block.output_block_height <= 0 ||
      VAR_23->info.isp.sp.block.output_block_height > VAR_16)
   goto bad_fw;

  if (VAR_23->blob.memory_offsets.offsets[VAR_6]
      + sizeof(struct imgu_fw_param_memory_offsets) >
      VAR_15->fw->size ||
      VAR_23->blob.memory_offsets.offsets[VAR_5]
      + sizeof(struct imgu_fw_config_memory_offsets) >
      VAR_15->fw->size ||
      VAR_23->blob.memory_offsets.offsets[VAR_7]
      + sizeof(struct imgu_fw_state_memory_offsets) >
      VAR_15->fw->size)
   goto bad_fw;

  FUNC_4(VAR_18, VAR_23, VAR_24);
 }

 if (VAR_15->fw_bl == -1 || VAR_15->fw_sp[0] == -1 || VAR_15->fw_sp[1] == -1)
  goto bad_fw;



 VAR_15->binary = FUNC_6(VAR_21, sizeof(*VAR_15->binary), VAR_2);
 if (!VAR_15->binary) {
  VAR_22 = -VAR_1;
  goto error_out;
 }

 for (VAR_19 = 0; VAR_19 < VAR_15->fwp->file_header.binary_nr; VAR_19++) {
  struct imgu_fw_info *VAR_26 = &VAR_15->fwp->binary_header[VAR_19];
  void *VAR_27 = (void *)VAR_15->fwp + VAR_26->blob.offset;
  size_t VAR_28 = VAR_26->blob.size;

  if (!FUNC_5(VAR_17, &VAR_15->binary[VAR_19], VAR_28)) {
   VAR_22 = -VAR_1;
   goto error_out;
  }
  FUNC_7(VAR_15->binary[VAR_19].vaddr, VAR_27, VAR_28);
 }

 return 0;

bad_fw:
 FUNC_0(VAR_18, "invalid firmware binary, size %u\n", (int)VAR_15->fw->size);
 VAR_22 = -VAR_0;

error_out:
 FUNC_3(VAR_15);
 return VAR_22;
}
