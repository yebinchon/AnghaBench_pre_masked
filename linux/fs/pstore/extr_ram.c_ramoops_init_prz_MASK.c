
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ramoops_context {scalar_t__ phys_addr; scalar_t__ size; int memtype; int ecc_info; } ;
struct persistent_ram_zone {int type; } ;
struct device {int dummy; } ;
typedef scalar_t__ phys_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct persistent_ram_zone*) ;
 int VAR_2 ;
 int FUNC_1 (struct persistent_ram_zone*) ;
 int FUNC_2 (struct device*,char*,char const*,size_t,unsigned long long,int,...) ;
 char* FUNC_3 (int ,char*,char const*) ;
 struct persistent_ram_zone* FUNC_4 (scalar_t__,size_t,int ,int *,int ,int ,char*) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static int FUNC_6(const char *VAR_3,
       struct device *VAR_4, struct ramoops_context *VAR_5,
       struct persistent_ram_zone **VAR_6,
       phys_addr_t *VAR_7, size_t VAR_8, u32 VAR_9)
{
 char *VAR_10;

 if (!VAR_8)
  return 0;

 if (*VAR_7 + VAR_8 - VAR_5->phys_addr > VAR_5->size) {
  FUNC_2(VAR_4, "no room for %s mem region (0x%zx@0x%llx) in (0x%lx@0x%llx)\n",
   VAR_3, VAR_8, (unsigned long long)*VAR_7,
   VAR_5->size, (unsigned long long)VAR_5->phys_addr);
  return -VAR_0;
 }

 VAR_10 = FUNC_3(VAR_1, "ramoops:%s", VAR_3);
 *VAR_6 = FUNC_4(*VAR_7, VAR_8, VAR_9, &VAR_5->ecc_info,
      VAR_5->memtype, VAR_2, VAR_10);
 if (FUNC_0(*VAR_6)) {
  int VAR_11 = FUNC_1(*VAR_6);

  FUNC_2(VAR_4, "failed to request %s mem region (0x%zx@0x%llx): %d\n",
   VAR_3, VAR_8, (unsigned long long)*VAR_7, VAR_11);
  return VAR_11;
 }

 *VAR_7 += VAR_8;
 (*VAR_6)->type = FUNC_5(VAR_3);

 return 0;
}
