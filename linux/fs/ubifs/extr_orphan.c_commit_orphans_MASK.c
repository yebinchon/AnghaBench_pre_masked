
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {int cmt_orphans; } ;


 int FUNC_0 (struct ubifs_info*) ;
 int FUNC_1 (struct ubifs_info*) ;
 int FUNC_2 (struct ubifs_info*,int) ;
 int FUNC_3 (struct ubifs_info*,int) ;

__attribute__((used)) static int FUNC_4(struct ubifs_info *VAR_0)
{
 int VAR_1, VAR_2 = 0, VAR_3;

 FUNC_2(VAR_0, VAR_0->cmt_orphans > 0);
 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1 < VAR_0->cmt_orphans) {

  VAR_3 = FUNC_1(VAR_0);
  if (VAR_3)
   return VAR_3;
  VAR_2 = 1;
 }
 VAR_3 = FUNC_3(VAR_0, VAR_2);
 return VAR_3;
}
