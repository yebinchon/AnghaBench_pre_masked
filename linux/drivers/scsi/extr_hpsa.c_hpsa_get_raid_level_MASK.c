
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctlr_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ctlr_info*,unsigned char*,int,unsigned char*,int) ;
 int FUNC_1 (struct ctlr_info*,unsigned char*,int) ;
 int FUNC_2 (unsigned char*) ;
 unsigned char* FUNC_3 (int,int ) ;

__attribute__((used)) static void FUNC_4(struct ctlr_info *VAR_4,
 unsigned char *VAR_5, unsigned char *VAR_6)
{
 int VAR_7;
 unsigned char *VAR_8;

 *VAR_6 = VAR_2;
 VAR_8 = FUNC_3(64, VAR_0);
 if (!VAR_8)
  return;

 if (!FUNC_1(VAR_4, VAR_5,
  VAR_1))
  goto exit;

 VAR_7 = FUNC_0(VAR_4, VAR_5, VAR_3 |
  VAR_1, VAR_8, 64);

 if (VAR_7 == 0)
  *VAR_6 = VAR_8[8];
 if (*VAR_6 > VAR_2)
  *VAR_6 = VAR_2;
exit:
 FUNC_2(VAR_8);
 return;
}
