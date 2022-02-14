
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_command {int flags; int opcode; int arg; } ;
struct mmc_card {int host; } ;
typedef int io_cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,int ,unsigned int,unsigned char) ;
 int FUNC_1 (struct mmc_command*,int ,int) ;
 int FUNC_2 (int ,struct mmc_command*,int ) ;

__attribute__((used)) static int FUNC_3(struct mmc_card *VAR_3,
        unsigned int VAR_4,
        unsigned char VAR_5)
{
 struct mmc_command VAR_6;

 FUNC_1(&VAR_6, 0, sizeof(VAR_6));
 FUNC_0(&VAR_6.arg, 1, 0, VAR_4, VAR_5);
 VAR_6.opcode = VAR_2;
 VAR_6.flags = VAR_1 | VAR_0;

 return FUNC_2(VAR_3->host, &VAR_6, 0);
}
