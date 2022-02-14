
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpfs_dirent {int down; int not_8x3; } ;


 int FUNC_0 (char*,char*,int) ;

__attribute__((used)) static inline void FUNC_1(struct hpfs_dirent *VAR_0, struct hpfs_dirent *VAR_1)
{
 int VAR_2;
 int VAR_3;
 if (!VAR_0 || !VAR_1) return;
 VAR_2 = VAR_0->down;
 VAR_3 = VAR_0->not_8x3;
 FUNC_0((char *)VAR_0 + 2, (char *)VAR_1 + 2, 28);
 VAR_0->down = VAR_2;
 VAR_0->not_8x3 = VAR_3;
}
