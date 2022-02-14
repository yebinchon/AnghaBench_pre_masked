
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rt2x00debug_intf {int driver_folder; TYPE_2__* rt2x00dev; } ;
struct debugfs_blob_wrapper {char* data; int size; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {char* name; } ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*,int,int ,struct debugfs_blob_wrapper*) ;
 char* FUNC_1 (int,int ) ;
 int FUNC_2 (char*,char*,char*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(const char *VAR_3,
        struct rt2x00debug_intf *VAR_4,
        struct debugfs_blob_wrapper *VAR_5)
{
 char *VAR_6;

 VAR_6 = FUNC_1(3 * VAR_2, VAR_1);
 if (!VAR_6)
  return;

 VAR_5->data = VAR_6;
 VAR_6 += FUNC_2(VAR_6, "driver:\t%s\n", VAR_4->rt2x00dev->ops->name);
 VAR_6 += FUNC_2(VAR_6, "version:\t%s\n", VAR_0);
 VAR_5->size = FUNC_3(VAR_5->data);

 FUNC_0(VAR_3, 0400, VAR_4->driver_folder, VAR_5);
}
