
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct object_info {unsigned int name_len; char* name; int attr; int loadaddr; } ;
struct adfs_dir {int sb; } ;
struct TYPE_2__ {scalar_t__ s_ftsuffix; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int) ;

void FUNC_3(struct adfs_dir *VAR_2, struct object_info *VAR_3)
{
 unsigned int VAR_4, VAR_5;
 for (VAR_5 = VAR_4 = 0; VAR_5 < VAR_3->name_len; VAR_5++)
  if (VAR_3->name[VAR_5] == '/') {
   VAR_3->name[VAR_5] = '.';
   VAR_4++;
  }

 if (VAR_3->name_len <= 2 && VAR_4 == VAR_3->name_len)
  VAR_3->name[0] = '^';





 if (!(VAR_3->attr & VAR_1) && FUNC_0(VAR_2->sb)->s_ftsuffix) {
  u16 VAR_6 = FUNC_1(VAR_3->loadaddr);

  if (VAR_6 != VAR_0) {
   VAR_3->name[VAR_3->name_len++] = ',';
   VAR_3->name[VAR_3->name_len++] = FUNC_2(VAR_6 >> 8);
   VAR_3->name[VAR_3->name_len++] = FUNC_2(VAR_6 >> 4);
   VAR_3->name[VAR_3->name_len++] = FUNC_2(VAR_6 >> 0);
  }
 }
}
