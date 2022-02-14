
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cifsInodeInfo {int dummy; } ;
struct cifsFileInfo {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct cifsInodeInfo*,int,struct cifsFileInfo**) ;

struct cifsFileInfo *
FUNC_2(struct cifsInodeInfo *VAR_1, bool VAR_2)
{
 struct cifsFileInfo *VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_1, VAR_2, &VAR_3);
 if (VAR_4)
  FUNC_0(VAR_0, "couldn't find writable handle rc=%d", VAR_4);

 return VAR_3;
}
