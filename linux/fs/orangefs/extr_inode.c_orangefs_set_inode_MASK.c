
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct orangefs_object_kref {int khandle; int fs_id; } ;
struct inode {int dummy; } ;
struct TYPE_3__ {int khandle; int fs_id; } ;
struct TYPE_4__ {scalar_t__ bitlock; scalar_t__ mapping_time; int xattr_cache; scalar_t__ attr_valid; TYPE_1__ refn; } ;


 TYPE_2__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_1, void *VAR_2)
{
 struct orangefs_object_kref *VAR_3 = (struct orangefs_object_kref *) VAR_2;
 FUNC_0(VAR_1)->refn.fs_id = VAR_3->fs_id;
 FUNC_0(VAR_1)->refn.khandle = VAR_3->khandle;
 FUNC_0(VAR_1)->attr_valid = 0;
 FUNC_1(FUNC_0(VAR_1)->xattr_cache);
 FUNC_0(VAR_1)->mapping_time = VAR_0 - 1;
 FUNC_0(VAR_1)->bitlock = 0;
 return 0;
}
