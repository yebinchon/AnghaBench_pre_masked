
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_dir_entry {int rec_len; } ;
struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct inode*,struct ocfs2_dir_entry*,struct buffer_head*,unsigned long) ;
 scalar_t__ FUNC_2 (int,char const*,struct ocfs2_dir_entry*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static inline int FUNC_4(struct buffer_head *VAR_0,
     struct inode *VAR_1,
     const char *VAR_2, int VAR_3,
     unsigned long VAR_4,
     char *VAR_5,
     unsigned int VAR_6,
     struct ocfs2_dir_entry **VAR_7)
{
 struct ocfs2_dir_entry *VAR_8;
 char *VAR_9, *VAR_10;
 int VAR_11;
 int VAR_12 = 0;

 VAR_10 = VAR_5;
 VAR_9 = VAR_10 + VAR_6;

 while (VAR_10 < VAR_9) {



  VAR_8 = (struct ocfs2_dir_entry *) VAR_10;

  if (VAR_10 + VAR_3 <= VAR_9 &&
      FUNC_2(VAR_3, VAR_2, VAR_8)) {

   if (!FUNC_1(VAR_1, VAR_8, VAR_0, VAR_4)) {
    VAR_12 = -1;
    goto bail;
   }
   *VAR_7 = VAR_8;
   VAR_12 = 1;
   goto bail;
  }


  VAR_11 = FUNC_0(VAR_8->rec_len);
  if (VAR_11 <= 0) {
   VAR_12 = -1;
   goto bail;
  }

  VAR_10 += VAR_11;
  VAR_4 += VAR_11;
 }

bail:
 FUNC_3(VAR_12);
 return VAR_12;
}
