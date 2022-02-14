
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ddb {int msi; int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct ddb*,int) ;
 int FUNC_1 (struct ddb*,int,int ) ;
 int FUNC_2 (int ,struct ddb*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int ,int,char*,void*) ;

__attribute__((used)) static int FUNC_5(struct ddb *VAR_12)
{
 int VAR_13;
 int VAR_14 = VAR_1;

 FUNC_1(VAR_12, 0x00000000, VAR_0);
 FUNC_1(VAR_12, 0x00000000, VAR_2);
 FUNC_1(VAR_12, 0x00000000, VAR_3);
 FUNC_1(VAR_12, 0x00000000, VAR_4);
 FUNC_1(VAR_12, 0x00000000, VAR_5);
 FUNC_1(VAR_12, 0x00000000, VAR_6);
 FUNC_1(VAR_12, 0x00000000, VAR_7);
 FUNC_1(VAR_12, 0x00000000, VAR_8);
 {
  VAR_13 = FUNC_4(FUNC_3(VAR_12->pdev, 0),
       VAR_9, VAR_14, "ddbridge",
       (void *)VAR_12);
  if (VAR_13 < 0)
   return VAR_13;
 }
 if (VAR_12->msi == 2) {
  FUNC_1(VAR_12, 0x0fffff00, VAR_0);
  FUNC_1(VAR_12, 0x0000000f, VAR_2);
 } else {
  FUNC_1(VAR_12, 0x0fffff0f, VAR_0);
  FUNC_1(VAR_12, 0x00000000, VAR_2);
 }
 return VAR_13;
}
