
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct gb_connection {TYPE_1__* intf; } ;
struct gb_camera_debugfs_entry {int mask; int name; } ;
struct TYPE_7__ {int root; TYPE_4__* buffers; } ;
struct gb_camera {TYPE_3__ debugfs; TYPE_2__* bundle; struct gb_connection* connection; } ;
struct TYPE_8__ {scalar_t__ length; } ;
struct TYPE_6__ {int id; } ;
struct TYPE_5__ {int interface_id; } ;


 unsigned int FUNC_0 (struct gb_camera_debugfs_entry*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ,int ,int ,struct gb_camera*,int *) ;
 struct gb_camera_debugfs_entry* VAR_2 ;
 int VAR_3 ;
 int FUNC_4 () ;
 int FUNC_5 (char*,int,char*,int,int) ;
 TYPE_4__* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct gb_camera *VAR_4)
{
 struct gb_connection *VAR_5 = VAR_4->connection;
 char VAR_6[27];
 unsigned int VAR_7;




 FUNC_5(VAR_6, 27, "camera-%u.%u", VAR_5->intf->interface_id,
   VAR_4->bundle->id);

 VAR_4->debugfs.root = FUNC_2(VAR_6, FUNC_4());

 VAR_4->debugfs.buffers =
  FUNC_6(FUNC_1(VAR_1,
       sizeof(*VAR_4->debugfs.buffers)));
 if (!VAR_4->debugfs.buffers)
  return -VAR_0;

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_2); ++VAR_7) {
  const struct gb_camera_debugfs_entry *VAR_8 =
   &VAR_2[VAR_7];

  VAR_4->debugfs.buffers[VAR_7].length = 0;

  FUNC_3(VAR_8->name, VAR_8->mask,
        VAR_4->debugfs.root, VAR_4,
        &VAR_3);
 }

 return 0;
}
