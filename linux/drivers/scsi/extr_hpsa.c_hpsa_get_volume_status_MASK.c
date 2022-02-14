
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctlr_info {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ctlr_info*,unsigned char*,int,unsigned char*,scalar_t__) ;
 int FUNC_1 (struct ctlr_info*,unsigned char*,int) ;
 int FUNC_2 (unsigned char*) ;
 unsigned char* FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(struct ctlr_info *VAR_5,
     unsigned char VAR_6[])
{
 int VAR_7;
 int VAR_8;
 int VAR_9;
 unsigned char *VAR_10;

 VAR_10 = FUNC_3(64, VAR_0);
 if (!VAR_10)
  return VAR_3;


 if (!FUNC_1(VAR_5, VAR_6, VAR_2))
  goto exit_failed;


 VAR_7 = FUNC_0(VAR_5, VAR_6, VAR_4 | VAR_2,
     VAR_10, VAR_1);
 if (VAR_7 != 0)
  goto exit_failed;
 VAR_9 = VAR_10[3];


 VAR_7 = FUNC_0(VAR_5, VAR_6, VAR_4 | VAR_2,
     VAR_10, VAR_9 + VAR_1);
 if (VAR_7 != 0)
  goto exit_failed;
 VAR_8 = VAR_10[4];

 FUNC_2(VAR_10);
 return VAR_8;
exit_failed:
 FUNC_2(VAR_10);
 return VAR_3;
}
