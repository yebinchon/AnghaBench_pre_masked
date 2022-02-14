
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {TYPE_1__* i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;
typedef scalar_t__ __le32 ;
struct TYPE_2__ {int s_blocksize; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (int *,struct inode*,int *,int ,int,int) ;
 struct buffer_head* FUNC_3 (TYPE_1__*,int ,int ) ;
 int FUNC_4 (int *,struct inode*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct buffer_head*) ;

__attribute__((used)) static int FUNC_7(handle_t *VAR_2,
    struct inode *VAR_3, __le32 VAR_4)
{
 int VAR_5;
 __le32 *VAR_6;
 struct buffer_head *VAR_7;
 unsigned long VAR_8 = VAR_3->i_sb->s_blocksize >> 2;

 VAR_7 = FUNC_3(VAR_3->i_sb, FUNC_5(VAR_4), 0);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 VAR_6 = (__le32 *)VAR_7->b_data;
 for (VAR_5 = 0; VAR_5 < VAR_8; VAR_5++) {
  if (VAR_6[VAR_5]) {
   FUNC_4(VAR_2, VAR_3);
   FUNC_2(VAR_2, VAR_3, ((void*)0),
      FUNC_5(VAR_6[VAR_5]), 1,
      VAR_1 |
      VAR_0);
  }
 }
 FUNC_6(VAR_7);
 FUNC_4(VAR_2, VAR_3);
 FUNC_2(VAR_2, VAR_3, ((void*)0), FUNC_5(VAR_4), 1,
    VAR_1 |
    VAR_0);
 return 0;
}
