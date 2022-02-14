
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct page {int dummy; } ;
struct inode {int i_size; scalar_t__ i_nlink; } ;
struct file {int dummy; } ;
struct address_space {struct inode* host; } ;
typedef int loff_t ;
struct TYPE_13__ {TYPE_1__* h_transaction; } ;
typedef TYPE_2__ handle_t ;
struct TYPE_12__ {int t_tid; } ;
struct TYPE_11__ {int i_datasync_tid; } ;


 int FUNC_0 (int) ;
 TYPE_10__* FUNC_1 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 scalar_t__ FUNC_4 (struct inode*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (struct inode*) ;
 TYPE_2__* FUNC_7 () ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,struct page*,unsigned int,unsigned int) ;
 int FUNC_10 (TYPE_2__*,struct inode*) ;
 int FUNC_11 (TYPE_2__*,struct inode*) ;
 int FUNC_12 (int *,struct inode*) ;
 int FUNC_13 (struct inode*,int ) ;
 int FUNC_14 (struct inode*) ;
 int FUNC_15 (struct inode*,int) ;
 int FUNC_16 (struct inode*) ;
 int FUNC_17 (TYPE_2__*,int ,unsigned int,unsigned int,int*,int ) ;
 int FUNC_18 (struct inode*,int,unsigned int,unsigned int,struct page*) ;
 int FUNC_19 (struct page*) ;
 int FUNC_20 (struct inode*,int,int) ;
 int FUNC_21 (struct page*) ;
 int FUNC_22 (struct inode*,int,unsigned int,unsigned int) ;
 scalar_t__ FUNC_23 (int) ;
 int FUNC_24 (struct page*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_25(struct file *VAR_3,
         struct address_space *VAR_4,
         loff_t VAR_5, unsigned VAR_6, unsigned VAR_7,
         struct page *VAR_8, void *VAR_9)
{
 handle_t *VAR_10 = FUNC_7();
 struct inode *VAR_11 = VAR_4->host;
 loff_t VAR_12 = VAR_11->i_size;
 int VAR_13 = 0, VAR_14;
 int VAR_15 = 0;
 unsigned VAR_16, VAR_17;
 int VAR_18 = 0;
 int VAR_19 = FUNC_6(VAR_11);
 bool VAR_20 = FUNC_16(VAR_11);

 FUNC_22(VAR_11, VAR_5, VAR_6, VAR_7);
 VAR_16 = VAR_5 & (VAR_1 - 1);
 VAR_17 = VAR_16 + VAR_6;

 FUNC_0(!FUNC_5(VAR_10));

 if (VAR_19) {
  VAR_13 = FUNC_18(VAR_11, VAR_5, VAR_6,
       VAR_7, VAR_8);
  if (VAR_13 < 0) {
   FUNC_24(VAR_8);
   FUNC_21(VAR_8);
   goto errout;
  }
  VAR_7 = VAR_13;
 } else if (FUNC_23(VAR_7 < VAR_6) && !FUNC_2(VAR_8)) {
  VAR_7 = 0;
  FUNC_9(VAR_10, VAR_8, VAR_16, VAR_17);
 } else {
  if (FUNC_23(VAR_7 < VAR_6))
   FUNC_9(VAR_10, VAR_8,
        VAR_16 + VAR_7, VAR_17);
  VAR_13 = FUNC_17(VAR_10, FUNC_19(VAR_8), VAR_16,
          VAR_16 + VAR_7, &VAR_15,
          VAR_2);
  if (!VAR_15)
   FUNC_3(VAR_8);
 }
 if (!VAR_20)
  VAR_18 = FUNC_15(VAR_11, VAR_5 + VAR_7);
 FUNC_13(VAR_11, VAR_0);
 FUNC_1(VAR_11)->i_datasync_tid = VAR_10->h_transaction->t_tid;
 FUNC_24(VAR_8);
 FUNC_21(VAR_8);

 if (VAR_12 < VAR_5 && !VAR_20)
  FUNC_20(VAR_11, VAR_12, VAR_5);

 if (VAR_18 || VAR_19) {
  VAR_14 = FUNC_10(VAR_10, VAR_11);
  if (!VAR_13)
   VAR_13 = VAR_14;
 }

 if (VAR_5 + VAR_6 > VAR_11->i_size && !VAR_20 && FUNC_4(VAR_11))




  FUNC_11(VAR_10, VAR_11);

errout:
 VAR_14 = FUNC_8(VAR_10);
 if (!VAR_13)
  VAR_13 = VAR_14;
 if (VAR_5 + VAR_6 > VAR_11->i_size && !VAR_20) {
  FUNC_14(VAR_11);





  if (VAR_11->i_nlink)
   FUNC_12(((void*)0), VAR_11);
 }

 return VAR_13 ? VAR_13 : VAR_7;
}
