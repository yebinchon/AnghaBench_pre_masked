
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct ecryptfs_crypt_stat {int flags; scalar_t__ file_version; } ;
struct TYPE_3__ {int local_flag; int file_flag; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int,char*) ;

void FUNC_2(char *VAR_1,
         struct ecryptfs_crypt_stat *VAR_2,
         size_t *VAR_3)
{
 u32 VAR_4 = 0;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_0); VAR_5++)
  if (VAR_2->flags & VAR_0[VAR_5].local_flag)
   VAR_4 |= VAR_0[VAR_5].file_flag;

 VAR_4 |= ((((u8)VAR_2->file_version) << 24) & 0xFF000000);
 FUNC_1(VAR_4, VAR_1);
 (*VAR_3) = 4;
}
