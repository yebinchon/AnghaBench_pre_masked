
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef void* sysv_zone_t ;
struct inode {TYPE_2__* i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
struct TYPE_8__ {int s_blocksize; } ;
struct TYPE_7__ {void* key; struct buffer_head* bh; void** p; } ;
typedef TYPE_1__ Indirect ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (int ,void*) ;
 int FUNC_3 (struct buffer_head*,struct inode*) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (scalar_t__,int ,int) ;
 struct buffer_head* FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (struct buffer_head*) ;
 int FUNC_8 (TYPE_2__*,void*) ;
 void* FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (struct buffer_head*) ;

__attribute__((used)) static int FUNC_11(struct inode *VAR_1,
   int VAR_2,
   int *VAR_3,
   Indirect *VAR_4)
{
 int VAR_5 = VAR_1->i_sb->s_blocksize;
 int VAR_6 = 0;
 int VAR_7;

 VAR_4[0].key = FUNC_9(VAR_1->i_sb);
 if (VAR_4[0].key) for (VAR_6 = 1; VAR_6 < VAR_2; VAR_6++) {
  struct buffer_head *VAR_8;
  int VAR_9;

  VAR_4[VAR_6].key = FUNC_9(VAR_1->i_sb);
  if (!VAR_4[VAR_6].key)
   break;




  VAR_9 = FUNC_2(FUNC_0(VAR_1->i_sb), VAR_4[VAR_6-1].key);
  VAR_8 = FUNC_6(VAR_1->i_sb, VAR_9);
  FUNC_4(VAR_8);
  FUNC_5(VAR_8->b_data, 0, VAR_5);
  VAR_4[VAR_6].bh = VAR_8;
  VAR_4[VAR_6].p = (sysv_zone_t*) VAR_8->b_data + VAR_3[VAR_6];
  *VAR_4[VAR_6].p = VAR_4[VAR_6].key;
  FUNC_7(VAR_8);
  FUNC_10(VAR_8);
  FUNC_3(VAR_8, VAR_1);
 }
 if (VAR_6 == VAR_2)
  return 0;


 for (VAR_7 = 1; VAR_7 < VAR_6; VAR_7++)
  FUNC_1(VAR_4[VAR_7].bh);
 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
  FUNC_8(VAR_1->i_sb, VAR_4[VAR_7].key);
 return -VAR_0;
}
