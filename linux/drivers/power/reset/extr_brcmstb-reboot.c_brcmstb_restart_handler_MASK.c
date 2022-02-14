
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct notifier_block {int dummy; } ;
struct TYPE_2__ {int sw_mstr_rst_mask; int rst_src_en_mask; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,int ,int ) ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_3(struct notifier_block *VAR_5,
       unsigned long VAR_6, void *VAR_7)
{
 int VAR_8;
 u32 VAR_9;

 VAR_8 = FUNC_2(VAR_1, VAR_3, VAR_2->rst_src_en_mask);
 if (VAR_8) {
  FUNC_0("failed to write rst_src_en (%d)\n", VAR_8);
  return VAR_0;
 }

 VAR_8 = FUNC_1(VAR_1, VAR_3, &VAR_9);
 if (VAR_8) {
  FUNC_0("failed to read rst_src_en (%d)\n", VAR_8);
  return VAR_0;
 }

 VAR_8 = FUNC_2(VAR_1, VAR_4, VAR_2->sw_mstr_rst_mask);
 if (VAR_8) {
  FUNC_0("failed to write sw_mstr_rst (%d)\n", VAR_8);
  return VAR_0;
 }

 VAR_8 = FUNC_1(VAR_1, VAR_4, &VAR_9);
 if (VAR_8) {
  FUNC_0("failed to read sw_mstr_rst (%d)\n", VAR_8);
  return VAR_0;
 }

 while (1)
  ;

 return VAR_0;
}
