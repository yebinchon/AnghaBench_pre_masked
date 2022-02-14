
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_blocksize; } ;
struct inode {struct super_block* i_sb; } ;
struct buffer_head {int b_data; } ;
typedef scalar_t__ sector_t ;
struct TYPE_2__ {scalar_t__ sec_per_clus; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 TYPE_1__* FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct buffer_head**,int) ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (struct buffer_head*,struct inode*) ;
 int FUNC_7 (int ,int ,int ) ;
 struct buffer_head* FUNC_8 (struct super_block*,scalar_t__) ;
 int FUNC_9 (struct buffer_head*) ;
 int FUNC_10 (struct buffer_head*) ;

__attribute__((used)) static int FUNC_11(struct inode *VAR_1, sector_t VAR_2, int VAR_3,
         struct buffer_head **VAR_4, int VAR_5)
{
 struct super_block *VAR_6 = VAR_1->i_sb;
 sector_t VAR_7 = VAR_2 + FUNC_1(VAR_6)->sec_per_clus;
 int VAR_8, VAR_9, VAR_10;


 VAR_2 += VAR_3;
 VAR_10 = VAR_3;
 while (VAR_2 < VAR_7) {
  VAR_4[VAR_10] = FUNC_8(VAR_6, VAR_2);
  if (!VAR_4[VAR_10]) {
   VAR_8 = -VAR_0;
   goto error;
  }

  FUNC_5(VAR_4[VAR_10]);
  FUNC_7(VAR_4[VAR_10]->b_data, 0, VAR_6->s_blocksize);
  FUNC_9(VAR_4[VAR_10]);
  FUNC_10(VAR_4[VAR_10]);
  FUNC_6(VAR_4[VAR_10], VAR_1);

  VAR_10++;
  VAR_2++;
  if (VAR_10 == VAR_5) {
   if (FUNC_0(VAR_1)) {
    VAR_8 = FUNC_4(VAR_4, VAR_10);
    if (VAR_8)
     goto error;
   }
   for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++)
    FUNC_3(VAR_4[VAR_9]);
   VAR_10 = 0;
  }
 }
 if (FUNC_0(VAR_1)) {
  VAR_8 = FUNC_4(VAR_4, VAR_10);
  if (VAR_8)
   goto error;
 }
 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++)
  FUNC_3(VAR_4[VAR_9]);

 return 0;

error:
 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++)
  FUNC_2(VAR_4[VAR_9]);
 return VAR_8;
}
