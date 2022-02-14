
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ next_timeslot ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (long) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_5(void)
{
 static unsigned long VAR_5;
 unsigned long VAR_6, VAR_7;
 long VAR_8;
 int VAR_9 = 0;

 FUNC_0(&VAR_4);

 VAR_6 = VAR_2;
 VAR_7 = VAR_5 + VAR_3;

 if (FUNC_4(VAR_6, VAR_7)) {
  VAR_8 = (long)(VAR_7) - (long)VAR_6;
  FUNC_3(VAR_1);
  if (FUNC_2(VAR_8) > 0) {

   VAR_9 = -VAR_0;
   goto out;
  }
  VAR_6 = VAR_2;
 }

 VAR_5 = VAR_6;
out:
 FUNC_1(&VAR_4);

 return VAR_9;
}
