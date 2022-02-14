
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct page {struct address_space* mapping; } ;
struct ocfs2_write_ctxt {unsigned long w_num_pages; scalar_t__ w_type; int w_target_locked; struct page** w_pages; struct page* w_target_page; } ;
struct inode {int i_sb; } ;
struct address_space {struct inode* host; } ;
typedef unsigned int loff_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_1 (struct address_space*) ;
 struct page* FUNC_2 (struct address_space*,unsigned long,int ) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct page*) ;
 unsigned int FUNC_6 (unsigned int,int ) ;
 int FUNC_7 (int) ;
 unsigned long FUNC_8 (int ,int ) ;
 unsigned long FUNC_9 (int ) ;
 int FUNC_10 (struct page*) ;
 int FUNC_11 (struct page*) ;

__attribute__((used)) static int FUNC_12(struct address_space *VAR_6,
          struct ocfs2_write_ctxt *VAR_7,
          u32 VAR_8, loff_t VAR_9,
          unsigned VAR_10, int VAR_11,
          struct page *VAR_12)
{
 int VAR_13 = 0, VAR_14;
 unsigned long VAR_15, VAR_16, VAR_17, VAR_18;
 struct inode *VAR_19 = VAR_6->host;
 loff_t VAR_20;

 VAR_16 = VAR_9 >> VAR_5;
 if (VAR_11) {
  VAR_7->w_num_pages = FUNC_9(VAR_19->i_sb);
  VAR_15 = FUNC_8(VAR_19->i_sb, VAR_8);





  VAR_20 = FUNC_6(VAR_9 + VAR_10, FUNC_4(VAR_19));
  FUNC_0(VAR_20 < 1);
  VAR_17 = ((VAR_20 - 1) >> VAR_5) + 1;
  if ((VAR_15 + VAR_7->w_num_pages) > VAR_17)
   VAR_7->w_num_pages = VAR_17 - VAR_15;
 } else {
  VAR_7->w_num_pages = 1;
  VAR_15 = VAR_16;
 }
 VAR_17 = (VAR_9 + VAR_10 - 1) >> VAR_5;

 for(VAR_14 = 0; VAR_14 < VAR_7->w_num_pages; VAR_14++) {
  VAR_18 = VAR_15 + VAR_14;

  if (VAR_18 >= VAR_16 && VAR_18 <= VAR_17 &&
      VAR_7->w_type == VAR_4) {





   FUNC_5(VAR_12);


   if (VAR_12->mapping != VAR_6) {
    FUNC_1(VAR_12->mapping);
    FUNC_10(VAR_12);
    VAR_13 = -VAR_0;
    goto out;
   }

   FUNC_3(VAR_12);
   VAR_7->w_pages[VAR_14] = VAR_12;
   VAR_7->w_target_locked = 1;
  } else if (VAR_18 >= VAR_16 && VAR_18 <= VAR_17 &&
      VAR_7->w_type == VAR_3) {

   VAR_7->w_pages[VAR_14] = ((void*)0);
   continue;
  } else {
   VAR_7->w_pages[VAR_14] = FUNC_2(VAR_6, VAR_18,
            VAR_2);
   if (!VAR_7->w_pages[VAR_14]) {
    VAR_13 = -VAR_1;
    FUNC_7(VAR_13);
    goto out;
   }
  }
  FUNC_11(VAR_7->w_pages[VAR_14]);

  if (VAR_18 == VAR_16)
   VAR_7->w_target_page = VAR_7->w_pages[VAR_14];
 }
out:
 if (VAR_13)
  VAR_7->w_target_locked = 0;
 return VAR_13;
}
