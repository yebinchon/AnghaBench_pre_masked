
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_blkbits; } ;
struct buffer_head {int b_data; } ;


 int FUNC_0 (struct buffer_head**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct inode*,int ,int,int,struct buffer_head**) ;
 int FUNC_3 (struct buffer_head**) ;
 struct buffer_head** FUNC_4 (int,int,int ) ;
 int FUNC_5 (char*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_3, void *VAR_4, size_t VAR_5)
{
 int VAR_6 = 1 << VAR_3->i_blkbits;
 int VAR_7 = (VAR_5 + VAR_6 - 1) >> VAR_3->i_blkbits;
 int VAR_8 = (VAR_5 % VAR_6) ?: VAR_6;
 struct buffer_head *VAR_9[8];
 struct buffer_head **VAR_10 = VAR_9;
 int VAR_11, VAR_12;

 if (VAR_7 > FUNC_0(VAR_9)) {
  VAR_10 = FUNC_4(VAR_7, sizeof(*VAR_10), VAR_2);
  if (!VAR_10)
   return -VAR_1;
 }

 VAR_12 = FUNC_2(VAR_3, 0 , VAR_7,
          1 , VAR_10);
 if (VAR_12)
  goto free_bhs;

 for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++) {

  if (!VAR_10[VAR_11]) {
   VAR_12 = -VAR_0;
   goto put_bhs;
  }
  FUNC_5((char *)VAR_4 + VAR_6 * VAR_11, VAR_10[VAR_11]->b_data,
         VAR_11 < VAR_7 - 1 ? VAR_6 : VAR_8);
 }
 VAR_12 = 0;
put_bhs:
 for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++)
  FUNC_1(VAR_10[VAR_11]);
free_bhs:
 if (VAR_10 != VAR_9)
  FUNC_3(VAR_10);
 return VAR_12;
}
