
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imgu_device {int dummy; } ;
struct imgu_css_pipe {int sp_ddr_ptrs; int ** xmem_isp_stage_ptrs; int ** xmem_sp_stage_ptrs; int ** abi_buffers; } ;
struct imgu_css {struct imgu_css_pipe* pipes; int dev; } ;


 unsigned int FUNC_0 (int *) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 struct imgu_device* FUNC_1 (int ) ;
 int FUNC_2 (struct imgu_css*,unsigned int) ;
 int FUNC_3 (struct imgu_device*,int *) ;

__attribute__((used)) static void FUNC_4(struct imgu_css *VAR_3, unsigned int VAR_4)
{
 struct imgu_device *VAR_5 = FUNC_1(VAR_3->dev);
 struct imgu_css_pipe *VAR_6 = &VAR_3->pipes[VAR_4];
 unsigned int VAR_7, VAR_8, VAR_9, VAR_10;

 FUNC_2(VAR_3, VAR_4);

 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  VAR_10 = FUNC_0(VAR_6->abi_buffers[VAR_8]);
  for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++)
   FUNC_3(VAR_5, &VAR_6->abi_buffers[VAR_8][VAR_9]);
 }

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++)
  for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
   FUNC_3(VAR_5,
      &VAR_6->xmem_sp_stage_ptrs[VAR_7][VAR_9]);
   FUNC_3(VAR_5,
      &VAR_6->xmem_isp_stage_ptrs[VAR_7][VAR_9]);
  }

 FUNC_3(VAR_5, &VAR_6->sp_ddr_ptrs);
}
