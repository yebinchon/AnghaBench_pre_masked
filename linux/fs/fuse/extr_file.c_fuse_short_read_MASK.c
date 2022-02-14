
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct inode {int dummy; } ;
struct fuse_conn {scalar_t__ writeback_cache; } ;
struct fuse_args_pages {int num_pages; int * pages; } ;
typedef scalar_t__ loff_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inode*,scalar_t__,int ) ;
 struct fuse_conn* FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,size_t,int) ;

__attribute__((used)) static void FUNC_4(struct inode *VAR_2, u64 VAR_3, size_t VAR_4,
       struct fuse_args_pages *VAR_5)
{
 struct fuse_conn *VAR_6 = FUNC_1(VAR_2);

 if (VAR_6->writeback_cache) {





  int VAR_7;
  int VAR_8 = VAR_4 >> VAR_0;
  size_t VAR_9 = VAR_4 & (VAR_1 - 1);

  for (VAR_7 = VAR_8; VAR_7 < VAR_5->num_pages; VAR_7++) {
   FUNC_3(VAR_5->pages[VAR_7], VAR_9, VAR_1);
   VAR_9 = 0;
  }
 } else {
  loff_t VAR_10 = FUNC_2(VAR_5->pages[0]) + VAR_4;
  FUNC_0(VAR_2, VAR_10, VAR_3);
 }
}
