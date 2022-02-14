
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pqi_ctrl_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned char*) ;
 unsigned char* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,unsigned char*,int) ;
 int FUNC_3 (struct pqi_ctrl_info*,int *,int,unsigned char*,int) ;
 int FUNC_4 (struct pqi_ctrl_info*,int *,int) ;

__attribute__((used)) static int FUNC_5(struct pqi_ctrl_info *VAR_5,
 u8 *VAR_6, u8 *VAR_7, int VAR_8)
{
 int VAR_9;
 unsigned char *VAR_10;

 if (!FUNC_4(VAR_5, VAR_6, VAR_2))
  return 1;

 VAR_10 = FUNC_1(64, VAR_1);
 if (!VAR_10)
  return -VAR_0;

 VAR_9 = FUNC_3(VAR_5, VAR_6,
    VAR_4 | VAR_2,
    VAR_10, 64);
 if (VAR_9 == 0) {
  if (VAR_8 > 16)
   VAR_8 = 16;
  FUNC_2(VAR_7, &VAR_10[VAR_3], VAR_8);
 }

 FUNC_0(VAR_10);

 return VAR_9;
}
