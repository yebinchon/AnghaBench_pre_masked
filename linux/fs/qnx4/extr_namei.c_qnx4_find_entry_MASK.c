
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qnx4_inode_entry {int dummy; } ;
struct inode {unsigned long i_size; int i_sb; } ;
struct buffer_head {unsigned long b_size; scalar_t__ b_data; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (struct buffer_head*) ;
 unsigned long FUNC_1 (struct inode*,unsigned long) ;
 scalar_t__ FUNC_2 (int,char const*,struct buffer_head*,unsigned long*) ;
 struct buffer_head* FUNC_3 (int ,unsigned long) ;

__attribute__((used)) static struct buffer_head *FUNC_4(int VAR_3, struct inode *VAR_4,
    const char *VAR_5, struct qnx4_inode_entry **VAR_6, int *VAR_7)
{
 unsigned long VAR_8, VAR_9, VAR_10;
 struct buffer_head *VAR_11;

 *VAR_6 = ((void*)0);
 VAR_11 = ((void*)0);
 VAR_8 = VAR_9 = VAR_10 = 0;
 while (VAR_10 * VAR_0 + VAR_9 < VAR_4->i_size) {
  if (!VAR_11) {
   VAR_8 = FUNC_1(VAR_4, VAR_10);
   if (VAR_8)
    VAR_11 = FUNC_3(VAR_4->i_sb, VAR_8);
   if (!VAR_11) {
    VAR_10++;
    continue;
   }
  }
  *VAR_6 = (struct qnx4_inode_entry *) (VAR_11->b_data + VAR_9);
  if (FUNC_2(VAR_3, VAR_5, VAR_11, &VAR_9)) {
   *VAR_7 = VAR_8 * VAR_2 +
       (VAR_9 / VAR_1) - 1;
   return VAR_11;
  }
  if (VAR_9 < VAR_11->b_size) {
   continue;
  }
  FUNC_0(VAR_11);
  VAR_11 = ((void*)0);
  VAR_9 = 0;
  VAR_10++;
 }
 FUNC_0(VAR_11);
 *VAR_6 = ((void*)0);
 return ((void*)0);
}
