
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imgu_device {int dummy; } ;
struct imgu_css_pipe {int ** abi_buffers; int sp_ddr_ptrs; int ** xmem_isp_stage_ptrs; int ** xmem_sp_stage_ptrs; } ;
struct imgu_css {struct imgu_css_pipe* pipes; int dev; } ;
struct imgu_abi_sp_stage {int dummy; } ;
struct imgu_abi_isp_stage {int dummy; } ;
struct imgu_abi_ddr_address_map {int dummy; } ;
struct imgu_abi_buffer {int dummy; } ;


 int FUNC_0 (int,int ) ;
 unsigned int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 struct imgu_device* FUNC_2 (int ) ;
 int FUNC_3 (struct imgu_css*,unsigned int) ;
 scalar_t__ FUNC_4 (struct imgu_css*,unsigned int) ;
 int FUNC_5 (struct imgu_device*,int *,int) ;

__attribute__((used)) static int FUNC_6(struct imgu_css *VAR_5, unsigned int VAR_6)
{
 struct imgu_device *VAR_7 = FUNC_2(VAR_5->dev);
 struct imgu_css_pipe *VAR_8 = &VAR_5->pipes[VAR_6];
 unsigned int VAR_9, VAR_10, VAR_11;


 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++)
  for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++) {
   if (!FUNC_5(VAR_7,
            &VAR_8->
            xmem_sp_stage_ptrs[VAR_9][VAR_11],
            sizeof(struct imgu_abi_sp_stage)))
    return -VAR_0;
   if (!FUNC_5(VAR_7,
            &VAR_8->
            xmem_isp_stage_ptrs[VAR_9][VAR_11],
            sizeof(struct imgu_abi_isp_stage)))
    return -VAR_0;
  }

 if (!FUNC_5(VAR_7, &VAR_8->sp_ddr_ptrs,
          FUNC_0(sizeof(struct imgu_abi_ddr_address_map),
         VAR_1)))
  return -VAR_0;

 for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
  unsigned int VAR_12 = FUNC_1(VAR_8->abi_buffers[VAR_10]);

  for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++)
   if (!FUNC_5(VAR_7,
            &VAR_8->abi_buffers[VAR_10][VAR_11],
            sizeof(struct imgu_abi_buffer)))
    return -VAR_0;
 }

 if (FUNC_4(VAR_5, VAR_6)) {
  FUNC_3(VAR_5, VAR_6);
  return -VAR_0;
 }

 return 0;
}
