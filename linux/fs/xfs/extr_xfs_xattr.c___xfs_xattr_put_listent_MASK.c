
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_attr_list_context {int count; int seen_enough; int firstu; scalar_t__ alist; } ;


 int FUNC_0 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_1(
 struct xfs_attr_list_context *VAR_0,
 char *VAR_1,
 int VAR_2,
 unsigned char *VAR_3,
 int VAR_4)
{
 char *VAR_5;
 int VAR_6;

 if (VAR_0->count < 0 || VAR_0->seen_enough)
  return;

 if (!VAR_0->alist)
  goto compute_size;

 VAR_6 = VAR_0->count + VAR_2 + VAR_4 + 1;
 if (VAR_6 > VAR_0->firstu) {
  VAR_0->count = -1;
  VAR_0->seen_enough = 1;
  return;
 }
 VAR_5 = (char *)VAR_0->alist + VAR_0->count;
 FUNC_0(VAR_5, VAR_1, VAR_2);
 VAR_5 += VAR_2;
 FUNC_0(VAR_5, (char *)VAR_3, VAR_4);
 VAR_5 += VAR_4;
 *VAR_5 = '\0';

compute_size:
 VAR_0->count += VAR_2 + VAR_4 + 1;
 return;
}
