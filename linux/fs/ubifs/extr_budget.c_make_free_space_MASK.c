
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,...) ;
 long long FUNC_1 (struct ubifs_info*) ;
 int FUNC_2 (struct ubifs_info*) ;
 int FUNC_3 (struct ubifs_info*,int ) ;
 int FUNC_4 (struct ubifs_info*) ;

__attribute__((used)) static int FUNC_5(struct ubifs_info *VAR_4)
{
 int VAR_5, VAR_6 = 0;
 long long VAR_7, VAR_8;

 do {
  VAR_7 = FUNC_1(VAR_4);




  FUNC_0("liability %lld, run write-back", VAR_7);
  FUNC_3(VAR_4, VAR_3);

  VAR_8 = FUNC_1(VAR_4);
  if (VAR_8 < VAR_7)
   return -VAR_0;

  FUNC_0("new liability %lld (not shrunk)", VAR_8);


  FUNC_0("Run GC");
  VAR_5 = FUNC_2(VAR_4);
  if (!VAR_5)
   return -VAR_0;

  if (VAR_5 != -VAR_0 && VAR_5 != -VAR_1)

   return VAR_5;

  FUNC_0("Run commit (retries %d)", VAR_6);
  VAR_5 = FUNC_4(VAR_4);
  if (VAR_5)
   return VAR_5;
 } while (VAR_6++ < VAR_2);

 return -VAR_1;
}
