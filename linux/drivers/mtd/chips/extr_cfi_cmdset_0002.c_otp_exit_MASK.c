
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct map_info {struct cfi_private* fldrv_priv; } ;
struct flchip {scalar_t__ start; } ;
struct cfi_private {int device_type; int addr_unlock1; int addr_unlock2; } ;
typedef scalar_t__ loff_t ;


 int FUNC_0 (struct map_info*,scalar_t__,size_t) ;
 int FUNC_1 (int,int ,scalar_t__,struct map_info*,struct cfi_private*,int ,int *) ;

__attribute__((used)) static inline void FUNC_2(struct map_info *VAR_0, struct flchip *VAR_1,
       loff_t VAR_2, size_t VAR_3)
{
 struct cfi_private *VAR_4 = VAR_0->fldrv_priv;

 FUNC_1(0xAA, VAR_4->addr_unlock1, VAR_1->start, VAR_0, VAR_4,
    VAR_4->device_type, ((void*)0));
 FUNC_1(0x55, VAR_4->addr_unlock2, VAR_1->start, VAR_0, VAR_4,
    VAR_4->device_type, ((void*)0));
 FUNC_1(0x90, VAR_4->addr_unlock1, VAR_1->start, VAR_0, VAR_4,
    VAR_4->device_type, ((void*)0));
 FUNC_1(0x00, VAR_4->addr_unlock1, VAR_1->start, VAR_0, VAR_4,
    VAR_4->device_type, ((void*)0));

 FUNC_0(VAR_0, VAR_1->start + VAR_2, VAR_3);
}
