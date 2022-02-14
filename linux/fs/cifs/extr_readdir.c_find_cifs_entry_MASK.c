
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct file {struct cifsFileInfo* private_data; } ;
struct cifs_tcon {TYPE_1__* ses; } ;
struct cifs_sb_info {int dummy; } ;
struct TYPE_6__ {scalar_t__ index_of_last_entry; int entries_in_buffer; char* ntwrk_buf_start; char* srch_entries_start; int info_level; scalar_t__ last_entry; int endOfSearch; scalar_t__ smallBuf; } ;
struct cifsFileInfo {int invalidHandle; TYPE_3__ srch_inf; int fid; int file_info_lock; } ;
struct TCP_Server_Info {TYPE_2__* ops; } ;
typedef scalar_t__ loff_t ;
typedef int __u16 ;
struct TYPE_5__ {int (* query_dir_next ) (unsigned int const,struct cifs_tcon*,int *,int,TYPE_3__*) ;int (* calc_smb_size ) (char*,struct TCP_Server_Info*) ;int (* close_dir ) (unsigned int const,struct cifs_tcon*,int *) ;scalar_t__ (* dir_needs_close ) (struct cifsFileInfo*) ;int query_dir_first; } ;
struct TYPE_4__ {struct TCP_Server_Info* server; } ;


 struct cifs_sb_info* FUNC_0 (struct file*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (struct cifs_sb_info*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (scalar_t__,struct cifsFileInfo*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct file*,char*) ;
 int FUNC_7 (unsigned int const,struct file*) ;
 scalar_t__ FUNC_8 (struct file*) ;
 char* FUNC_9 (char*,char*,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (struct cifsFileInfo*) ;
 int FUNC_13 (unsigned int const,struct cifs_tcon*,int *) ;
 int FUNC_14 (unsigned int const,struct cifs_tcon*,int *,int,TYPE_3__*) ;
 int FUNC_15 (char*,struct TCP_Server_Info*) ;

__attribute__((used)) static int
FUNC_16(const unsigned int VAR_8, struct cifs_tcon *VAR_9, loff_t VAR_10,
  struct file *VAR_11, char **VAR_12, int *VAR_13)
{
 __u16 VAR_14;
 int VAR_15 = 0;
 int VAR_16 = 0;
 loff_t VAR_17;
 loff_t VAR_18 = VAR_10;
 struct cifsFileInfo *VAR_19 = VAR_11->private_data;
 struct cifs_sb_info *VAR_20 = FUNC_0(VAR_11);
 struct TCP_Server_Info *VAR_21 = VAR_9->ses->server;


 if (!VAR_21->ops->query_dir_first || !VAR_21->ops->query_dir_next)
  return -VAR_5;

 if ((VAR_19 == ((void*)0)) || (VAR_12 == ((void*)0)) || (VAR_13 == ((void*)0)))
  return -VAR_4;

 *VAR_12 = ((void*)0);
 VAR_17 = VAR_19->srch_inf.index_of_last_entry -
     VAR_19->srch_inf.entries_in_buffer;
 FUNC_6(VAR_11, "In fce ");
 if (((VAR_18 < VAR_19->srch_inf.index_of_last_entry) &&
      FUNC_8(VAR_11)) || (VAR_18 < VAR_17)) {

  FUNC_3(VAR_6, "search backing up - close and restart search\n");
  FUNC_10(&VAR_19->file_info_lock);
  if (VAR_21->ops->dir_needs_close(VAR_19)) {
   VAR_19->invalidHandle = 1;
   FUNC_11(&VAR_19->file_info_lock);
   if (VAR_21->ops->close_dir)
    VAR_21->ops->close_dir(VAR_8, VAR_9, &VAR_19->fid);
  } else
   FUNC_11(&VAR_19->file_info_lock);
  if (VAR_19->srch_inf.ntwrk_buf_start) {
   FUNC_3(VAR_6, "freeing SMB ff cache buf on search rewind\n");
   if (VAR_19->srch_inf.smallBuf)
    FUNC_5(VAR_19->srch_inf.
      ntwrk_buf_start);
   else
    FUNC_2(VAR_19->srch_inf.
      ntwrk_buf_start);
   VAR_19->srch_inf.ntwrk_buf_start = ((void*)0);
  }
  VAR_15 = FUNC_7(VAR_8, VAR_11);
  if (VAR_15) {
   FUNC_3(VAR_6, "error %d reinitiating a search on rewind\n",
     VAR_15);
   return VAR_15;
  }

  if (VAR_19->srch_inf.last_entry)
   FUNC_4(VAR_19->srch_inf.last_entry, VAR_19);
 }

 VAR_14 = VAR_1 | VAR_2;
 if (FUNC_1(VAR_20))
  VAR_14 |= VAR_0;

 while ((VAR_18 >= VAR_19->srch_inf.index_of_last_entry) &&
        (VAR_15 == 0) && !VAR_19->srch_inf.endOfSearch) {
  FUNC_3(VAR_6, "calling findnext2\n");
  VAR_15 = VAR_21->ops->query_dir_next(VAR_8, VAR_9, &VAR_19->fid,
       VAR_14,
       &VAR_19->srch_inf);

  if (VAR_19->srch_inf.last_entry)
   FUNC_4(VAR_19->srch_inf.last_entry, VAR_19);
  if (VAR_15)
   return -VAR_4;
 }
 if (VAR_18 < VAR_19->srch_inf.index_of_last_entry) {


  int VAR_22;
  char *VAR_23;
  char *VAR_24;

  if (VAR_19->srch_inf.ntwrk_buf_start == ((void*)0)) {
   FUNC_3(VAR_7, "ntwrk_buf_start is NULL during readdir\n");
   return -VAR_3;
  }

  VAR_24 = VAR_19->srch_inf.ntwrk_buf_start +
   VAR_21->ops->calc_smb_size(
     VAR_19->srch_inf.ntwrk_buf_start,
     VAR_21);

  VAR_23 = VAR_19->srch_inf.srch_entries_start;
  VAR_17 = VAR_19->srch_inf.index_of_last_entry
     - VAR_19->srch_inf.entries_in_buffer;
  VAR_16 = VAR_18 - VAR_17;
  FUNC_3(VAR_6, "found entry - pos_in_buf %d\n", VAR_16);

  for (VAR_22 = 0; (VAR_22 < (VAR_16)) && (VAR_23 != ((void*)0)); VAR_22++) {

   VAR_23 = FUNC_9(VAR_23, VAR_24,
      VAR_19->srch_inf.info_level);
  }
  if ((VAR_23 == ((void*)0)) && (VAR_22 < VAR_16)) {

   FUNC_3(VAR_7, "reached end of buf searching for pos in buf %d index to find %lld rc %d\n",
     VAR_16, VAR_18, VAR_15);
  }
  VAR_15 = 0;
  *VAR_12 = VAR_23;
 } else {
  FUNC_3(VAR_6, "index not in buffer - could not findnext into it\n");
  return 0;
 }

 if (VAR_16 >= VAR_19->srch_inf.entries_in_buffer) {
  FUNC_3(VAR_6, "can not return entries pos_in_buf beyond last\n");
  *VAR_13 = 0;
 } else
  *VAR_13 = VAR_19->srch_inf.entries_in_buffer - VAR_16;

 return VAR_15;
}
