
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ state; } ;
typedef TYPE_1__ ntfs_inode ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,char*) ;
 int VAR_1 ;

__attribute__((used)) static inline ntfs_inode *FUNC_4(void)
{
 ntfs_inode *VAR_2;

 FUNC_2("Entering.");
 VAR_2 = FUNC_0(VAR_1, VAR_0);
 if (FUNC_1(VAR_2 != ((void*)0))) {
  VAR_2->state = 0;
  return VAR_2;
 }
 FUNC_3(((void*)0), "Allocation of NTFS inode structure failed.");
 return ((void*)0);
}
