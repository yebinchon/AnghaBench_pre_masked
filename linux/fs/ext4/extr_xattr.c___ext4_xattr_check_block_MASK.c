
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct buffer_head {scalar_t__ b_blocknr; scalar_t__ b_data; scalar_t__ b_size; } ;
struct TYPE_2__ {scalar_t__ h_magic; scalar_t__ h_blocks; } ;


 int FUNC_0 (struct buffer_head*) ;
 TYPE_1__* FUNC_1 (struct buffer_head*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct inode*,char const*,unsigned int,int ,char*,unsigned long long) ;
 scalar_t__ FUNC_3 (struct buffer_head*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct inode*,struct buffer_head*) ;
 int FUNC_6 (int ,scalar_t__,scalar_t__) ;
 int FUNC_7 (struct buffer_head*) ;

__attribute__((used)) static inline int
FUNC_8(struct inode *VAR_3, struct buffer_head *VAR_4,
    const char *VAR_5, unsigned int VAR_6)
{
 int VAR_7 = -VAR_1;

 if (FUNC_1(VAR_4)->h_magic != FUNC_4(VAR_2) ||
     FUNC_1(VAR_4)->h_blocks != FUNC_4(1))
  goto errout;
 if (FUNC_3(VAR_4))
  return 0;

 VAR_7 = -VAR_0;
 if (!FUNC_5(VAR_3, VAR_4))
  goto errout;
 VAR_7 = FUNC_6(FUNC_0(VAR_4), VAR_4->b_data + VAR_4->b_size,
      VAR_4->b_data);
errout:
 if (VAR_7)
  FUNC_2(VAR_3, VAR_5, VAR_6, 0,
       "corrupted xattr block %llu",
       (unsigned long long) VAR_4->b_blocknr);
 else
  FUNC_7(VAR_4);
 return VAR_7;
}
