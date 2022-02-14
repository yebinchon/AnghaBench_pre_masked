
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode_t ;
typedef scalar_t__ u32 ;
struct kernfs_root {int ino_idr; scalar_t__ next_generation; } ;
struct TYPE_2__ {int ino; scalar_t__ generation; } ;
struct kernfs_node {char const* name; unsigned int flags; TYPE_1__ id; int mode; int rb; int active; int count; } ;
struct iattr {int ia_valid; int ia_gid; int ia_uid; } ;
typedef int kuid_t ;
typedef int kgid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct kernfs_node*,struct iattr*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,struct kernfs_node*,int,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 (int *,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_10 (char const*) ;
 int FUNC_11 (int ,struct kernfs_node*) ;
 struct kernfs_node* FUNC_12 (int ,int ) ;
 char* FUNC_13 (char const*,int ) ;
 int FUNC_14 (struct kernfs_node*,struct kernfs_node*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int ,int ) ;

__attribute__((used)) static struct kernfs_node *FUNC_18(struct kernfs_root *VAR_9,
          struct kernfs_node *VAR_10,
          const char *VAR_11, umode_t VAR_12,
          kuid_t VAR_13, kgid_t VAR_14,
          unsigned VAR_15)
{
 struct kernfs_node *VAR_16;
 u32 VAR_17;
 int VAR_18;
 int VAR_19;

 VAR_11 = FUNC_13(VAR_11, VAR_3);
 if (!VAR_11)
  return ((void*)0);

 VAR_16 = FUNC_12(VAR_8, VAR_3);
 if (!VAR_16)
  goto err_out1;

 FUNC_7(VAR_3);
 FUNC_15(&VAR_7);
 VAR_18 = FUNC_6(&VAR_9->ino_idr);
 VAR_19 = FUNC_5(&VAR_9->ino_idr, VAR_16, 1, 0, VAR_2);
 if (VAR_19 >= 0 && VAR_19 < VAR_18)
  VAR_9->next_generation++;
 VAR_17 = VAR_9->next_generation;
 FUNC_16(&VAR_7);
 FUNC_8();
 if (VAR_19 < 0)
  goto err_out2;
 VAR_16->id.ino = VAR_19;
 VAR_16->id.generation = VAR_17;





 FUNC_3(&VAR_16->count, 1);
 FUNC_2(&VAR_16->active, VAR_6);
 FUNC_0(&VAR_16->rb);

 VAR_16->name = VAR_11;
 VAR_16->mode = VAR_12;
 VAR_16->flags = VAR_15;

 if (!FUNC_17(VAR_13, VAR_5) || !FUNC_4(VAR_14, VAR_4)) {
  struct iattr VAR_20 = {
   .ia_valid = VAR_1 | VAR_0,
   .ia_uid = VAR_13,
   .ia_gid = VAR_14,
  };

  VAR_19 = FUNC_1(VAR_16, &VAR_20);
  if (VAR_19 < 0)
   goto err_out3;
 }

 if (VAR_10) {
  VAR_19 = FUNC_14(VAR_10, VAR_16);
  if (VAR_19)
   goto err_out3;
 }

 return VAR_16;

 err_out3:
 FUNC_9(&VAR_9->ino_idr, VAR_16->id.ino);
 err_out2:
 FUNC_11(VAR_8, VAR_16);
 err_out1:
 FUNC_10(VAR_11);
 return ((void*)0);
}
