
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct dx_node {scalar_t__ entries; } ;
struct dx_frame {scalar_t__ at; scalar_t__ entries; struct buffer_head* bh; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int __u32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 struct buffer_head* FUNC_6 (struct inode*,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_1, __u32 VAR_2,
     struct dx_frame *VAR_3,
     struct dx_frame *VAR_4,
     __u32 *VAR_5)
{
 struct dx_frame *VAR_6;
 struct buffer_head *VAR_7;
 int VAR_8 = 0;
 __u32 VAR_9;

 VAR_6 = VAR_3;







 while (1) {
  if (++(VAR_6->at) < VAR_6->entries + FUNC_4(VAR_6->entries))
   break;
  if (VAR_6 == VAR_4)
   return 0;
  VAR_8++;
  VAR_6--;
 }
 VAR_9 = FUNC_5(VAR_6->at);
 if (VAR_5)
  *VAR_5 = VAR_9;
 if ((VAR_2 & 1) == 0) {
  if ((VAR_9 & ~1) != VAR_2)
   return 0;
 }




 while (VAR_8--) {
  VAR_7 = FUNC_6(VAR_1, FUNC_3(VAR_6->at), VAR_0);
  if (FUNC_0(VAR_7))
   return FUNC_1(VAR_7);
  VAR_6++;
  FUNC_2(VAR_6->bh);
  VAR_6->bh = VAR_7;
  VAR_6->at = VAR_6->entries = ((struct dx_node *) VAR_7->b_data)->entries;
 }
 return 1;
}
