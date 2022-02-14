
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ubifs_info {int lsave_cnt; int main_first; int leb_cnt; int* lsave; int lsave_sz; int lnum_bits; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ubifs_info const*,void*,int ) ;
 int FUNC_1 (struct ubifs_info const*,int **,int*,int ) ;
 int FUNC_2 (struct ubifs_info const*,int **,int*,int ) ;

__attribute__((used)) static int FUNC_3(const struct ubifs_info *VAR_3, void *VAR_4)
{
 uint8_t *VAR_5 = VAR_4 + VAR_1;
 int VAR_6, VAR_7 = 0, VAR_8;

 VAR_8 = FUNC_1(VAR_3, &VAR_5, &VAR_7, VAR_2);
 if (VAR_8)
  return VAR_8;
 for (VAR_6 = 0; VAR_6 < VAR_3->lsave_cnt; VAR_6++) {
  int VAR_9 = FUNC_2(VAR_3, &VAR_5, &VAR_7, VAR_3->lnum_bits);

  if (VAR_9 < VAR_3->main_first || VAR_9 >= VAR_3->leb_cnt)
   return -VAR_0;
  VAR_3->lsave[VAR_6] = VAR_9;
 }
 VAR_8 = FUNC_0(VAR_3, VAR_4, VAR_3->lsave_sz);
 return VAR_8;
}
