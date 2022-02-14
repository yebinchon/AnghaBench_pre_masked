
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int residual_count; } ;
struct vscsibk_pend {unsigned char* sense_buffer; int result; TYPE_1__ se_cmd; struct vscsibk_info* info; } ;
struct vscsibk_info {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned char*,int,unsigned int,struct vscsibk_pend*) ;
 int FUNC_1 (struct vscsibk_pend*) ;
 int FUNC_2 (unsigned char*,int,struct vscsibk_pend*) ;
 int FUNC_3 (struct vscsibk_info*) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_5(struct vscsibk_pend *VAR_1)
{
 struct vscsibk_info *VAR_2 = VAR_1->info;
 unsigned char *VAR_3;
 unsigned int VAR_4;
 int VAR_5;

 VAR_3 = VAR_1->sense_buffer;
 VAR_4 = VAR_1->se_cmd.residual_count;
 VAR_5 = VAR_1->result;

 if (VAR_5 && VAR_0)
  FUNC_2(VAR_3, VAR_5, VAR_1);

 FUNC_1(VAR_1);
 FUNC_0(VAR_3, VAR_5, VAR_4, VAR_1);
 FUNC_3(VAR_2);





 FUNC_4(&VAR_1->se_cmd);
}
