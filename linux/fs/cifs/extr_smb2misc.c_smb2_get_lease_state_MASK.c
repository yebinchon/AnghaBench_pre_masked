
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cifsInodeInfo {int dummy; } ;
typedef int __le32 ;


 scalar_t__ FUNC_0 (struct cifsInodeInfo*) ;
 scalar_t__ FUNC_1 (struct cifsInodeInfo*) ;
 scalar_t__ FUNC_2 (struct cifsInodeInfo*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__le32
FUNC_3(struct cifsInodeInfo *VAR_3)
{
 __le32 VAR_4 = 0;

 if (FUNC_2(VAR_3))
  VAR_4 |= VAR_2;
 if (FUNC_0(VAR_3))
  VAR_4 |= VAR_0;
 if (FUNC_1(VAR_3))
  VAR_4 |= VAR_1;
 return VAR_4;
}
