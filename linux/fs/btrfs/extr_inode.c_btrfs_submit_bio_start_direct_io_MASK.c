
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct inode {int dummy; } ;
struct bio {int dummy; } ;
typedef int blk_status_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct inode*,struct bio*,int ,int) ;

__attribute__((used)) static blk_status_t FUNC_2(void *VAR_0,
        struct bio *VAR_1, u64 VAR_2)
{
 struct inode *VAR_3 = VAR_0;
 blk_status_t VAR_4;
 VAR_4 = FUNC_1(VAR_3, VAR_1, VAR_2, 1);
 FUNC_0(VAR_4);
 return 0;
}
