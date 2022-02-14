
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ m_len; } ;
struct mpage_da_data {TYPE_1__ map; int do_map; struct inode* inode; } ;
struct inode {int i_blkbits; } ;
struct buffer_head {int b_page; struct buffer_head* b_this_page; } ;
typedef scalar_t__ ext4_lblk_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct buffer_head*) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct mpage_da_data*,scalar_t__,struct buffer_head*) ;
 int FUNC_6 (struct mpage_da_data*,int ) ;

__attribute__((used)) static int FUNC_7(struct mpage_da_data *VAR_1,
       struct buffer_head *VAR_2,
       struct buffer_head *VAR_3,
       ext4_lblk_t VAR_4)
{
 struct inode *VAR_5 = VAR_1->inode;
 int VAR_6;
 ext4_lblk_t VAR_7 = (FUNC_4(VAR_5) + FUNC_3(VAR_5) - 1)
       >> VAR_5->i_blkbits;

 if (FUNC_2(VAR_5))
  VAR_7 = VAR_0;

 do {
  FUNC_0(FUNC_1(VAR_3));

  if (VAR_4 >= VAR_7 || !FUNC_5(VAR_1, VAR_4, VAR_3)) {

   if (VAR_1->map.m_len)
    return 0;

   if (!VAR_1->do_map)
    return 0;

   break;
  }
 } while (VAR_4++, (VAR_3 = VAR_3->b_this_page) != VAR_2);

 if (VAR_1->map.m_len == 0) {
  VAR_6 = FUNC_6(VAR_1, VAR_2->b_page);
  if (VAR_6 < 0)
   return VAR_6;
 }
 return VAR_4 < VAR_7;
}
