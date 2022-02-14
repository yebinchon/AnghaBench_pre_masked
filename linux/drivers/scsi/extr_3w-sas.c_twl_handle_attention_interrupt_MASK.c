
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_9__ {int flags; int * state; int host; } ;
typedef TYPE_1__ TW_Device_Extension ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int ,int,char*) ;
 int VAR_4 ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (TYPE_1__*,int) ;
 int FUNC_8 (TYPE_1__*,int) ;
 int FUNC_9 (TYPE_1__*,int*) ;

__attribute__((used)) static int FUNC_10(TW_Device_Extension *VAR_5)
{
 int VAR_6 = 1;
 u32 VAR_7, VAR_8;


 VAR_8 = FUNC_5(FUNC_2(VAR_5));


 if (VAR_8 & VAR_1) {
  FUNC_3(VAR_5->host, VAR_2, 0xd, "Microcontroller Error: clearing");
  goto out;
 }


 if (VAR_8 & VAR_0) {
  if (!(FUNC_6(VAR_3, &VAR_5->flags))) {
   FUNC_9(VAR_5, &VAR_7);
   if (FUNC_7(VAR_5, VAR_7)) {
    VAR_5->state[VAR_7] = VAR_4;
    FUNC_8(VAR_5, VAR_7);
    FUNC_4(VAR_3, &VAR_5->flags);
   }
  }
 }

 VAR_6 = 0;
out:

 FUNC_0(VAR_5);


 FUNC_5(FUNC_1(VAR_5));

 return VAR_6;
}
