
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
typedef int le16 ;
struct TYPE_3__ {int usa_count; int usa_ofs; } ;
typedef TYPE_1__ NTFS_RECORD ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

void FUNC_1(NTFS_RECORD *VAR_1)
{
 le16 *VAR_2, *VAR_3;

 u16 VAR_4 = FUNC_0(VAR_1->usa_ofs);
 u16 VAR_5 = FUNC_0(VAR_1->usa_count) - 1;


 VAR_2 = (le16*)VAR_1 + VAR_4/sizeof(le16);


 VAR_3 = (le16*)VAR_1 + VAR_0/sizeof(le16) - 1;


 while (VAR_5--) {




  *VAR_3 = *(++VAR_2);


  VAR_3 += VAR_0/sizeof(le16);
 }
}
