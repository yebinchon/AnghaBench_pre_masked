
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcon_link {int tl_flags; int tl_time; struct cifs_tcon* tl_tcon; int tl_uid; } ;
struct cifs_tcon {int dummy; } ;
struct cifs_ses {int linux_uid; } ;
struct cifs_sb_info {int prune_tlinks; int tlink_tree_lock; int tlink_tree; struct tcon_link* master_tlink; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct tcon_link* FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,struct tcon_link*) ;

__attribute__((used)) static int FUNC_6(struct cifs_sb_info *VAR_7, struct cifs_ses *VAR_8,
        struct cifs_tcon *VAR_9)
{
 struct tcon_link *VAR_10;


 VAR_10 = FUNC_0(sizeof(*VAR_10), VAR_1);
 if (VAR_10 == ((void*)0))
  return -VAR_0;

 VAR_10->tl_uid = VAR_8->linux_uid;
 VAR_10->tl_tcon = VAR_9;
 VAR_10->tl_time = VAR_6;
 FUNC_2(VAR_3, &VAR_10->tl_flags);
 FUNC_2(VAR_2, &VAR_10->tl_flags);

 VAR_7->master_tlink = VAR_10;
 FUNC_3(&VAR_7->tlink_tree_lock);
 FUNC_5(&VAR_7->tlink_tree, VAR_10);
 FUNC_4(&VAR_7->tlink_tree_lock);

 FUNC_1(VAR_5, &VAR_7->prune_tlinks,
    VAR_4);
 return 0;
}
