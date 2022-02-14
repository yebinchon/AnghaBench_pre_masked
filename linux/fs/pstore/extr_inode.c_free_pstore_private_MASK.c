
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pstore_private {struct pstore_private* record; struct pstore_private* buf; } ;


 int FUNC_0 (struct pstore_private*) ;

__attribute__((used)) static void FUNC_1(struct pstore_private *VAR_0)
{
 if (!VAR_0)
  return;
 if (VAR_0->record) {
  FUNC_0(VAR_0->record->buf);
  FUNC_0(VAR_0->record);
 }
 FUNC_0(VAR_0);
}
