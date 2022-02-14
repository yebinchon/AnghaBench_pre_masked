
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__* args; } ;
struct cx18_in_work_order {char* str; int flags; TYPE_1__ mb; } ;
struct cx18 {scalar_t__ enc_mem; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct cx18*,char*,scalar_t__,int) ;
 int FUNC_1 (struct cx18*,scalar_t__) ;
 int FUNC_2 (struct cx18*,struct cx18_in_work_order*) ;

__attribute__((used)) static
int FUNC_3(struct cx18 *VAR_2, struct cx18_in_work_order *VAR_3)
{
 u32 VAR_4;
 char *VAR_5 = VAR_3->str;

 VAR_5[0] = '\0';
 VAR_4 = VAR_3->mb.args[1];
 if (VAR_4) {
  FUNC_1(VAR_2, VAR_4);
  FUNC_0(VAR_2, VAR_5, VAR_2->enc_mem + VAR_4, 252);
  VAR_5[252] = '\0';
  FUNC_1(VAR_2, VAR_1);
 }

 if ((VAR_3->flags & VAR_0) == 0)
  FUNC_2(VAR_2, VAR_3);

 return VAR_4 ? 1 : 0;
}
