
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {int nnode_sz; int pnode_sz; int ltab_sz; int lsave_sz; } ;







__attribute__((used)) static int FUNC_0(const struct ubifs_info *VAR_0, int VAR_1)
{
 switch (VAR_1) {
 case 129:
  return VAR_0->nnode_sz;
 case 128:
  return VAR_0->pnode_sz;
 case 130:
  return VAR_0->ltab_sz;
 case 131:
  return VAR_0->lsave_sz;
 }
 return 0;
}
