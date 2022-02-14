
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device_node {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int const*) ;
 struct device_node* FUNC_1 (int) ;
 int * FUNC_2 (struct device_node*,char const*,int*) ;
 int FUNC_3 (struct device_node*) ;
 int FUNC_4 (struct device_node*,char const*,int*) ;
 int FUNC_5 (char*,struct device_node*,char const*,int,int,int,int,int,int) ;
 int FUNC_6 (char*,struct device_node*,char const*,...) ;
 int FUNC_7 (char*,struct device_node*,char const*,int,struct device_node*) ;

int FUNC_8(struct device_node *VAR_3, u32 VAR_4,
        const char *VAR_5, const char *VAR_6,
        struct device_node **VAR_7, u32 *VAR_8)
{
 u32 VAR_9, VAR_10;
 int VAR_11;
 const __be32 *VAR_12 = ((void*)0);

 if (!VAR_3 || !VAR_5 || (!VAR_7 && !VAR_8))
  return -VAR_1;

 VAR_12 = FUNC_2(VAR_3, VAR_5, &VAR_11);
 if (!VAR_12) {
  if (VAR_7)
   return -VAR_2;

  *VAR_8 = VAR_4;
  return 0;
 }

 if (!VAR_11 || VAR_11 % (4 * sizeof(*VAR_12))) {
  FUNC_6("%pOF: Error: Bad %s length: %d\n", VAR_3,
   VAR_5, VAR_11);
  return -VAR_1;
 }


 VAR_9 = 0xffffffff;





 if (VAR_6)
  FUNC_4(VAR_3, VAR_6, &VAR_9);

 VAR_10 = VAR_9 & VAR_4;
 for ( ; VAR_11 > 0; VAR_11 -= 4 * sizeof(*VAR_12), VAR_12 += 4) {
  struct device_node *VAR_13;
  u32 VAR_14 = FUNC_0(VAR_12 + 0);
  u32 VAR_15 = FUNC_0(VAR_12 + 1);
  u32 VAR_16 = FUNC_0(VAR_12 + 2);
  u32 VAR_17 = FUNC_0(VAR_12 + 3);

  if (VAR_14 & ~VAR_9) {
   FUNC_6("%pOF: Invalid %s translation - %s-mask (0x%x) ignores rid-base (0x%x)\n",
    VAR_3, VAR_5, VAR_5,
    VAR_9, VAR_14);
   return -VAR_0;
  }

  if (VAR_10 < VAR_14 || VAR_10 >= VAR_14 + VAR_17)
   continue;

  VAR_13 = FUNC_1(VAR_15);
  if (!VAR_13)
   return -VAR_2;

  if (VAR_7) {
   if (*VAR_7)
    FUNC_3(VAR_13);
   else
    *VAR_7 = VAR_13;

   if (*VAR_7 != VAR_13)
    continue;
  }

  if (VAR_8)
   *VAR_8 = VAR_10 - VAR_14 + VAR_16;

  FUNC_5("%pOF: %s, using mask %08x, rid-base: %08x, out-base: %08x, length: %08x, rid: %08x -> %08x\n",
   VAR_3, VAR_5, VAR_9, VAR_14, VAR_16,
   VAR_17, VAR_4, VAR_10 - VAR_14 + VAR_16);
  return 0;
 }

 FUNC_7("%pOF: no %s translation for rid 0x%x on %pOF\n", VAR_3, VAR_5,
  VAR_4, VAR_7 && *VAR_7 ? *VAR_7 : ((void*)0));


 if (VAR_8)
  *VAR_8 = VAR_4;
 return 0;
}
