
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int host; } ;
typedef TYPE_1__ TW_Device_Extension ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (TYPE_1__*,int) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int,int) ;

__attribute__((used)) static int FUNC_7(TW_Device_Extension *VAR_4, int VAR_5)
{
 int VAR_6 = 0, VAR_7 = 1, VAR_8 = 0, VAR_9 = VAR_5;

 while (VAR_6 < VAR_1) {
  if (VAR_9) {
   FUNC_1(VAR_4);

   if (FUNC_5(VAR_4)) {
    FUNC_0(VAR_4->host, VAR_0, 0x36, "Response queue (large) empty failed during reset sequence");
    VAR_9 = 1;
    VAR_6++;
    continue;
   }
  }


  if (FUNC_6(VAR_4, VAR_3 | (VAR_9 == 1 ? VAR_2 : 0), 60)) {
   FUNC_0(VAR_4->host, VAR_0, 0x1f, "Microcontroller not ready during reset sequence");
   VAR_9 = 1;
   VAR_6++;
   continue;
  }


  if (FUNC_4(VAR_4)) {
   FUNC_0(VAR_4->host, VAR_0, 0x20, "Response queue empty failed during reset sequence");
   VAR_9 = 1;
   VAR_6++;
   continue;
  }

  VAR_8 = 0;


  if (FUNC_3(VAR_4, &VAR_8)) {
   FUNC_0(VAR_4->host, VAR_0, 0x21, "Compatibility check failed during reset sequence");
   VAR_9 = 1;
   VAR_6++;
   continue;
  } else {
   if (VAR_8) {
    VAR_6++;
    continue;
   }
  }


  if (FUNC_2(VAR_4, VAR_5)) {
   FUNC_0(VAR_4->host, VAR_0, 0x22, "AEN drain failed during reset sequence");
   VAR_9 = 1;
   VAR_6++;
   continue;
  }


  VAR_7 = 0;
  goto out;
 }
out:
 return VAR_7;
}
