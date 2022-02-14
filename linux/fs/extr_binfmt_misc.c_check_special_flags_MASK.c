
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; } ;
typedef TYPE_1__ Node ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static char *FUNC_1(char *VAR_4, Node *VAR_5)
{
 char *VAR_6 = VAR_4;
 int VAR_7 = 1;


 while (VAR_7) {
  switch (*VAR_6) {
  case 'P':
   FUNC_0("register: flag: P (preserve argv0)\n");
   VAR_6++;
   VAR_5->flags |= VAR_3;
   break;
  case 'O':
   FUNC_0("register: flag: O (open binary)\n");
   VAR_6++;
   VAR_5->flags |= VAR_1;
   break;
  case 'C':
   FUNC_0("register: flag: C (preserve creds)\n");
   VAR_6++;


   VAR_5->flags |= (VAR_0 |
     VAR_1);
   break;
  case 'F':
   FUNC_0("register: flag: F: open interpreter file now\n");
   VAR_6++;
   VAR_5->flags |= VAR_2;
   break;
  default:
   VAR_7 = 0;
  }
 }

 return VAR_6;
}
