
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_open_context {struct nfs4_state* state; } ;
struct nfs4_state {int flags; } ;
struct file_lock {int fl_type; int fl_flags; } ;
struct file {int f_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

 int VAR_7 ;

 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_8 ;
 int FUNC_3 (struct nfs4_state*,int ,struct file_lock*) ;
 int FUNC_4 (struct nfs4_state*,int,struct file_lock*) ;
 int FUNC_5 (struct nfs4_state*,int,struct file_lock*) ;
 int FUNC_6 (struct nfs4_state*,struct file_lock*) ;
 struct nfs_open_context* FUNC_7 (struct file*) ;
 int FUNC_8 (int ,int *) ;

__attribute__((used)) static int
FUNC_9(struct file *VAR_9, int VAR_10, struct file_lock *VAR_11)
{
 struct nfs_open_context *VAR_12;
 struct nfs4_state *VAR_13;
 int VAR_14;


 VAR_12 = FUNC_7(VAR_9);
 VAR_13 = VAR_12->state;

 if (FUNC_0(VAR_10)) {
  if (VAR_13 != ((void*)0))
   return FUNC_3(VAR_13, VAR_6, VAR_11);
  return 0;
 }

 if (!(FUNC_1(VAR_10) || FUNC_2(VAR_10)))
  return -VAR_1;

 if (VAR_11->fl_type == VAR_7) {
  if (VAR_13 != ((void*)0))
   return FUNC_4(VAR_13, VAR_10, VAR_11);
  return 0;
 }

 if (VAR_13 == ((void*)0))
  return -VAR_2;

 if ((VAR_11->fl_flags & VAR_3) &&
     !FUNC_8(VAR_8, &VAR_13->flags))
  return -VAR_2;





 switch (VAR_11->fl_type) {
 case 129:
  if (!(VAR_9->f_mode & VAR_4))
   return -VAR_0;
  break;
 case 128:
  if (!(VAR_9->f_mode & VAR_5))
   return -VAR_0;
 }

 VAR_14 = FUNC_6(VAR_13, VAR_11);
 if (VAR_14 != 0)
  return VAR_14;

 return FUNC_5(VAR_13, VAR_10, VAR_11);
}
