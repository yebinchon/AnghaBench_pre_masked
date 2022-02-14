
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct inode*,struct buffer_head*) ;
 int FUNC_3 (struct inode*,int ,int,struct buffer_head**,int,int ) ;
 scalar_t__ FUNC_4 (struct inode*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_3, u64 VAR_4,
    struct buffer_head **VAR_5, int VAR_6)
{
 int VAR_7 = 0;
 struct buffer_head *VAR_8 = *VAR_5;

 VAR_7 = FUNC_3(VAR_3, VAR_4, 1, &VAR_8, VAR_6,
        VAR_2);
 if (VAR_7) {
  FUNC_1(VAR_7);
  goto out;
 }

 if (!(VAR_6 & VAR_1) &&
     FUNC_4(VAR_3)) {
  VAR_7 = FUNC_2(VAR_3, VAR_8);
  if (VAR_7) {
   if (!*VAR_5)
    FUNC_0(VAR_8);
   FUNC_1(VAR_7);
   goto out;
  }
 }


 if (!*VAR_5)
  *VAR_5 = VAR_8;

out:
 return VAR_7 ? -VAR_0 : 0;
}
