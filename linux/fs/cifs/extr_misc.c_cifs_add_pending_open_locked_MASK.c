
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcon_link {int dummy; } ;
struct cifs_pending_open {int olist; struct tcon_link* tlink; int oplock; int lease_key; } ;
struct cifs_fid {struct cifs_pending_open* pending_open; int lease_key; } ;
struct TYPE_2__ {int pending_opens; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,int ,int ) ;
 TYPE_1__* FUNC_2 (struct tcon_link*) ;

void
FUNC_3(struct cifs_fid *VAR_2, struct tcon_link *VAR_3,
        struct cifs_pending_open *VAR_4)
{
 FUNC_1(VAR_4->lease_key, VAR_2->lease_key, VAR_1);
 VAR_4->oplock = VAR_0;
 VAR_4->tlink = VAR_3;
 VAR_2->pending_open = VAR_4;
 FUNC_0(&VAR_4->olist, &FUNC_2(VAR_3)->pending_opens);
}
