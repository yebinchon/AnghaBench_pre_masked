
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctlr_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ctlr_info*,unsigned char*,int,unsigned char*,int) ;
 int FUNC_1 (struct ctlr_info*,unsigned char*,int) ;
 int FUNC_2 (unsigned char*) ;
 unsigned char* FUNC_3 (int,int ) ;
 int FUNC_4 (unsigned char*,unsigned char*,int) ;

__attribute__((used)) static int FUNC_5(struct ctlr_info *VAR_4, unsigned char *VAR_5,
 unsigned char *VAR_6, int VAR_7, int VAR_8)
{
 int VAR_9;
 unsigned char *VAR_10;


 if (!FUNC_1(VAR_4, VAR_5, VAR_2))
  return 1;

 VAR_10 = FUNC_3(64, VAR_1);
 if (!VAR_10)
  return -VAR_0;

 VAR_9 = FUNC_0(VAR_4, VAR_5, VAR_3 |
     VAR_2, VAR_10, 64);
 if (VAR_9 == 0) {
  if (VAR_8 > 16)
   VAR_8 = 16;
  FUNC_4(VAR_6, &VAR_10[8], VAR_8);
 }

 FUNC_2(VAR_10);

 return VAR_9;
}
