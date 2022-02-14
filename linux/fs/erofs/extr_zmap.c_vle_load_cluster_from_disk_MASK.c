
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct z_erofs_maprecorder {int inode; } ;
struct TYPE_2__ {unsigned int datalayout; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;
 unsigned int const VAR_1 ;
 unsigned int const VAR_2 ;
 int FUNC_1 (struct z_erofs_maprecorder*,unsigned int) ;
 int FUNC_2 (struct z_erofs_maprecorder*,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct z_erofs_maprecorder *VAR_3,
          unsigned int VAR_4)
{
 const unsigned int VAR_5 = FUNC_0(VAR_3->inode)->datalayout;

 if (VAR_5 == VAR_2)
  return FUNC_2(VAR_3, VAR_4);

 if (VAR_5 == VAR_1)
  return FUNC_1(VAR_3, VAR_4);

 return -VAR_0;
}
