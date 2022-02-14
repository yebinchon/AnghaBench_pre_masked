
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int ntfschar ;
struct TYPE_4__ {int file_name_length; int file_name; } ;
typedef int IGNORE_CASE_BOOL ;
typedef TYPE_1__ FILE_NAME_ATTR ;


 int FUNC_0 (int *,int ,int *,int ,int const,int const,int const*,int const) ;

int FUNC_1(FILE_NAME_ATTR *VAR_0,
  FILE_NAME_ATTR *VAR_1,
  const int VAR_2, const IGNORE_CASE_BOOL VAR_3,
  const ntfschar *VAR_4, const u32 VAR_5)
{
 return FUNC_0((ntfschar*)&VAR_0->file_name,
   VAR_0->file_name_length,
   (ntfschar*)&VAR_1->file_name,
   VAR_1->file_name_length,
   VAR_2, VAR_3, VAR_4, VAR_5);
}
