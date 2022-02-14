
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
typedef int u32 ;
struct tb_switch_nvm {int major; int minor; int id; struct nvmem_device* active; struct nvmem_device* non_active; } ;
struct tb_switch {int generation; struct tb_switch_nvm* nvm; int no_nvm_upgrade; int dma_port; int safe_mode; } ;
struct nvmem_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct nvmem_device*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct nvmem_device*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,int ,int*,int) ;
 int FUNC_3 (int *,int ,int ,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct tb_switch_nvm*) ;
 struct tb_switch_nvm* FUNC_6 (int,int ) ;
 int VAR_8 ;
 int FUNC_7 (struct nvmem_device*) ;
 struct nvmem_device* FUNC_8 (struct tb_switch*,int ,int,int) ;

__attribute__((used)) static int FUNC_9(struct tb_switch *VAR_9)
{
 struct nvmem_device *VAR_10;
 struct tb_switch_nvm *VAR_11;
 u32 VAR_12;
 int VAR_13;

 if (!VAR_9->dma_port)
  return 0;

 VAR_11 = FUNC_6(sizeof(*VAR_11), VAR_1);
 if (!VAR_11)
  return -VAR_0;

 VAR_11->id = FUNC_3(&VAR_8, 0, 0, VAR_1);






 if (!VAR_9->safe_mode) {
  u32 VAR_14, VAR_15;

  VAR_13 = FUNC_2(VAR_9->dma_port, VAR_2, &VAR_12,
       sizeof(VAR_12));
  if (VAR_13)
   goto err_ida;

  VAR_15 = VAR_9->generation < 3 ? VAR_7 : VAR_5;
  VAR_14 = (VAR_6 << (VAR_12 & 7)) / 8;
  VAR_14 = (VAR_14 - VAR_15) / 2;

  VAR_13 = FUNC_2(VAR_9->dma_port, VAR_4, &VAR_12,
       sizeof(VAR_12));
  if (VAR_13)
   goto err_ida;

  VAR_11->major = VAR_12 >> 16;
  VAR_11->minor = VAR_12 >> 8;

  VAR_10 = FUNC_8(VAR_9, VAR_11->id, VAR_14, 1);
  if (FUNC_0(VAR_10)) {
   VAR_13 = FUNC_1(VAR_10);
   goto err_ida;
  }
  VAR_11->active = VAR_10;
 }

 if (!VAR_9->no_nvm_upgrade) {
  VAR_10 = FUNC_8(VAR_9, VAR_11->id, VAR_3, 0);
  if (FUNC_0(VAR_10)) {
   VAR_13 = FUNC_1(VAR_10);
   goto err_nvm_active;
  }
  VAR_11->non_active = VAR_10;
 }

 VAR_9->nvm = VAR_11;
 return 0;

err_nvm_active:
 if (VAR_11->active)
  FUNC_7(VAR_11->active);
err_ida:
 FUNC_4(&VAR_8, VAR_11->id);
 FUNC_5(VAR_11);

 return VAR_13;
}
