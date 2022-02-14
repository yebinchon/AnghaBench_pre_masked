
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {scalar_t__ size; } ;
struct ath10k_mem_region {int len; int name; int start; TYPE_1__ section_table; } ;
struct ath10k {int dummy; } ;


 int FUNC_0 (struct ath10k*,int ,int *,int) ;
 int FUNC_1 (struct ath10k*,struct ath10k_mem_region const*,int *,int) ;
 int FUNC_2 (struct ath10k*,char*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct ath10k *VAR_0,
       const struct ath10k_mem_region *VAR_1,
       u8 *VAR_2)
{
 int VAR_3;

 if (VAR_1->section_table.size > 0)

  return FUNC_1(VAR_0,
            VAR_1,
            VAR_2,
            VAR_1->len);




 VAR_3 = FUNC_0(VAR_0,
           VAR_1->start,
           VAR_2,
           VAR_1->len);
 if (VAR_3) {
  FUNC_2(VAR_0, "failed to copy ramdump region %s: %d\n",
       VAR_1->name, VAR_3);
  return VAR_3;
 }

 return VAR_1->len;
}
