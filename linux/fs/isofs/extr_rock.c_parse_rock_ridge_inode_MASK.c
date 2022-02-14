
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iso_directory_record {int dummy; } ;
struct inode {int i_sb; } ;
struct TYPE_2__ {int s_rock_offset; int s_rock; } ;


 TYPE_1__* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct iso_directory_record*,struct inode*,int) ;

int FUNC_2(struct iso_directory_record *VAR_2, struct inode *VAR_3,
      int VAR_4)
{
 int VAR_5 = VAR_4 ? VAR_1 : 0;
 int VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_5);





 if ((FUNC_0(VAR_3->i_sb)->s_rock_offset == -1)
     && (FUNC_0(VAR_3->i_sb)->s_rock == 2)) {
  VAR_6 = FUNC_1(VAR_2, VAR_3,
        VAR_5 | VAR_0);
 }
 return VAR_6;
}
