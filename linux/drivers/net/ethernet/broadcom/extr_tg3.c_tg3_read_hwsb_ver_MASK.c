
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tg3 {int * fw_ver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int,char*,int,int) ;
 scalar_t__ FUNC_1 (struct tg3*,int ,int*) ;

__attribute__((used)) static void FUNC_2(struct tg3 *VAR_5)
{
 u32 VAR_6, VAR_7, VAR_8;


 if (FUNC_1(VAR_5, VAR_0, &VAR_6))
  return;

 VAR_7 = (VAR_6 & VAR_1) >>
  VAR_2;
 VAR_8 = (VAR_6 & VAR_3) >>
  VAR_4;

 FUNC_0(&VAR_5->fw_ver[0], 32, "sb v%d.%02d", VAR_7, VAR_8);
}
