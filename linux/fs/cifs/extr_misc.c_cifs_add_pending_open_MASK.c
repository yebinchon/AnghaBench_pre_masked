
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcon_link {int dummy; } ;
struct cifs_pending_open {struct tcon_link* tlink; } ;
struct cifs_fid {int dummy; } ;
struct TYPE_2__ {int open_file_lock; } ;


 int FUNC_0 (struct cifs_fid*,struct tcon_link*,struct cifs_pending_open*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (struct tcon_link*) ;

void
FUNC_4(struct cifs_fid *VAR_0, struct tcon_link *VAR_1,
        struct cifs_pending_open *VAR_2)
{
 FUNC_1(&FUNC_3(VAR_1)->open_file_lock);
 FUNC_0(VAR_0, VAR_1, VAR_2);
 FUNC_2(&FUNC_3(VAR_2->tlink)->open_file_lock);
}
