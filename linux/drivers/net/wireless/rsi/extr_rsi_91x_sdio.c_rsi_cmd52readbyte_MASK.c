
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mmc_command {int flags; int* resp; int arg; int opcode; } ;
struct mmc_card {int host; } ;
typedef int io_cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mmc_command*,int ,int) ;
 int FUNC_1 (int ,struct mmc_command*,int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct mmc_card *VAR_3,
        u32 VAR_4,
        u8 *VAR_5)
{
 struct mmc_command VAR_6;
 u32 VAR_7;
 int VAR_8;

 FUNC_0(&VAR_6, 0, sizeof(VAR_6));
 VAR_7 = FUNC_2(0, 0, 0, VAR_4, 0);
 VAR_6.opcode = VAR_2;
 VAR_6.arg = VAR_7;
 VAR_6.flags = VAR_1 | VAR_0;

 VAR_8 = FUNC_1(VAR_3->host, &VAR_6, 0);
 if ((!VAR_8) && (VAR_5))
  *VAR_5 = VAR_6.resp[0] & 0xFF;
 return VAR_8;
}
