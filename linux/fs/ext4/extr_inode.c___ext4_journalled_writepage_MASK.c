
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct page {scalar_t__ index; struct address_space* mapping; } ;
struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;
struct address_space {struct inode* host; } ;
struct TYPE_13__ {TYPE_1__* h_transaction; } ;
typedef TYPE_2__ handle_t ;
struct TYPE_12__ {int t_tid; } ;
struct TYPE_11__ {int i_datasync_tid; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct page*) ;
 int VAR_0 ;
 TYPE_10__* FUNC_3 (struct inode*) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (struct buffer_head*) ;
 int VAR_4 ;
 unsigned int FUNC_7 (struct inode*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (struct inode*) ;
 TYPE_2__* FUNC_10 (struct inode*,int ,int ) ;
 int FUNC_11 (TYPE_2__*) ;
 struct buffer_head* FUNC_12 (struct inode*,unsigned int,struct page*) ;
 int FUNC_13 (TYPE_2__*,struct inode*) ;
 int FUNC_14 (struct inode*,int ) ;
 int FUNC_15 (TYPE_2__*,struct buffer_head*,int ,unsigned int,int *,int ) ;
 int FUNC_16 (struct inode*) ;
 int FUNC_17 (struct page*) ;
 int FUNC_18 (struct page*) ;
 struct buffer_head* FUNC_19 (struct page*) ;
 int FUNC_20 (struct page*) ;
 int FUNC_21 (struct page*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_22(struct page *VAR_6,
           unsigned int VAR_7)
{
 struct address_space *VAR_8 = VAR_6->mapping;
 struct inode *VAR_9 = VAR_8->host;
 struct buffer_head *VAR_10 = ((void*)0);
 handle_t *VAR_11 = ((void*)0);
 int VAR_12 = 0, VAR_13 = 0;
 int VAR_14 = FUNC_9(VAR_9);
 struct buffer_head *VAR_15 = ((void*)0);

 FUNC_2(VAR_6);

 if (VAR_14) {
  FUNC_1(VAR_6->index != 0);
  FUNC_1(VAR_7 > FUNC_7(VAR_9));
  VAR_15 = FUNC_12(VAR_9, VAR_7, VAR_6);
  if (VAR_15 == ((void*)0))
   goto out;
 } else {
  VAR_10 = FUNC_19(VAR_6);
  if (!VAR_10) {
   FUNC_0();
   goto out;
  }
  FUNC_15(VAR_11, VAR_10, 0, VAR_7,
           ((void*)0), VAR_2);
 }





 FUNC_17(VAR_6);
 FUNC_21(VAR_6);

 VAR_11 = FUNC_10(VAR_9, VAR_0,
        FUNC_16(VAR_9));
 if (FUNC_4(VAR_11)) {
  VAR_12 = FUNC_5(VAR_11);
  FUNC_20(VAR_6);
  goto out_no_pagelock;
 }
 FUNC_1(!FUNC_8(VAR_11));

 FUNC_18(VAR_6);
 FUNC_20(VAR_6);
 if (VAR_6->mapping != VAR_8) {

  FUNC_11(VAR_11);
  VAR_12 = 0;
  goto out;
 }

 if (VAR_14) {
  VAR_12 = FUNC_13(VAR_11, VAR_9);
 } else {
  VAR_12 = FUNC_15(VAR_11, VAR_10, 0, VAR_7, ((void*)0),
          VAR_4);

  VAR_13 = FUNC_15(VAR_11, VAR_10, 0, VAR_7, ((void*)0),
          VAR_5);
 }
 if (VAR_12 == 0)
  VAR_12 = VAR_13;
 FUNC_3(VAR_9)->i_datasync_tid = VAR_11->h_transaction->t_tid;
 VAR_13 = FUNC_11(VAR_11);
 if (!VAR_12)
  VAR_12 = VAR_13;

 if (!FUNC_9(VAR_9))
  FUNC_15(((void*)0), VAR_10, 0, VAR_7,
           ((void*)0), VAR_3);
 FUNC_14(VAR_9, VAR_1);
out:
 FUNC_21(VAR_6);
out_no_pagelock:
 FUNC_6(VAR_15);
 return VAR_12;
}
