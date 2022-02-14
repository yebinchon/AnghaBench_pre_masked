
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cifs_tcon {char* treeName; } ;
struct cifs_sb_info {int mnt_cifs_flags; int mnt_cifs_serverino_autodisabled; scalar_t__ master_tlink; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 struct cifs_tcon* FUNC_1 (struct cifs_sb_info*) ;

void
FUNC_2(struct cifs_sb_info *VAR_2)
{
 if (VAR_2->mnt_cifs_flags & VAR_0) {
  struct cifs_tcon *VAR_3 = ((void*)0);

  if (VAR_2->master_tlink)
   VAR_3 = FUNC_1(VAR_2);

  VAR_2->mnt_cifs_flags &= ~VAR_0;
  VAR_2->mnt_cifs_serverino_autodisabled = 1;
  FUNC_0(VAR_1, "Autodisabling the use of server inode numbers on %s.\n",
    VAR_3 ? VAR_3->treeName : "new server");
  FUNC_0(VAR_1, "The server doesn't seem to support them properly or the files might be on different servers (DFS).\n");
  FUNC_0(VAR_1, "Hardlinks will not be recognized on this mount. Consider mounting with the \"noserverino\" option to silence this message.\n");

 }
}
