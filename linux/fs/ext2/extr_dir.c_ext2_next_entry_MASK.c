
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int rec_len; } ;
typedef TYPE_1__ ext2_dirent ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline ext2_dirent *FUNC_1(ext2_dirent *VAR_0)
{
 return (ext2_dirent *)((char *)VAR_0 +
   FUNC_0(VAR_0->rec_len));
}
