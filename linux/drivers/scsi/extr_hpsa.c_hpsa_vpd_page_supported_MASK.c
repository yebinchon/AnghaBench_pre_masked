
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u8 ;
struct ctlr_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ctlr_info*,unsigned char*,int,unsigned char*,unsigned char) ;
 int FUNC_1 (unsigned char*) ;
 unsigned char* FUNC_2 (int,int ) ;

__attribute__((used)) static bool FUNC_3(struct ctlr_info *VAR_4,
 unsigned char VAR_5[], u8 VAR_6)
{
 int VAR_7;
 int VAR_8;
 int VAR_9;
 unsigned char *VAR_10, VAR_11;

 VAR_10 = FUNC_2(256, VAR_0);
 if (!VAR_10)
  return 0;


 VAR_7 = FUNC_0(VAR_4, VAR_5,
    VAR_3 | VAR_2,
    VAR_10, VAR_1);
 if (VAR_7 != 0)
  goto exit_unsupported;
 VAR_9 = VAR_10[3];
 if ((VAR_9 + VAR_1) <= 255)
  VAR_11 = VAR_9 + VAR_1;
 else
  VAR_11 = 255;


 VAR_7 = FUNC_0(VAR_4, VAR_5,
    VAR_3 | VAR_2,
    VAR_10, VAR_11);
 if (VAR_7 != 0)
  goto exit_unsupported;

 VAR_9 = VAR_10[3];
 for (VAR_8 = 1; VAR_8 <= VAR_9; VAR_8++)
  if (VAR_10[3 + VAR_8] == VAR_6)
   goto exit_supported;
exit_unsupported:
 FUNC_1(VAR_10);
 return 0;
exit_supported:
 FUNC_1(VAR_10);
 return 1;
}
