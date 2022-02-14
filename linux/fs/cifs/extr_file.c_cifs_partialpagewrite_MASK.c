
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {struct address_space* mapping; scalar_t__ index; } ;
struct inode {scalar_t__ i_size; int i_mtime; int i_atime; } ;
struct cifsFileInfo {int pid; } ;
struct address_space {struct inode* host; } ;
typedef scalar_t__ loff_t ;


 int FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_1 (struct cifsFileInfo*) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,int,struct cifsFileInfo**) ;
 int FUNC_4 (struct cifsFileInfo*,int ,char*,unsigned int,scalar_t__*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (int) ;
 char* FUNC_7 (struct page*) ;
 int FUNC_8 (struct page*) ;

__attribute__((used)) static int FUNC_9(struct page *VAR_5, unsigned VAR_6, unsigned VAR_7)
{
 struct address_space *VAR_8 = VAR_5->mapping;
 loff_t VAR_9 = (loff_t)VAR_5->index << VAR_3;
 char *VAR_10;
 int VAR_11 = -VAR_0;
 int VAR_12 = 0;
 struct inode *VAR_13;
 struct cifsFileInfo *VAR_14;

 if (!VAR_8 || !VAR_8->host)
  return -VAR_0;

 VAR_13 = VAR_5->mapping->host;

 VAR_9 += (loff_t)VAR_6;
 VAR_10 = FUNC_7(VAR_5);
 VAR_10 += VAR_6;

 if ((VAR_7 > VAR_4) || (VAR_6 > VAR_7)) {
  FUNC_8(VAR_5);
  return -VAR_1;
 }


 if (VAR_9 > VAR_8->host->i_size) {
  FUNC_8(VAR_5);
  return 0;
 }


 if (VAR_8->host->i_size - VAR_9 < (loff_t)VAR_7)
  VAR_7 = (unsigned)(VAR_8->host->i_size - VAR_9);

 VAR_11 = FUNC_3(FUNC_0(VAR_8->host), 0, &VAR_14);
 if (!VAR_11) {
  VAR_12 = FUNC_4(VAR_14, VAR_14->pid,
        VAR_10, VAR_7 - VAR_6, &VAR_9);
  FUNC_1(VAR_14);

  VAR_13->i_atime = VAR_13->i_mtime = FUNC_5(VAR_13);
  if ((VAR_12 > 0) && (VAR_9))
   VAR_11 = 0;
  else if (VAR_12 < 0)
   VAR_11 = VAR_12;
  else
   VAR_11 = -VAR_0;
 } else {
  FUNC_2(VAR_2, "No writable handle for write page rc=%d\n", VAR_11);
  if (!FUNC_6(VAR_11))
   VAR_11 = -VAR_1;
 }

 FUNC_8(VAR_5);
 return VAR_11;
}
