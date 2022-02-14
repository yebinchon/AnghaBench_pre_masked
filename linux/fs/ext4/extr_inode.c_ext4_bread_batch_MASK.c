
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef scalar_t__ ext4_lblk_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct buffer_head*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct buffer_head*) ;
 struct buffer_head* FUNC_5 (int *,struct inode*,scalar_t__,int ) ;
 int FUNC_6 (int ,int,int,struct buffer_head**) ;
 int FUNC_7 (struct buffer_head*) ;

int FUNC_8(struct inode *VAR_4, ext4_lblk_t VAR_5, int VAR_6,
       bool VAR_7, struct buffer_head **VAR_8)
{
 int VAR_9, VAR_10;

 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
  VAR_8[VAR_9] = FUNC_5(((void*)0), VAR_4, VAR_5 + VAR_9, 0 );
  if (FUNC_0(VAR_8[VAR_9])) {
   VAR_10 = FUNC_1(VAR_8[VAR_9]);
   VAR_6 = VAR_9;
   goto out_brelse;
  }
 }

 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++)

  if (VAR_8[VAR_9] && !FUNC_4(VAR_8[VAR_9]))
   FUNC_6(VAR_2, VAR_1 | VAR_3, 1,
        &VAR_8[VAR_9]);

 if (!VAR_7)
  return 0;

 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++)
  if (VAR_8[VAR_9])
   FUNC_7(VAR_8[VAR_9]);

 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
  if (VAR_8[VAR_9] && !FUNC_3(VAR_8[VAR_9])) {
   VAR_10 = -VAR_0;
   goto out_brelse;
  }
 }
 return 0;

out_brelse:
 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
  FUNC_2(VAR_8[VAR_9]);
  VAR_8[VAR_9] = ((void*)0);
 }
 return VAR_10;
}
