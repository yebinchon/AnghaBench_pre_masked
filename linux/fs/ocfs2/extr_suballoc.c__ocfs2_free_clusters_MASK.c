
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u16 ;
struct inode {int i_sb; } ;
struct buffer_head {int dummy; } ;
typedef int handle_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,struct inode*,struct buffer_head*,int ,scalar_t__,unsigned int,void (*) (unsigned int,unsigned long*)) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct inode*,scalar_t__,scalar_t__*,int *) ;
 int FUNC_5 (int ,scalar_t__) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,unsigned int) ;
 int FUNC_8 (unsigned long long,unsigned long long,int ,unsigned int) ;

__attribute__((used)) static int FUNC_9(handle_t *VAR_0,
    struct inode *VAR_1,
    struct buffer_head *VAR_2,
    u64 VAR_3,
    unsigned int VAR_4,
    void (*VAR_5)(unsigned int VAR_6,
      unsigned long *VAR_7))
{
 int VAR_8;
 u16 VAR_9;
 u64 VAR_10;






 FUNC_0(VAR_3 != FUNC_6(VAR_1->i_sb,
    FUNC_5(VAR_1->i_sb,
        VAR_3)));


 FUNC_4(VAR_1, VAR_3, &VAR_10,
         &VAR_9);

 FUNC_8((unsigned long long)VAR_10,
   (unsigned long long)VAR_3,
   VAR_9, VAR_4);

 VAR_8 = FUNC_2(VAR_0, VAR_1, VAR_2,
        VAR_9, VAR_10,
        VAR_4, VAR_5);
 if (VAR_8 < 0) {
  FUNC_3(VAR_8);
  goto out;
 }

 FUNC_7(FUNC_1(VAR_1->i_sb),
      VAR_4);

out:
 if (VAR_8)
  FUNC_3(VAR_8);
 return VAR_8;
}
