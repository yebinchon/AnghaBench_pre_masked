
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum nfp_bpf_map_use { ____Placeholder_nfp_bpf_map_use } nfp_bpf_map_use ;


 int FUNC_0 (char const* const*) ;





__attribute__((used)) static const char *FUNC_1(enum nfp_bpf_map_use VAR_0)
{
 static const char * const VAR_1[] = {
  [131] = "unused",
  [129] = "read",
  [128] = "write",
  [130] = "atomic",
 };

 if (VAR_0 >= FUNC_0(VAR_1) || !VAR_1[VAR_0])
  return "unknown";
 return VAR_1[VAR_0];
}
