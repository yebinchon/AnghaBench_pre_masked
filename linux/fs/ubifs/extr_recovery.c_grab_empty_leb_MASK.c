
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {int gc_lnum; int bi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct ubifs_info*,int,int ,int ,int ,int ,int ) ;
 int FUNC_2 (struct ubifs_info*,int *) ;
 int FUNC_3 (struct ubifs_info*) ;
 int FUNC_4 (struct ubifs_info*,char*) ;
 int FUNC_5 (struct ubifs_info*) ;
 int FUNC_6 (struct ubifs_info*) ;

__attribute__((used)) static int FUNC_7(struct ubifs_info *VAR_2)
{
 int VAR_3, VAR_4;
 VAR_3 = FUNC_5(VAR_2);
 if (VAR_3 < 0) {
  FUNC_4(VAR_2, "could not find an empty LEB");
  FUNC_3(VAR_2);
  FUNC_2(VAR_2, &VAR_2->bi);
  return VAR_3;
 }


 VAR_4 = FUNC_1(VAR_2, VAR_3, VAR_1, VAR_1, 0,
      VAR_0, 0);
 if (VAR_4)
  return VAR_4;

 VAR_2->gc_lnum = VAR_3;
 FUNC_0("found empty LEB %d, run commit", VAR_3);

 return FUNC_6(VAR_2);
}
