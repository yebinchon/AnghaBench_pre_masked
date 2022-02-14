
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct tb_switch {int* drom; int uid; int dma_port; scalar_t__ cap_plug_events; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,scalar_t__,int*,int) ;
 int FUNC_1 (int*) ;
 int* FUNC_2 (int,int ) ;
 int FUNC_3 (struct tb_switch*,int *) ;
 int FUNC_4 (struct tb_switch*,scalar_t__*,int ,scalar_t__,int) ;

__attribute__((used)) static int FUNC_5(struct tb_switch *VAR_4, u16 *VAR_5)
{
 u32 VAR_6;
 int VAR_7;

 if (!VAR_4->dma_port)
  return -VAR_0;

 VAR_7 = FUNC_4(VAR_4, &VAR_6, VAR_3,
    VAR_4->cap_plug_events + 12, 1);
 if (VAR_7)
  return VAR_7;

 if (!VAR_6)
  return -VAR_0;

 VAR_7 = FUNC_0(VAR_4->dma_port, VAR_6 + 14, VAR_5,
      sizeof(*VAR_5));
 if (VAR_7)
  return VAR_7;


 *VAR_5 += 1 + 8 + 4;
 VAR_4->drom = FUNC_2(*VAR_5, VAR_2);
 if (!VAR_4->drom)
  return -VAR_1;

 VAR_7 = FUNC_0(VAR_4->dma_port, VAR_6, VAR_4->drom, *VAR_5);
 if (VAR_7)
  goto err_free;





 FUNC_3(VAR_4, &VAR_4->uid);
 return 0;

err_free:
 FUNC_1(VAR_4->drom);
 VAR_4->drom = ((void*)0);
 return VAR_7;
}
