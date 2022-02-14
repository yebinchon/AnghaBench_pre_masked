
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ecryptfs_crypt_stat {int file_version; int flags; } ;
struct TYPE_3__ {int file_flag; int local_flag; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(struct ecryptfs_crypt_stat *VAR_1,
      char *VAR_2, int *VAR_3)
{
 int VAR_4;
 u32 VAR_5;

 VAR_5 = FUNC_1(VAR_2);
 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); VAR_4++)
  if (VAR_5 & VAR_0[VAR_4].file_flag) {
   VAR_1->flags |= VAR_0[VAR_4].local_flag;
  } else
   VAR_1->flags &= ~(VAR_0[VAR_4].local_flag);

 VAR_1->file_version = ((VAR_5 >> 24) & 0xFF);
 (*VAR_3) = 4;
}
