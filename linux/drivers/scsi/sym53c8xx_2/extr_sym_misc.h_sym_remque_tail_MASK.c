
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sym_quehead {struct sym_quehead* blink; } ;


 int FUNC_0 (struct sym_quehead*,struct sym_quehead*) ;

__attribute__((used)) static inline struct sym_quehead *FUNC_1(struct sym_quehead *VAR_0)
{
 struct sym_quehead *VAR_1 = VAR_0->blink;

 if (VAR_1 != VAR_0)
  FUNC_0(VAR_1->blink, VAR_0);
 else
  VAR_1 = 0;
 return VAR_1;
}
