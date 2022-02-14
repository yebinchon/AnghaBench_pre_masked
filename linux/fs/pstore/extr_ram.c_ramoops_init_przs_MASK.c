
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ramoops_context {scalar_t__ phys_addr; scalar_t__ size; int memtype; int ecc_info; } ;
struct persistent_ram_zone {int type; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
typedef scalar_t__ phys_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct persistent_ram_zone*) ;
 int FUNC_1 (struct persistent_ram_zone*) ;
 int FUNC_2 (struct device*,char*,char const*,...) ;
 char* FUNC_3 (int ,char*,char const*,...) ;
 struct persistent_ram_zone** FUNC_4 (unsigned int,int,int ) ;
 int FUNC_5 (struct persistent_ram_zone**) ;
 int FUNC_6 (struct persistent_ram_zone*) ;
 struct persistent_ram_zone* FUNC_7 (scalar_t__,size_t,int ,int *,int ,int ,char*) ;
 int FUNC_8 (char const*) ;

__attribute__((used)) static int FUNC_9(const char *VAR_2,
        struct device *VAR_3, struct ramoops_context *VAR_4,
        struct persistent_ram_zone ***VAR_5,
        phys_addr_t *VAR_6, size_t VAR_7,
        ssize_t VAR_8,
        unsigned int *VAR_9, u32 VAR_10, u32 VAR_11)
{
 int VAR_12 = -VAR_0;
 int VAR_13;
 size_t VAR_14;
 struct persistent_ram_zone **VAR_15;


 if (VAR_7 == 0 || VAR_8 == 0) {
  *VAR_9 = 0;
  return 0;
 }






 if (VAR_8 < 0) {
  if (*VAR_9 == 0)
   return 0;
  VAR_8 = VAR_7 / *VAR_9;
  if (VAR_8 == 0) {
   FUNC_2(VAR_3, "%s record size == 0 (%zu / %u)\n",
    VAR_2, VAR_7, *VAR_9);
   goto fail;
  }
 } else {
  *VAR_9 = VAR_7 / VAR_8;
  if (*VAR_9 == 0) {
   FUNC_2(VAR_3, "%s record count == 0 (%zu / %zu)\n",
    VAR_2, VAR_7, VAR_8);
   goto fail;
  }
 }

 if (*VAR_6 + VAR_7 - VAR_4->phys_addr > VAR_4->size) {
  FUNC_2(VAR_3, "no room for %s mem region (0x%zx@0x%llx) in (0x%lx@0x%llx)\n",
   VAR_2,
   VAR_7, (unsigned long long)*VAR_6,
   VAR_4->size, (unsigned long long)VAR_4->phys_addr);
  goto fail;
 }

 VAR_14 = VAR_7 / *VAR_9;
 if (!VAR_14) {
  FUNC_2(VAR_3, "%s zone size == 0\n", VAR_2);
  goto fail;
 }

 VAR_15 = FUNC_4(*VAR_9, sizeof(**VAR_5), VAR_1);
 if (!VAR_15)
  goto fail;

 for (VAR_13 = 0; VAR_13 < *VAR_9; VAR_13++) {
  char *VAR_16;

  if (*VAR_9 == 1)
   VAR_16 = FUNC_3(VAR_1, "ramoops:%s", VAR_2);
  else
   VAR_16 = FUNC_3(VAR_1, "ramoops:%s(%d/%d)",
       VAR_2, VAR_13, *VAR_9 - 1);
  VAR_15[VAR_13] = FUNC_7(*VAR_6, VAR_14, VAR_10,
            &VAR_4->ecc_info,
            VAR_4->memtype, VAR_11, VAR_16);
  if (FUNC_0(VAR_15[VAR_13])) {
   VAR_12 = FUNC_1(VAR_15[VAR_13]);
   FUNC_2(VAR_3, "failed to request %s mem region (0x%zx@0x%llx): %d\n",
    VAR_2, VAR_8,
    (unsigned long long)*VAR_6, VAR_12);

   while (VAR_13 > 0) {
    VAR_13--;
    FUNC_6(VAR_15[VAR_13]);
   }
   FUNC_5(VAR_15);
   goto fail;
  }
  *VAR_6 += VAR_14;
  VAR_15[VAR_13]->type = FUNC_8(VAR_2);
 }

 *VAR_5 = VAR_15;
 return 0;

fail:
 *VAR_9 = 0;
 return VAR_12;
}
