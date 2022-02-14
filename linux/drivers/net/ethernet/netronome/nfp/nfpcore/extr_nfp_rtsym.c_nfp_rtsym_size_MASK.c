
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct nfp_rtsym {int type; int size; int name; } ;






 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int ,int) ;

u64 FUNC_2(const struct nfp_rtsym *VAR_0)
{
 switch (VAR_0->type) {
 case 129:
  FUNC_0("rtsym '%s': type NONE\n", VAR_0->name);
  return 0;
 default:
  FUNC_1("rtsym '%s': unknown type: %d\n", VAR_0->name, VAR_0->type);

 case 128:
 case 130:
  return VAR_0->size;
 case 131:
  return sizeof(u64);
 }
}
