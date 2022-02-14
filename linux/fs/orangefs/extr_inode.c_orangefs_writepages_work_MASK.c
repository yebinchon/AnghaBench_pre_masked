
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct writeback_control {int dummy; } ;
struct orangefs_writepages {int npages; size_t off; size_t len; TYPE_1__** pages; int gid; int uid; TYPE_7__* bv; } ;
struct orangefs_write_range {int gid; int uid; } ;
struct iov_iter {int dummy; } ;
struct inode {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef size_t loff_t ;
struct TYPE_14__ {scalar_t__ bv_offset; scalar_t__ bv_len; TYPE_1__* bv_page; } ;
struct TYPE_13__ {struct inode* host; } ;
struct TYPE_12__ {TYPE_6__* mapping; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int) ;
 int VAR_2 ;
 int FUNC_4 (TYPE_1__*) ;
 size_t FUNC_5 (struct inode*) ;
 int FUNC_6 (struct iov_iter*,int ,TYPE_7__*,int,size_t) ;
 int FUNC_7 (struct orangefs_write_range*) ;
 int FUNC_8 (TYPE_6__*,scalar_t__) ;
 scalar_t__ FUNC_9 (size_t,scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__,size_t) ;
 scalar_t__ FUNC_11 (TYPE_1__*) ;
 scalar_t__ FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*) ;
 scalar_t__ FUNC_16 (int ,struct inode*,size_t*,struct iov_iter*,size_t,int ,struct orangefs_write_range*,int *) ;

__attribute__((used)) static int FUNC_17(struct orangefs_writepages *VAR_3,
    struct writeback_control *VAR_4)
{
 struct inode *VAR_5 = VAR_3->pages[0]->mapping->host;
 struct orangefs_write_range *VAR_6, VAR_7;
 struct iov_iter VAR_8;
 ssize_t VAR_9;
 size_t VAR_10;
 loff_t VAR_11;
 int VAR_12;

 VAR_10 = FUNC_5(VAR_5);

 for (VAR_12 = 0; VAR_12 < VAR_3->npages; VAR_12++) {
  FUNC_14(VAR_3->pages[VAR_12]);
  VAR_3->bv[VAR_12].bv_page = VAR_3->pages[VAR_12];
  VAR_3->bv[VAR_12].bv_len = FUNC_10(FUNC_11(VAR_3->pages[VAR_12]) + VAR_1,
      VAR_3->off + VAR_3->len) -
      FUNC_9(VAR_3->off, FUNC_11(VAR_3->pages[VAR_12]));
  if (VAR_12 == 0)
   VAR_3->bv[VAR_12].bv_offset = VAR_3->off -
       FUNC_11(VAR_3->pages[VAR_12]);
  else
   VAR_3->bv[VAR_12].bv_offset = 0;
 }
 FUNC_6(&VAR_8, VAR_2, VAR_3->bv, VAR_3->npages, VAR_3->len);

 FUNC_3(VAR_3->off >= VAR_10);
 if (VAR_3->off + VAR_3->len > VAR_10)
  VAR_3->len = VAR_10 - VAR_3->off;

 VAR_11 = VAR_3->off;
 VAR_7.uid = VAR_3->uid;
 VAR_7.gid = VAR_3->gid;
 VAR_9 = FUNC_16(VAR_0, VAR_5, &VAR_11, &VAR_8, VAR_3->len,
     0, &VAR_7, ((void*)0));
 if (VAR_9 < 0) {
  for (VAR_12 = 0; VAR_12 < VAR_3->npages; VAR_12++) {
   FUNC_2(VAR_3->pages[VAR_12]);
   FUNC_8(VAR_3->pages[VAR_12]->mapping, VAR_9);
   if (FUNC_1(VAR_3->pages[VAR_12])) {
    VAR_6 = (struct orangefs_write_range *)
        FUNC_12(VAR_3->pages[VAR_12]);
    FUNC_0(VAR_3->pages[VAR_12]);
    FUNC_13(VAR_3->pages[VAR_12]);
    FUNC_7(VAR_6);
   }
   FUNC_4(VAR_3->pages[VAR_12]);
   FUNC_15(VAR_3->pages[VAR_12]);
  }
 } else {
  VAR_9 = 0;
  for (VAR_12 = 0; VAR_12 < VAR_3->npages; VAR_12++) {
   if (FUNC_1(VAR_3->pages[VAR_12])) {
    VAR_6 = (struct orangefs_write_range *)
        FUNC_12(VAR_3->pages[VAR_12]);
    FUNC_0(VAR_3->pages[VAR_12]);
    FUNC_13(VAR_3->pages[VAR_12]);
    FUNC_7(VAR_6);
   }
   FUNC_4(VAR_3->pages[VAR_12]);
   FUNC_15(VAR_3->pages[VAR_12]);
  }
 }
 return VAR_9;
}
