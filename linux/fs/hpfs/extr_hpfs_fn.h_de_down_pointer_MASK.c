
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpfs_dirent {int length; int down; } ;
typedef int dnode_secno ;
typedef int __le32 ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static inline dnode_secno FUNC_3 (struct hpfs_dirent *VAR_0)
{
  FUNC_0(VAR_0->down,("HPFS: de_down_pointer: !de->down\n"));
  return FUNC_2(*(__le32 *) ((void *) VAR_0 + FUNC_1(VAR_0->length) - 4));
}
