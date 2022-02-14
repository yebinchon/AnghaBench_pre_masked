
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vscsifrnt_info {int callers; scalar_t__ pause; } ;



__attribute__((used)) static int FUNC_0(struct vscsifrnt_info *VAR_0)
{
 if (VAR_0->pause)
  return 1;
 VAR_0->callers++;
 return 0;
}
