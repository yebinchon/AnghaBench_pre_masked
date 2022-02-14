
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sym_nvram {scalar_t__ type; } ;
struct sym_device {struct sym_nvram* nvram; } ;


 int FUNC_0 (struct sym_device*,struct sym_nvram*) ;

__attribute__((used)) static void FUNC_1(struct sym_device *VAR_0, struct sym_nvram *VAR_1)
{
 VAR_0->nvram = VAR_1;
 VAR_1->type = 0;

 FUNC_0(VAR_0, VAR_1);
}
