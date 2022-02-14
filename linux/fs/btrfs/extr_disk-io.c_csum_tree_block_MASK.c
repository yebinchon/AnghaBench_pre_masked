
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct extent_buffer {unsigned long len; struct btrfs_fs_info* fs_info; } ;
struct btrfs_fs_info {int csum_shash; } ;
struct TYPE_6__ {int tfm; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,char*,unsigned long) ;
 int FUNC_5 (struct extent_buffer*,unsigned long,int,char**,unsigned long*,unsigned long*) ;
 int FUNC_6 (int *,int ,unsigned long) ;
 unsigned long FUNC_7 (unsigned long,unsigned long) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_8(struct extent_buffer *VAR_2, u8 *VAR_3)
{
 struct btrfs_fs_info *VAR_4 = VAR_2->fs_info;
 FUNC_0(VAR_1, VAR_4->csum_shash);
 unsigned long VAR_5;
 unsigned long VAR_6;
 unsigned long VAR_7 = VAR_0;
 char *VAR_8;
 unsigned long VAR_9;
 unsigned long VAR_10;
 int VAR_11;

 VAR_1->tfm = VAR_4->csum_shash;
 FUNC_3(VAR_1);

 VAR_5 = VAR_2->len - VAR_7;

 while (VAR_5 > 0) {






  VAR_11 = FUNC_5(VAR_2, VAR_7, 32,
     &VAR_8, &VAR_9, &VAR_10);
  if (FUNC_1(VAR_11))
   return VAR_11;
  VAR_6 = FUNC_7(VAR_5, VAR_10 - (VAR_7 - VAR_9));
  FUNC_4(VAR_1, VAR_8 + VAR_7 - VAR_9, VAR_6);
  VAR_5 -= VAR_6;
  VAR_7 += VAR_6;
 }
 FUNC_6(VAR_3, 0, VAR_0);

 FUNC_2(VAR_1, VAR_3);

 return 0;
}
