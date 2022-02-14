
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct orangefs_object_kref {char fs_id; int khandle; } ;
struct inode {int dummy; } ;
typedef char __u32 ;
struct TYPE_2__ {struct orangefs_object_kref refn; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int ,char*,int *,char) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_1,
      __u32 *VAR_2,
      int *VAR_3,
      struct inode *VAR_4)
{
 int VAR_5 = VAR_4 ? 10 : 5;
 int VAR_6 = 1;
 struct orangefs_object_kref VAR_7;

 if (*VAR_3 < VAR_5) {
  FUNC_3("fh buffer is too small for encoding\n");
  *VAR_3 = VAR_5;
  VAR_6 = 255;
  goto out;
 }

 VAR_7 = FUNC_0(VAR_1)->refn;
 FUNC_1(&VAR_7.khandle, VAR_2, 16);
 VAR_2[4] = VAR_7.fs_id;

 FUNC_2(VAR_0,
       "Encoding fh: handle %pU, fsid %u\n",
       &VAR_7.khandle,
       VAR_7.fs_id);


 if (VAR_4) {
  VAR_7 = FUNC_0(VAR_4)->refn;
  FUNC_1(&VAR_7.khandle, (char *) VAR_2 + 20, 16);
  VAR_2[9] = VAR_7.fs_id;

  VAR_6 = 2;
  FUNC_2(VAR_0,
        "Encoding parent: handle %pU, fsid %u\n",
        &VAR_7.khandle,
        VAR_7.fs_id);
 }
 *VAR_3 = VAR_5;

out:
 return VAR_6;
}
