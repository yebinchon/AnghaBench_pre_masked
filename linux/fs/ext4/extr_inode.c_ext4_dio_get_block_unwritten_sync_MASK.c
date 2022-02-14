
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef int sector_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct inode*,int ,struct buffer_head*,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (struct inode*,int ) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_2,
  sector_t VAR_3, struct buffer_head *VAR_4, int VAR_5)
{
 int VAR_6;


 FUNC_0(FUNC_3());

 VAR_6 = FUNC_2(VAR_2, VAR_3, VAR_4,
       VAR_0);






 if (!VAR_6 && FUNC_1(VAR_4))
  FUNC_4(VAR_2, VAR_1);

 return VAR_6;
}
