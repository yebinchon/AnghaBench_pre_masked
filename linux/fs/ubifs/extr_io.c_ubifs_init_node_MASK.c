
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {int min_io_size; } ;
struct ubifs_ch {scalar_t__* padding; int sqnum; int group_type; void* len; void* magic; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (unsigned long long) ;
 unsigned long long FUNC_3 (struct ubifs_info*) ;
 int FUNC_4 (struct ubifs_info*,int) ;
 int FUNC_5 (struct ubifs_info*,void*,int) ;

void FUNC_6(struct ubifs_info *VAR_3, void *VAR_4, int VAR_5, int VAR_6)
{
 struct ubifs_ch *VAR_7 = VAR_4;
 unsigned long long VAR_8 = FUNC_3(VAR_3);

 FUNC_4(VAR_3, VAR_5 >= VAR_0);

 VAR_7->magic = FUNC_1(VAR_1);
 VAR_7->len = FUNC_1(VAR_5);
 VAR_7->group_type = VAR_2;
 VAR_7->sqnum = FUNC_2(VAR_8);
 VAR_7->padding[0] = VAR_7->padding[1] = 0;

 if (VAR_6) {
  VAR_5 = FUNC_0(VAR_5, 8);
  VAR_6 = FUNC_0(VAR_5, VAR_3->min_io_size) - VAR_5;
  FUNC_5(VAR_3, VAR_4 + VAR_5, VAR_6);
 }
}
