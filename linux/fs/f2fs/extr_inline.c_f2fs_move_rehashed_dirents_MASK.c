
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {scalar_t__ i_inline_xattr_size; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct inode*) ;
 int VAR_3 ;
 int FUNC_3 (struct inode*,int ) ;
 int FUNC_4 (struct inode*,void*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*,int ) ;
 int FUNC_7 (struct inode*,int ) ;
 void* FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (struct page*,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct inode*,struct page*,int ) ;
 int FUNC_12 (struct page*,int ,int,int) ;
 int FUNC_13 (void*) ;
 int FUNC_14 (struct page*) ;
 int FUNC_15 (void*,void*,int ) ;
 int FUNC_16 (struct page*) ;
 int FUNC_17 (struct inode*) ;
 int FUNC_18 (struct page*) ;

__attribute__((used)) static int FUNC_19(struct inode *VAR_4, struct page *VAR_5,
       void *VAR_6)
{
 void *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_8(FUNC_1(VAR_4),
    FUNC_2(VAR_4), VAR_2);
 if (!VAR_7) {
  FUNC_9(VAR_5, 1);
  return -VAR_0;
 }

 FUNC_15(VAR_7, VAR_6, FUNC_2(VAR_4));
 FUNC_11(VAR_4, VAR_5, 0);

 FUNC_18(VAR_5);

 VAR_8 = FUNC_4(VAR_4, VAR_7);
 if (VAR_8)
  goto recover;

 FUNC_14(VAR_5);

 FUNC_17(VAR_4);
 FUNC_3(VAR_4, VAR_1);





 if (!FUNC_10(FUNC_1(VAR_4)) &&
   !FUNC_5(VAR_4))
  FUNC_0(VAR_4)->i_inline_xattr_size = 0;

 FUNC_13(VAR_7);
 return 0;
recover:
 FUNC_14(VAR_5);
 FUNC_12(VAR_5, VAR_3, 1, 1);
 FUNC_15(VAR_6, VAR_7, FUNC_2(VAR_4));
 FUNC_6(VAR_4, 0);
 FUNC_7(VAR_4, FUNC_2(VAR_4));
 FUNC_16(VAR_5);
 FUNC_9(VAR_5, 1);

 FUNC_13(VAR_7);
 return VAR_8;
}
