
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct file {struct cifsFileInfo* private_data; } ;
struct dir_context {scalar_t__ pos; } ;
struct cifs_tcon {TYPE_2__* ses; } ;
struct TYPE_7__ {char* ntwrk_buf_start; scalar_t__ index_of_last_entry; int info_level; scalar_t__ emptyDir; scalar_t__ endOfSearch; } ;
struct cifsFileInfo {TYPE_3__ srch_inf; int tlink; } ;
struct TYPE_8__ {TYPE_1__* ops; } ;
struct TYPE_6__ {TYPE_4__* server; } ;
struct TYPE_5__ {unsigned int (* calc_smb_size ) (char*,TYPE_4__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (char*,struct file*,struct dir_context*,char*,unsigned int) ;
 int FUNC_2 (char*,struct cifsFileInfo*) ;
 int FUNC_3 (struct file*,struct dir_context*) ;
 int FUNC_4 (unsigned int,struct cifs_tcon*,scalar_t__,struct file*,char**,int*) ;
 int FUNC_5 (unsigned int) ;
 unsigned int FUNC_6 () ;
 int FUNC_7 (unsigned int,struct file*) ;
 int FUNC_8 (char*) ;
 char* FUNC_9 (int ,int ) ;
 char* FUNC_10 (char*,char*,int ) ;
 unsigned int FUNC_11 (char*,TYPE_4__*) ;
 struct cifs_tcon* FUNC_12 (int ) ;

int FUNC_13(struct file *VAR_5, struct dir_context *VAR_6)
{
 int VAR_7 = 0;
 unsigned int VAR_8;
 int VAR_9;
 struct cifs_tcon *VAR_10;
 struct cifsFileInfo *VAR_11 = ((void*)0);
 char *VAR_12;
 int VAR_13 = 0;
 char *VAR_14 = ((void*)0);
 char *VAR_15;
 unsigned int VAR_16;

 VAR_8 = FUNC_6();





 if (VAR_5->private_data == ((void*)0)) {
  VAR_7 = FUNC_7(VAR_8, VAR_5);
  FUNC_0(VAR_1, "initiate cifs search rc %d\n", VAR_7);
  if (VAR_7)
   goto rddir2_exit;
 }

 if (!FUNC_3(VAR_5, VAR_6))
  goto rddir2_exit;






 VAR_11 = VAR_5->private_data;
 if (VAR_11->srch_inf.endOfSearch) {
  if (VAR_11->srch_inf.emptyDir) {
   FUNC_0(VAR_1, "End of search, empty dir\n");
   VAR_7 = 0;
   goto rddir2_exit;
  }
 }




 VAR_10 = FUNC_12(VAR_11->tlink);
 VAR_7 = FUNC_4(VAR_8, VAR_10, VAR_6->pos, VAR_5, &VAR_12,
        &VAR_13);
 if (VAR_7) {
  FUNC_0(VAR_1, "fce error %d\n", VAR_7);
  goto rddir2_exit;
 } else if (VAR_12 != ((void*)0)) {
  FUNC_0(VAR_1, "entry %lld found\n", VAR_6->pos);
 } else {
  FUNC_0(VAR_1, "could not find entry\n");
  goto rddir2_exit;
 }
 FUNC_0(VAR_1, "loop through %d times filling dir for net buf %p\n",
   VAR_13, VAR_11->srch_inf.ntwrk_buf_start);
 VAR_16 = VAR_10->ses->server->ops->calc_smb_size(
   VAR_11->srch_inf.ntwrk_buf_start,
   VAR_10->ses->server);
 VAR_15 = VAR_11->srch_inf.ntwrk_buf_start + VAR_16;

 VAR_14 = FUNC_9(VAR_3, VAR_2);
 if (VAR_14 == ((void*)0)) {
  VAR_7 = -VAR_0;
  goto rddir2_exit;
 }

 for (VAR_9 = 0; VAR_9 < VAR_13; VAR_9++) {
  if (VAR_12 == ((void*)0)) {

   FUNC_0(VAR_4, "past SMB end,  num to fill %d i %d\n",
     VAR_13, VAR_9);
   break;
  }




  *VAR_14 = 0;
  VAR_7 = FUNC_1(VAR_12, VAR_5, VAR_6,
      VAR_14, VAR_16);
  if (VAR_7) {
   if (VAR_7 > 0)
    VAR_7 = 0;
   break;
  }

  VAR_6->pos++;
  if (VAR_6->pos ==
   VAR_11->srch_inf.index_of_last_entry) {
   FUNC_0(VAR_1, "last entry in buf at pos %lld %s\n",
     VAR_6->pos, VAR_14);
   FUNC_2(VAR_12, VAR_11);
   break;
  } else
   VAR_12 =
    FUNC_10(VAR_12, VAR_15,
     VAR_11->srch_inf.info_level);
 }
 FUNC_8(VAR_14);

rddir2_exit:
 FUNC_5(VAR_8);
 return VAR_7;
}
