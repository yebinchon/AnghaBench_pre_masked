
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; char* interpreter; char* magic; int offset; char* mask; int size; } ;
typedef TYPE_1__ Node ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* FUNC_0 (char*,char*,int ) ;
 int FUNC_1 (char*,char*,...) ;
 scalar_t__ FUNC_2 (int ,int*) ;

__attribute__((used)) static void FUNC_3(Node *VAR_7, char *VAR_8)
{
 char *VAR_9 = VAR_8;
 const char *VAR_10 = "disabled";

 if (FUNC_2(VAR_0, &VAR_7->flags))
  VAR_10 = "enabled";

 if (!VAR_6) {
  FUNC_1(VAR_8, "%s\n", VAR_10);
  return;
 }

 VAR_9 += FUNC_1(VAR_9, "%s\ninterpreter %s\n", VAR_10, VAR_7->interpreter);


 VAR_9 += FUNC_1(VAR_9, "flags: ");
 if (VAR_7->flags & VAR_4)
  *VAR_9++ = 'P';
 if (VAR_7->flags & VAR_2)
  *VAR_9++ = 'O';
 if (VAR_7->flags & VAR_1)
  *VAR_9++ = 'C';
 if (VAR_7->flags & VAR_3)
  *VAR_9++ = 'F';
 *VAR_9++ = '\n';

 if (!FUNC_2(VAR_5, &VAR_7->flags)) {
  FUNC_1(VAR_9, "extension .%s\n", VAR_7->magic);
 } else {
  VAR_9 += FUNC_1(VAR_9, "offset %i\nmagic ", VAR_7->offset);
  VAR_9 = FUNC_0(VAR_9, VAR_7->magic, VAR_7->size);
  if (VAR_7->mask) {
   VAR_9 += FUNC_1(VAR_9, "\nmask ");
   VAR_9 = FUNC_0(VAR_9, VAR_7->mask, VAR_7->size);
  }
  *VAR_9++ = '\n';
  *VAR_9 = '\0';
 }
}
