
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct writeback_control {int range_start; int range_end; scalar_t__ sync_mode; scalar_t__ nr_to_write; scalar_t__ range_cyclic; } ;
struct inode {int i_sb; } ;
struct cifs_credits {int dummy; } ;
struct cifs_writedata {int refcount; int * pages; struct cifs_credits credits; struct cifsFileInfo* cfile; } ;
struct cifs_sb_info {unsigned int wsize; } ;
struct cifsFileInfo {int dummy; } ;
struct address_space {int writeback_index; struct inode* host; } ;
struct TCP_Server_Info {TYPE_2__* ops; } ;
typedef int pgoff_t ;
struct TYPE_6__ {TYPE_1__* ses; } ;
struct TYPE_5__ {int (* wait_mtu_credits ) (struct TCP_Server_Info*,unsigned int,unsigned int*,struct cifs_credits*) ;} ;
struct TYPE_4__ {struct TCP_Server_Info* server; } ;


 int FUNC_0 (struct inode*) ;
 struct cifs_sb_info* FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (struct TCP_Server_Info*,struct cifs_credits*,int ) ;
 int FUNC_4 (struct cifsFileInfo*) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (int ,int,struct cifsFileInfo**) ;
 TYPE_3__* FUNC_7 (struct cifs_sb_info*) ;
 int VAR_8 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (unsigned int) ;
 int FUNC_10 (struct address_space*,struct writeback_control*) ;
 unsigned int FUNC_11 () ;
 scalar_t__ FUNC_12 (int) ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (struct address_space*,int) ;
 int FUNC_16 (unsigned int,int) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (struct writeback_control*,int ) ;
 int FUNC_19 (struct TCP_Server_Info*,unsigned int,unsigned int*,struct cifs_credits*) ;
 int FUNC_20 (int ) ;
 struct cifs_writedata* FUNC_21 (int,struct address_space*,int,int*,unsigned int*) ;
 unsigned int FUNC_22 (struct cifs_writedata*,unsigned int,struct address_space*,struct writeback_control*,int,int*,int*,int*) ;
 int FUNC_23 (struct cifs_writedata*,unsigned int,struct address_space*,struct writeback_control*) ;

__attribute__((used)) static int FUNC_24(struct address_space *VAR_9,
      struct writeback_control *VAR_10)
{
 struct inode *VAR_11 = VAR_9->host;
 struct cifs_sb_info *VAR_12 = FUNC_1(VAR_11->i_sb);
 struct TCP_Server_Info *VAR_13;
 bool VAR_14 = 0, VAR_15 = 0, VAR_16 = 0;
 pgoff_t VAR_17, VAR_18;
 struct cifs_writedata *VAR_19;
 struct cifsFileInfo *VAR_20 = ((void*)0);
 int VAR_21 = 0;
 int VAR_22 = 0;
 unsigned int VAR_23;





 if (VAR_12->wsize < VAR_5)
  return FUNC_10(VAR_9, VAR_10);

 VAR_23 = FUNC_11();
 if (VAR_10->range_cyclic) {
  VAR_18 = VAR_9->writeback_index;
  VAR_17 = -1;
 } else {
  VAR_18 = VAR_10->range_start >> VAR_4;
  VAR_17 = VAR_10->range_end >> VAR_4;
  if (VAR_10->range_start == 0 && VAR_10->range_end == VAR_3)
   VAR_16 = 1;
  VAR_15 = 1;
 }
 VAR_13 = FUNC_7(VAR_12)->ses->server;
retry:
 while (!VAR_14 && VAR_18 <= VAR_17) {
  unsigned int VAR_24, VAR_25, VAR_26, VAR_27;
  pgoff_t VAR_28 = 0, VAR_29, VAR_30 = VAR_18;
  struct cifs_credits VAR_31;
  struct cifs_credits *VAR_32 = &VAR_31;
  int VAR_33 = 0;

  if (VAR_20)
   FUNC_4(VAR_20);

  VAR_21 = FUNC_6(FUNC_0(VAR_11), 0, &VAR_20);


  if (VAR_21)
   VAR_33 = VAR_21;

  VAR_21 = VAR_13->ops->wait_mtu_credits(VAR_13, VAR_12->wsize,
         &VAR_27, VAR_32);
  if (VAR_21 != 0) {
   VAR_14 = 1;
   break;
  }

  VAR_29 = FUNC_16((VAR_27 / VAR_5) - 1, VAR_17 - VAR_18) + 1;

  VAR_19 = FUNC_21(VAR_29, VAR_9, VAR_17, &VAR_18,
        &VAR_26);
  if (!VAR_19) {
   VAR_21 = -VAR_2;
   VAR_14 = 1;
   FUNC_3(VAR_13, VAR_32, 0);
   break;
  }

  if (VAR_26 == 0) {
   FUNC_14(&VAR_19->refcount, VAR_8);
   FUNC_3(VAR_13, VAR_32, 0);
   break;
  }

  VAR_25 = FUNC_22(VAR_19, VAR_26, VAR_9, VAR_10,
            VAR_17, &VAR_18, &VAR_28, &VAR_14);


  if (VAR_25 == 0) {
   FUNC_14(&VAR_19->refcount, VAR_8);
   FUNC_3(VAR_13, VAR_32, 0);
   continue;
  }

  VAR_19->credits = VAR_31;
  VAR_19->cfile = VAR_20;
  VAR_20 = ((void*)0);

  if (!VAR_19->cfile) {
   FUNC_5(VAR_6, "No writable handle in writepages rc=%d\n",
     VAR_33);
   if (FUNC_13(VAR_33))
    VAR_21 = VAR_33;
   else
    VAR_21 = -VAR_1;
  } else
   VAR_21 = FUNC_23(VAR_19, VAR_25, VAR_9, VAR_10);

  for (VAR_24 = 0; VAR_24 < VAR_25; ++VAR_24)
   FUNC_20(VAR_19->pages[VAR_24]);


  if (VAR_21 != 0) {
   FUNC_3(VAR_13, &VAR_19->credits, 0);
   for (VAR_24 = 0; VAR_24 < VAR_25; ++VAR_24) {
    if (FUNC_13(VAR_21))
     FUNC_18(VAR_10,
          VAR_19->pages[VAR_24]);
    else
     FUNC_2(VAR_19->pages[VAR_24]);
    FUNC_8(VAR_19->pages[VAR_24]);
    FUNC_17(VAR_19->pages[VAR_24]);
   }
   if (!FUNC_13(VAR_21))
    FUNC_15(VAR_9, VAR_21);
  }
  FUNC_14(&VAR_19->refcount, VAR_8);

  if (VAR_10->sync_mode == VAR_7 && VAR_21 == -VAR_0) {
   VAR_18 = VAR_30;
   continue;
  }


  if (FUNC_12(VAR_21)) {
   VAR_14 = 1;
   break;
  }

  if (VAR_21 != 0 && VAR_22 == 0)
   VAR_22 = VAR_21;

  VAR_10->nr_to_write -= VAR_25;
  if (VAR_10->nr_to_write <= 0)
   VAR_14 = 1;

  VAR_18 = VAR_28;
 }

 if (!VAR_15 && !VAR_14) {




  VAR_15 = 1;
  VAR_18 = 0;
  goto retry;
 }

 if (VAR_22 != 0)
  VAR_21 = VAR_22;

 if (VAR_10->range_cyclic || (VAR_16 && VAR_10->nr_to_write > 0))
  VAR_9->writeback_index = VAR_18;

 if (VAR_20)
  FUNC_4(VAR_20);
 FUNC_9(VAR_23);
 return VAR_21;
}
