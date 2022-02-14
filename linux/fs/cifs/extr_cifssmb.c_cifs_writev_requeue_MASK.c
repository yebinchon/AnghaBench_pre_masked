
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct inode {int i_mapping; } ;
struct cifs_writedata {unsigned int bytes; int nr_pages; unsigned int pagesz; unsigned int tailsz; int refcount; int * pages; TYPE_4__* cfile; int pid; int offset; int sync_mode; } ;
struct TCP_Server_Info {TYPE_2__* ops; } ;
struct TYPE_8__ {int pid; int tlink; int dentry; } ;
struct TYPE_7__ {TYPE_1__* ses; } ;
struct TYPE_6__ {unsigned int (* wp_retry_size ) (struct inode*) ;int (* async_writev ) (struct cifs_writedata*,int ) ;} ;
struct TYPE_5__ {struct TCP_Server_Info* server; } ;


 int FUNC_0 (struct inode*) ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ,int,TYPE_4__**) ;
 struct cifs_writedata* FUNC_5 (unsigned int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int ) ;
 struct inode* FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 unsigned int FUNC_15 (struct inode*) ;
 int FUNC_16 (struct cifs_writedata*,int ) ;
 TYPE_3__* FUNC_17 (int ) ;
 int FUNC_18 (int ) ;

__attribute__((used)) static void
FUNC_19(struct cifs_writedata *VAR_7)
{
 int VAR_8, VAR_9 = 0;
 struct inode *VAR_10 = FUNC_7(VAR_7->cfile->dentry);
 struct TCP_Server_Info *VAR_11;
 unsigned int VAR_12;

 VAR_11 = FUNC_17(VAR_7->cfile->tlink)->ses->server;
 VAR_8 = 0;
 VAR_12 = VAR_7->bytes;
 do {
  struct cifs_writedata *VAR_13;
  unsigned int VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;

  VAR_16 = VAR_11->ops->wp_retry_size(VAR_10);
  if (VAR_16 < VAR_12) {
   VAR_15 = VAR_16 / VAR_3;
   if (!VAR_15) {
    VAR_9 = -VAR_2;
    break;
   }
   VAR_18 = VAR_15 * VAR_3;
   VAR_17 = VAR_3;
  } else {
   VAR_15 = FUNC_1(VAR_12, VAR_3);
   VAR_18 = VAR_12;
   VAR_17 = VAR_12 - (VAR_15 - 1) * VAR_3;
  }

  VAR_13 = FUNC_5(VAR_15, VAR_6);
  if (!VAR_13) {
   VAR_9 = -VAR_1;
   break;
  }

  for (VAR_14 = 0; VAR_14 < VAR_15; VAR_14++) {
   VAR_13->pages[VAR_14] = VAR_7->pages[VAR_8 + VAR_14];
   FUNC_11(VAR_13->pages[VAR_14]);
   FUNC_6(VAR_13->pages[VAR_14]);
  }

  VAR_13->sync_mode = VAR_7->sync_mode;
  VAR_13->nr_pages = VAR_15;
  VAR_13->offset = FUNC_13(VAR_13->pages[0]);
  VAR_13->pagesz = VAR_3;
  VAR_13->tailsz = VAR_17;
  VAR_13->bytes = VAR_18;

  VAR_9 = FUNC_4(FUNC_0(VAR_10), 0,
         &VAR_13->cfile);
  if (!VAR_13->cfile) {
   FUNC_3(VAR_4, "No writable handle to retry writepages rc=%d\n",
     VAR_9);
   if (!FUNC_9(VAR_9))
    VAR_9 = -VAR_0;
  } else {
   VAR_13->pid = VAR_13->cfile->pid;
   VAR_9 = VAR_11->ops->async_writev(VAR_13,
             VAR_5);
  }

  for (VAR_14 = 0; VAR_14 < VAR_15; VAR_14++) {
   FUNC_18(VAR_13->pages[VAR_14]);
   if (VAR_9 != 0 && !FUNC_9(VAR_9)) {
    FUNC_2(VAR_13->pages[VAR_14]);
    FUNC_8(VAR_13->pages[VAR_14]);
    FUNC_14(VAR_13->pages[VAR_14]);
   }
  }

  if (VAR_9) {
   FUNC_10(&VAR_13->refcount, VAR_5);
   if (FUNC_9(VAR_9))
    continue;
   VAR_8 += VAR_15;
   break;
  }

  VAR_12 -= VAR_18;
  VAR_8 += VAR_15;
 } while (VAR_8 < VAR_7->nr_pages);


 for (; VAR_8 < VAR_7->nr_pages; VAR_8++) {
  FUNC_2(VAR_7->pages[VAR_8]);
  FUNC_8(VAR_7->pages[VAR_8]);
  FUNC_14(VAR_7->pages[VAR_8]);
 }

 if (VAR_9 != 0 && !FUNC_9(VAR_9))
  FUNC_12(VAR_10->i_mapping, VAR_9);
 FUNC_10(&VAR_7->refcount, VAR_5);
}
